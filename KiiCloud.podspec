Pod::Spec.new do |s|

  s.name         = "KiiCloud"
  s.version= "2.7.8"
  s.summary      = "A Cloud Storage SDK of KiiCloud."
  s.description  = <<-DESC
                   A Cloud Storage SDK of KiiCloud for iOS
                   DESC
  s.homepage     = 'https://en.kii.com/'
  s.documentation_url = 'https://documentation.kii.com/en/'
  s.author             = { "KiiCorp" => "npm-admin@kii.com" }
  s.platform     = :ios
  s.license      = { :type => 'Kii', :file => 'LICENSE.md' }
  s.source = { :git => 'https://github.com/KiiCorp/KiiCloudSDK-iOS.git', :tag => 'v2.7.8'  }
  s.vendored_xcframeworks = 'KiiCloud.xcframework'

  s.frameworks = "MobileCoreServices", "Accounts", "Social", "Security", "ImageIO"
  s.libraries = "sqlite3"

  s.platform     = :ios, '8.0'
  s.requires_arc = true

end
