//
//  DistSafeProtector.h
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+Safe.h"

#ifdef DEBUG
static BOOL isDebug = TRUE;
#else
static BOOL isDebug = FALSE;
#endif

/**
 使用说明:
 1.Debug = YES,代表开发环境,捕捉到崩溃,会打印崩溃信息,同时利用断言闪退,会回调block
 2.Debug = NO,代表生产环境,拦截到崩溃,不打印崩溃信息,也不会断言闪退,会回调block
 */

@interface DistSafeProtector : NSObject

// 打开目前所支持的所有安全保护,回调block
+ (void)openSafeProtectorWithDebug:(BOOL)isDebug block:(DistSafeProtectorBlock)block;

@end
