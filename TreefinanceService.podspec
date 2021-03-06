Pod::Spec.new do |s|
  s.name = "TreefinanceService"
  s.version = "0.0.29"
  s.summary = "Use for get information in backgroud"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"acct<blob>=<NULL>"=>"wangerdong@treefinance.com.cn"}
  s.homepage = "https://github.com/acct<blob>=<NULL>/TreefinanceService"
  s.description = "TODO: Add long description of the pod here."
  s.frameworks = ["UIKit", "MapKit", "ImageIO", "MobileCoreServices", "AssetsLibrary", "Accelerate", "CoreTelephony", "CoreLocation", "SystemConfiguration"]
  s.libraries = "icucore"
  s.requires_arc = "TreefinanceService/Classes/Arc/**/*"
  s.source = { :git => 'https://github.com/Chasingdreamboy/Treefinance.git' }
  s.resource = 'ios/TreefinanceService.bundle' 

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/TreefinanceService.framework'
end
