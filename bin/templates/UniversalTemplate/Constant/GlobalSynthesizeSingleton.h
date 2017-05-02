//
//  GlobalSynthesizeSingleton.h
//  JudDemo
//
//  Created by ChengJianFeng on 2017/2/23.
//  Copyright © 2017年 ChengJianFeng. All rights reserved.
//

/*
 单例宏
 */

#ifndef GlobalSynthesizeSingleton_h
#define GlobalSynthesizeSingleton_h


/**
 ARC下单例生成宏

 @param classname 类名
 @return 单例对象
 */
#define SYNTHESIZE_SINGLETON_FOR_CLASS_ARC(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)shared##classname \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [[self alloc] init]; \
} \
} \
\
return shared##classname; \
} \
\
+ (id)allocWithZone:(NSZone *)zone \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [super allocWithZone:zone]; \
return shared##classname; \
} \
} \
\
return shared##classname; \
} \
\
- (id)copyWithZone:(NSZone *)zone \
{ \
return self; \
}



/**
 MRC下单例生成宏

 @param classname 类名
 @return 单例对象
 */
#define SYNTHESIZE_SINGLETON_FOR_CLASS_MRC(classname) \
\
static classname *shared##classname = nil; \
\
+ (classname *)shared##classname \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [[self alloc] init]; \
} \
} \
\
return shared##classname; \
} \
\
+ (id)allocWithZone:(NSZone *)zone \
{ \
@synchronized(self) \
{ \
if (shared##classname == nil) \
{ \
shared##classname = [super allocWithZone:zone]; \
return shared##classname; \
} \
} \
\
return nil; \
} \
\
- (id)copyWithZone:(NSZone *)zone \
{ \
return self; \
} \
\
- (id)retain \
{ \
return self; \
} \
\
- (NSUInteger)retainCount \
{ \
return NSUIntegerMax; \
} \
\
- (oneway void)release \
{ \
} \
\
- (id)autorelease \
{ \
return self; \
}


/**
 ARC与MRC区分宏，每个文件都有自己的objc_arc值

 @param objc_arc 是否为ARC
 @return 将宏定义为正确的模式
 */
#if __has_feature(objc_arc)
#define SYNTHESIZE_SINGLETON_FOR_CLASS(classname) SYNTHESIZE_SINGLETON_FOR_CLASS_ARC(classname)
#else
#define SYNTHESIZE_SINGLETON_FOR_CLASS(classname) SYNTHESIZE_SINGLETON_FOR_CLASS_MRC(classname)
#endif


#endif /* GlobalSynthesizeSingleton_h */
