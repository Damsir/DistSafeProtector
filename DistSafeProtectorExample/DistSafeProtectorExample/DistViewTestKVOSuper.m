

//
//  DistViewTestKVOSuper.m
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import "DistViewTestKVOSuper.h"
#import "NSNotificationTestObject.h"

@interface DistViewTestKVOSuper()

@property (nonatomic,strong) NSNotificationTestObject *testObject;
@property (nonatomic,strong) NSHashTable *table;

@end

@implementation DistViewTestKVOSuper

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        self.testObject = [NSNotificationTestObject new];
//        [self addObserver:self.testObject forKeyPath:@"326863287" options:(NSKeyValueObservingOptionNew) context:nil];
        self.table = [[NSHashTable alloc]initWithOptions:(NSPointerFunctionsWeakMemory) capacity:10];
//        [self.table addObject:self];
        
    }
    return self;
}

- (void)dealloc {
    NSLog(@"");
}

@end
