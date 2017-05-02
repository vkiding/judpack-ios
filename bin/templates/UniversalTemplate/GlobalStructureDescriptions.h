//
//  GlobalStructureDescriptions.h
//  JudDemo
//
//  Created by ChengJianFeng on 2017/2/23.
//  Copyright © 2017年 ChengJianFeng. All rights reserved.
//
//========项目结构职责说明========

/*
 全局文件结构说明区
 */

/*
 * 后续研发向公共区域添加文件时要根据相应的职责 添加到对应的目录
 */

/*   一级目录分类
 * JDStructureDescriptions.h ：项目目录结构说明文件
 *
 * ==项目公共区域存放目录==
 * /Constant   ：项目公共宏定义存放目录,细分职责详见JDDefine.h 进一步说明
 * /Common     ：公共控件、第三方库进一步封装代码、公用工具的存放目录
 * /Category   : 分类存放点
 * /Libraries  ：代码形式第三方库存放目录
 * /SystemManager  ：项目中全局管理类
 * /Resource   ：项目中用到公共资源图片存放目录
 *
 *   ==项目业务模块存放目录==
 * /Business   ：项目中业务模块目录
 * /
 
/*  Constant目录细分
 * GlobalNotificationConstant.h： 全局通知key定义处
 * GlobalConfigManager.h：调试与编译相关宏
 * GlobalColorConstant.h：全局通用颜色定义区，全局颜色简便调用宏定义区
 * GlobalPublicConstant.h：其他公共宏定义处
 * GlobalSynthesizeSingleton.h：单例宏
 */

/*  Business目录细分
 * /Controller： VC控制器，以及其分类
 * /Manager：管理器，比如数据管理器、网络管理器等
 * /Model：模型层
 * /View：视图层
 * /Other：其他配置文件等
 * /Resource: 资源文件夹
 */






