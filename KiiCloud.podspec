Pod::Spec.new do |s|

  s.name         = "KiiCloud"
  s.version= "2.6.6"
  s.summary      = "A Cloud Storage SDK of KiiCloud."
  s.description  = <<-DESC
                   A Cloud Storage SDK of KiiCloud for iOS
                   DESC
  s.homepage     = 'http://www.kii.com'  
  s.documentation_url = 'http://documentation.kii.com/references/ios/storage/latest/'
  s.author             = { "KiiCorp" => "npm-admin@kii.com" }
  s.platform     = :ios
  s.license      = { :type => 'Kii', :file => 'LICENSE.md' }
  s.source = { :git => 'https://github.com/KiiCorp/KiiCloudSDK-iOS.git', :tag => 'v2.6.6'  }
  s.source_files  = 'KiiSDK.framework/**/*.h'
  s.public_header_files = 'KiiSDK.framework/**/*.h'
  s.preserve_paths = "KiiSDK.framework"
  s.vendored_frameworks = "KiiSDK.framework"

  s.frameworks = "MobileCoreServices", "Accounts", "Social", "Security", "ImageIO"
  s.libraries = "sqlite3"
  
  s.platform     = :ios, '8.0'
  s.requires_arc = true

end
