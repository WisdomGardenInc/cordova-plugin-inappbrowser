// CDVWKInAppBrowserLogger.h
#ifndef CDVWKInAppBrowserLogger_h
#define CDVWKInAppBrowserLogger_h

// Log level definitions
#define LOG_INFO    @"INFO"
#define LOG_WARN    @"WARN"
#define LOG_ERROR   @"ERROR"

// Log macro output to stderr (visible in Xcode console)
#define AppLog(level, fmt, ...) \
    fprintf(stderr, "[%s] %s [Line %d] %s\n", \
        [level UTF8String], __FUNCTION__, __LINE__, \
        [[NSString stringWithFormat:(fmt), ##__VA_ARGS__] UTF8String])

#define AppLogInfo(fmt, ...)  AppLog(LOG_INFO, fmt, ##__VA_ARGS__)
#define AppLogWarn(fmt, ...)  AppLog(LOG_WARN, fmt, ##__VA_ARGS__)
#define AppLogError(fmt, ...) AppLog(LOG_ERROR, fmt, ##__VA_ARGS__)

#endif /* CDVWKInAppBrowserLogger_h */
