/** Custom open options supported by @wisdomgarden/cordova-plugin-inappbrowser. */
export interface WGInAppBrowserOptions {
    /**
     * Session cookie value for Android and iOS.
     * Android: supply a string; it is sent as the Cookie request header's session value.
     * iOS: defaults to "no-session", which skips injecting the session cookie.
     * Android does not interpret "no-session" specially.
     */
    session?: string;
    /**
     * Android and iOS: set to "yes" to adjust the WebView user agent for the
     * Google OAuth disallowed_useragent workaround (default: "no").
     */
    avoidGoogleAuthDisallowedUserAgent?: "yes" | "no";
    /**
     * (iOS Only) On iOS 26+, inset the viewport below the top safe area (default: "yes").
     * Set to "no" to disable the top inset. Does not add bottom safe-area spacing
     * or change toolbar colors or the scroll-edge effect. Ignored on earlier iOS versions.
     */
    safearea?: "yes" | "no";
}
