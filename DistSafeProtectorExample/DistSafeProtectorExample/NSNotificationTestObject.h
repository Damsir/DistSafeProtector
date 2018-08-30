//
//  NSNotificationTestObject.h
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DistViewTestKVO.h"

@interface NSNotificationTestObject : NSObject

@property (nonatomic, weak) DistViewTestKVO *kvo;
@property (nonatomic, copy) NSString *name;

@end
