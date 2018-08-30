//
//  NSNotificationTestObject.m
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import "NSNotificationTestObject.h"

@implementation NSNotificationTestObject

- (void)handle:(NSNotification*)note {
    NSLog(@"11111111");
}

- (void)dealloc {
    NSLog(@"%@  dealloc",NSStringFromClass([self class]));
    [[NSNotificationCenter defaultCenter]removeObserver:self];
    [self removeObserver:self forKeyPath:@"name"];
//    [self.kvo removeObserver:self forKeyPath:@"name"];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey,id> *)change context:(void *)context {
    id con=(__bridge id)(context);
    NSLog(@"11111111%@",con);
}

@end
