//
//  ViewController.m
//  JudDemo
//
//  Created by vkiding on 17/5/2.
//  Copyright © 2017年 vkiding. All rights reserved.
//

#import "ViewController.h"
#include <arpa/inet.h>
#include <net/if.h>
#include <ifaddrs.h>

@interface ViewController ()

@property (nonatomic, strong) JUDSDKInstance *instance;
@property (nonatomic, strong) UIView *viewJud;
@property (nonatomic, assign) CGFloat heightJud;

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    _heightJud = self.view.frame.size.height - 64;
    [self.navigationController.navigationBar setHidden:YES];
    [self render];
}

- (void)dealloc
{
    [_instance destroyInstance];
}

- (void)render
{
    _instance = [[JUDSDKInstance alloc] init];
    _instance.viewController = self;
    CGFloat width = self.view.frame.size.width;
    _instance.frame = CGRectMake(self.view.frame.size.width-width, 0, width, _heightJud);
    
    __weak typeof(self) weakSelf = self;
    _instance.onCreate = ^(UIView *view) {
        [weakSelf.viewJud removeFromSuperview];
        weakSelf.viewJud = view;
        [weakSelf.view addSubview:weakSelf.viewJud];
        UIAccessibilityPostNotification(UIAccessibilityScreenChangedNotification, weakSelf.viewJud);
    };
    _instance.onFailed = ^(NSError *error) {
        NSLog(@"failed %@",error);
    };
    
    _instance.renderFinish = ^(UIView *view) {
        NSLog(@"render finish");
    };
    
    _instance.updateFinish = ^(UIView *view) {
        NSLog(@"update Finish");
    };
    
    NSURL *URL = [NSURL URLWithString:[NSString stringWithFormat:@"http://%@:8080/dist/index.js",[self getPackageHost]]];
    NSString *randomURL = [NSString stringWithFormat:@"%@%@random=%d",URL.absoluteString,URL.query?@"&":@"?",arc4random()];
    [_instance renderWithURL:[NSURL URLWithString:randomURL] options:@{@"bundleUrl":URL.absoluteString} data:nil];
    
    NSString *bundlePath = [[NSBundle mainBundle] bundlePath];
    
    NSLog(@"bundlePath : %@",bundlePath);
    NSLog(@"Request URL : %@",URL);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark -

- (NSString *)getPackageHost
{
    NSString *address = nil;
    struct ifaddrs *interfaces = NULL;
    struct ifaddrs *temp_addr = NULL;
    int success = 0;
    // retrieve the current interfaces - returns 0 on success
    success = getifaddrs(&interfaces);
    if (success == 0)
    {
        // Loop through linked list of interfaces
        temp_addr = interfaces;
        while(temp_addr != NULL)
        {
            if(temp_addr->ifa_addr->sa_family == AF_INET)
            {
                // Check if interface is en0 which is the wifi connection on the iPhone
                if([[NSString stringWithUTF8String:temp_addr->ifa_name] isEqualToString:@"en0"])
                {
                    // Get NSString from C String
                    address = [NSString stringWithUTF8String:inet_ntoa(((struct sockaddr_in *)temp_addr->ifa_addr)->sin_addr)];
                }
            }
            temp_addr = temp_addr->ifa_next;
        }
    }
    // Free memory
    freeifaddrs(interfaces);
    
    NSString *host = address ?: @"localhost";
    return host;
}

@end
