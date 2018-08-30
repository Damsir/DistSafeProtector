# DistSafeProtector
防止crash框架，不改变原代码支持KVO自释放，等12种crash
DistSafeProtector 是一个可快速集成但功能强大的防止crash库,不改变原代码支持KVO自释放，等12种crash.

CocoaPods 安装。

在 Podfile 中添加 pod 'DistSafeProtector'。
执行 pod install 或 pod update。(如搜索不到,请更新pod仓库pod repo update)
导入 "DistSafeProtector.h"。

使用

通过如下方式开启防止闪退功能,debug模式会打印crash日志，同时会利用断言来让程序闪退，也会回调block,达到测试环境及时发现及时修改，Release模式既不打印也不会断言闪退，会回调block，自己可以上传exception到bugly(注意线上环境isDebug一定要设置为NO)
//注意线上环境isDebug一定要设置为NO)
[DistSafeProtector openSafeProtectorWithDebug:YES block:^(NSException *exception, DistSafeProtectorCrashType crashType) {

}];
