Pod::Spec.new do |s|

  s.name         = "DistSafeProtector"
  s.version      = "1.0.1"
  s.summary      = "防止crash框架，支持KVO自释放等12种类型"
  s.author       = { "Damrin" => "75081647@qq.com" }
  s.homepage    = 'https://github.com/Damsir/DistSafeProtector'
  s.source      = { :git => 'https://github.com/Damsir/DistSafeProtector.git', :tag => s.version }
  s.license = "MIT"
  s.platform = :ios, "8.0"
  s.requires_arc = true
  s.source_files = "DistSafeProtector", "DistSafeProtector/**/*.{h,m}"
  # s.public_header_files = "DistPopView/*.h"
  #s.resources = 'DistDownload/Resource/*.{bundle}'
  s.framework = 'UIKit'
  s.ios.deployment_target = "8.0"

end