
Pod::Spec.new do |s|



  s.name         = "LTCategories"
  s.version      = "0.0.1"
  s.summary      = "LTCategories(iOS-Categories,Category)."

  s.description  = "LTCategories(iOS-Categories,Category) Use for iOS Project"
  s.homepage     = "https://github.com/hongfenglt/LTCategories"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "洪峰" => "hongfengkt@gmail.com" }
  s.platform     = :ios, "8.0"
  s.ios.deployment_target = "7.0"



  s.source       = { :git => "https://github.com/hongfenglt/LTCategories.git", :tag => "#{s.version}" }

  s.source_files  = "LTCategories", "LTCategories/**/*.{h,m}"

  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  # s.resource  = "icon.png"
  # s.resources = "Resources/*.png"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"


end
