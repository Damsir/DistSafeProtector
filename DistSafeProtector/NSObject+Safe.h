//
//  NSObject+Safe.h
//  DistSafeProtectorExample
//
//  Created by 吴定如 on 2018/8/30.
//  Copyright © 2018年 Dist. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>

#define  DistSafeLog(fmt, ...)  NSLog(fmt, ##__VA_ARGS__)
#define  DistSafeProtectionCrashLog(exception, crash)  [NSObject safe_logCrashWithException:exception crashType:crash]

// NSNotificationCenter 即使设置LogTypeAll 也不会打印，
// iOS9之后系统已经优化了，即使不移除也不会崩溃， 所以仅iOS8系统会出现此类型carsh,但是有的类是在dealloc里移除通知，而我们是在所有类的dealloc方法之前检测是否移除，没移除则去移除所以会误报crash，干脆直接不报此类型crash了

typedef enum : NSUInteger {
    DistSafeProtectorLogTypeNone,//所有log都不打印
    DistSafeProtectorLogTypeAll,//打印所有log
} DistSafeProtectorLogType;

// 哪个类型的crash
typedef enum : NSUInteger {
    DistSafeProtectorCrashTypeSelector,
    DistSafeProtectorCrashTypeKVO,
    DistSafeProtectorCrashTypeNSArray,
    DistSafeProtectorCrashTypeNSMutableArray,
    DistSafeProtectorCrashTypeNSDictionary,
    DistSafeProtectorCrashTypeNSMutableDictionary,
    DistSafeProtectorCrashTypeNSStirng,
    DistSafeProtectorCrashTypeNSMutableString,
    DistSafeProtectorCrashTypeNSAttributedString,
    DistSafeProtectorCrashTypeNSMutableAttributedString,
    DistSafeProtectorCrashTypeNSNotificationCenter,
    DistSafeProtectorCrashTypeNSTimer,
} DistSafeProtectorCrashType;

// 不要忘记补充下面的文字
#define CrashTypeArray @[@"DistSafeProtectorCrashTypeSelector",    @"DistSafeProtectorCrashTypeKVO",     @"DistSafeProtectorCrashTypeNSArray", @"DistSafeProtectorCrashTypeNSMutableArray",  @"DistSafeProtectorCrashTypeNSDictionary",    @"DistSafeProtectorCrashTypeNSMutableDictionary", @"DistSafeProtectorCrashTypeNSStirng",    @"DistSafeProtectorCrashTypeNSMutableString", @"DistSafeProtectorCrashTypeNSAttributedString",  @"DistSafeProtectorCrashTypeNSMutableAttributedString",   @"DistSafeProtectorCrashTypeNSNotificationCenter",  @"DistSafeProtectorCrashTypeNSTimer"]


typedef void(^DistSafeProtectorBlock)(NSException *exception,DistSafeProtectorCrashType crashType);

@interface  NSObject (Safe)

// 打开目前所支持的所有安全保护 回调block
+ (void)openAllSafeProtectorWithDebug:(BOOL)isDebug block:(DistSafeProtectorBlock)block;

// 打开当前类安全保护
+ (void)openSafeProtector;

// 交换类方法
+ (void)safe_exchangeClassMethod:(Class)dClass originalSel:(SEL)originalSelector newSel:(SEL)newSelector;

// 交换对象方法
+ (void)safe_exchangeInstanceMethod:(Class)dClass originalSel:(SEL)originalSelector newSel:(SEL)newSelector;

// 打印crash信息
+ (void)safe_logCrashWithException:(NSException *)exception crashType:(DistSafeProtectorCrashType)crashType;

@end



