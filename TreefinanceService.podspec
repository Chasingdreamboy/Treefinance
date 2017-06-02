Pod::Spec.new do |s|
  s.name = "TreefinanceService"
  s.version = "0.0.16"
  s.summary = "A short description of TreefinanceService."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"acct<blob>=<NULL>"=>"wangerdong@treefinance.com.cn"}
  s.homepage = "https://github.com/acct<blob>=<NULL>/TreefinanceService"
  s.description = "TreefinanceService made by Treefinance technology."
  s.frameworks = ["UIKit", "MapKit"]
  s.requires_arc = "TreefinanceService/Classes/Arc/**/*"
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/TreefinanceService.framework'
end
