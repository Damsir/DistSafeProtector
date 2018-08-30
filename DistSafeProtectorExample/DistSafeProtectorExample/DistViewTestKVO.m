
//
//  DistViewTestKVO.m
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import "DistViewTestKVO.h"

@implementation DistViewTestKVO

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey,id> *)change context:(void *)context {
    NSLog(@"11111111");
}

- (void)dealloc {
    NSLog(@"dealloc   %@",NSStringFromClass([self class]));
    
//    [self.con removeObserver:self forKeyPath:@"kvoTest"];
//    [self.con removeObserver:self forKeyPath:@"kvoTest111111"];
//    [self.con removeObserver:self forKeyPath:@"kvoTest2"];
}

@end
