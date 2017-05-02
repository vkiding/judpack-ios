/**
 * Created by JUD.
 * Copyright (c) 2017, JD, Inc. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import "JUDSDKInstance.h"

typedef NS_ENUM(int, JUDSDKErrCode)
{
    JUD_ERR_JSFRAMEWORK_START = -1001,
    JUD_ERR_JSFRAMEWORK_LOAD = -1002,
    JUD_ERR_JSFRAMEWORK_EXECUTE = -1003,
    JUD_ERR_JSFRAMEWORK_END = -1099,
    
    JUD_ERR_JSBRIDGE_START = -2001,
    JUD_ERR_JSFUNC_PARAM = -2009,
    JUD_ERR_INVOKE_NATIVE = -2012,
    JUD_ERR_JS_EXECUTE = -2013,
    JUD_ERR_JSBRIDGE_END = -2099,
    
    JUD_ERR_RENDER_START = -2100,
    JUD_ERR_RENDER_CREATEBODY = -2100,
    JUD_ERR_RENDER_UPDATTR = -2101,
    JUD_ERR_RENDER_UPDSTYLE = -2102,
    JUD_ERR_RENDER_ADDELEMENT = -2103,
    JUD_ERR_RENDER_REMOVEELEMENT = -2104,
    JUD_ERR_RENDER_MOVEELEMENT = -2105,
    JUD_ERR_RENDER_ADDEVENT = -2106,
    JUD_ERR_RENDER_REMOVEEVENT = -2107,
    JUD_ERR_RENDER_SCROLLTOELEMENT = -2110,
    JUD_ERR_RENDER_END = -2199,
    
    JUD_ERR_DOWNLOAD_START = -2201,
    JUD_ERR_JSBUNDLE_DOWNLOAD = -2202,
    JUD_ERR_JSBUNDLE_STRING_CONVERT = -2203,
    JUD_ERR_CANCEL = -2204,
    JUD_ERR_DOWNLOAD_END = -2299,
};
