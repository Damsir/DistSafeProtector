//
//  DistSafeProtector.m
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import "DistSafeProtector.h"

@implementation DistSafeProtector

+ (void)openSafeProtectorWithDebug:(BOOL)isDebug block:(DistSafeProtectorBlock)block {
    [NSObject openAllSafeProtectorWithDebug:isDebug block:block];
}

@end
