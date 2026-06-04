## cordova-plugin-inappbrowser version: 5.0.1

### wg versoin: 1

- android / ios
  * add cookie support

### version 5.0.1-4
ignore ios open url with "/check-face"

### version 5.0.1-5, 5.0.1-6, 5.0.1-7, 5.0.1-8
avoid google oauth error: 403：disallowed_useragent

### version 5.0.1-9
fix ios session default value

### version 5.0.1-10
revert 5.0.1-9

### version 5.0.1-11
support android 13

### version 5.0.1-12
support ios SDK 17.4 webview setInspectable

### version 5.0.1-13(deprecate: has error code)
support android 13:
replace WRITE_EXTERNAL_STORAGE to [READ_MEDIA_IMAGES,READ_MEDIA_VIDEO,READ_MEDIA_AUDIO]

### version 5.0.1-14
support android 13:
replace WRITE_EXTERNAL_STORAGE to [READ_MEDIA_IMAGES,READ_MEDIA_VIDEO,READ_MEDIA_AUDIO]


### version 5.0.1-15
revert "support ios SDK 17.4 webview setInspectable" cause CI use the lower xCode dose not support

### version 5.0.1-16
Use capacitor.config.json to set inappbrowser userAgent.

### version 5.0.1-17
Delete [READ_MEDIA_IMAGES,READ_MEDIA_VIDEO,READ_MEDIA_AUDIO] permission on Android 13 and above 

### version 5.0.1-18
Application.OpenURL doesn't work on iOS 18+

### version 5.0.1-19

🛠 iOS Changes
- InAppBrowser is now initialized only after browser data (cookies/cache/session) is fully cleared.
- Added log output during the clearing process for easier debugging and tracking.

### version 5.0.1-20

🛠 iOS Changes
- Change `Logger.h` to `CDVWKInAppBrowserLogger.h` to avoid conflict with other plugins.

### version 5.0.1-21

🛠 iOS Changes
- Fixed browser not exiting properly when `browserOptions.hidden` is true
- Fixed backend cookie invalidation caused by set `browserOptions.session` to cookies
- Fixed browserOptions not updating on multiple opens

### version 5.0.1-22

🛠 Android Changes
- Fixed WebView not truly destroyed on close — was left loaded with `about:blank` instead of being released
- Fixed potential NPE in `onPause`/`onResume` after WebView is destroyed
- Fixed potential NPE in `loadAfterBeforeload` and `injectDeferredObject` due to race condition between `runOnUiThread` and `closeDialog()`
- Fixed memory leak: temporary WebView created in `onCreateWindow` (for `target="_blank"` handling) is now properly destroyed after URL is intercepted

🛠 iOS Changes
- Fixed potential crash in `evaluateJavaScript` when called after browser is closed
