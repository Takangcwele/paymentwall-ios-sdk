Paymentwall Alipay plugin
------------------------------
Paymentwall SDK supports external payment system injection (which are in our defined payment system (PS) list). Each time you want to add a new payment system, you have to include it's native SDK into your project along with our plugin framework, our framework will handle creating all the necessary parameters then you can use them to show the native local payment SDK:

1. Add the plugin with Cocoapods with `pod 'PWAlipayPlugin'` or manually dragging the `libPWAlipayPlugin.a` and it's headers file to your project
2. Import the library header into your project in `bridging-headers.h` if you use Swift
3. Setup the plugin, each plugin have different requirements so please check their header files and local payment option docs on their websites for more information:
```swift
let alipay = PWAlipayPlugin()

//Required
alipay.appId = "external"
alipay.appScheme = "YOUR APP SCHEME"
//For international alipay payment
alipay.itbPay = "30m"
alipay.forexBiz = "FP"
alipay.appenv = "system=ios^version=\(UIDevice.current.systemVersion)"

//Optional
alipay.pwProjectKey = "YOUR PROJECT KEY"
alipay.pwSecretKey = "YOUR SECRET KEY"

//Add to CoreSDK
PWCoreSDK.sharedInstance().addCustomPaymentOptions([alipay])
```
4. App scheme is required in `info.plist` in iOS 9.0 and above:
```xml
<key>CFBundleURLTypes</key>
<array>
    <dict>
    <key>CFBundleTypeRole</key>
    <string>Editor</string>
    <key>CFBundleURLName</key>
    <string></string>
    <key>CFBundleURLSchemes</key>
        <array>
            <string>YOUR APP SCHEME</string>
        </array>
    </dict>
</array>
```
5. Linking to Alipay app is required in `info.plist`:
```xml
<key>LSApplicationQueriesSchemes</key>
<array>
    <string>alipay</string>
    <string>safepay</string>
    <string>platformapi</string>
</array>
```
