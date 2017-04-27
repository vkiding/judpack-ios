# coding: utf-8

Pod::Spec.new do |s|
  s.name         = "judplugin"
  s.version      = "0.0.1"
  s.summary      = "jud plugin container"

  s.description  = <<-DESC
                   judplugin Source Description
                   DESC

  s.homepage     = "https://github.com/judteam/jud-pack.git"
  s.license = {
    :type => 'Copyright',
    :text => <<-LICENSE
           Alibaba-INC copyright
    LICENSE
  }
  s.authors      = {
                     "yangshengtao" =>"yangshengtao1314@163.com"
                   }
  s.platform     = :ios
  s.ios.deployment_target = "7.0"

  s.source =  { :path => '.' }
  s.source_files  = "judplugin/**/*.{h,m,mm}"
  # s.exclude_files = "Classes/Exclude"
  s.resources = "judplugin/Resources/*"
  

  s.requires_arc = true

  #s.xcconfig = { "FRAMEWORK_SEARCH_PATHS" => "$(SDKROOT)/TRemoteDebugger" }
  s.dependency "judSDK"
  #${judpackPlaceHolder}

  # s.vendored_frameworks = 'judplugin.framework'

  # s.user_target_xcconfig  = { 'FRAMEWORK_SEARCH_PATHS' => "'$(PODS_ROOT)/judplugin'" }

end
