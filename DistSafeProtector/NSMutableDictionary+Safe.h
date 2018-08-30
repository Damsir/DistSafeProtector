//
//  NSMutableDictionary+Safe.h
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (Safe)

@end


/*
 目前可避免以下crash

 1.直接调用 setObject:forKey
 2.通过下标方式赋值的时候，value为nil不会崩溃
    iOS11之前会调用 setObject:forKey
    iOS11之后（含11)  setObject:forKeyedSubscript:
 3.removeObjectForKey 
 */

