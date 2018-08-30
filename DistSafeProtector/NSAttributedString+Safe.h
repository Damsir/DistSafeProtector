//
//  NSAttributedString+Safe.h
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSAttributedString (Safe)

@end


/*
 
 目前可避免以下方法crash
    1.- (instancetype)initWithString:(NSString *)str;
    2.- (instancetype)initWithString:(NSString *)str attributes:(nullable NSDictionary<NSAttributedStringKey, id> *)attrs;
    3.- (instancetype)initWithAttributedString:(NSAttributedString *)attrStr;
 
 */
