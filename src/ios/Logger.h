// Logger.h
#ifndef Logger_h
#define Logger_h

// 日志级别定义（可选）
#define LOG_INFO    @"INFO"
#define LOG_WARN    @"WARN"
#define LOG_ERROR   @"ERROR"

// 日志输出宏（会输出到 stderr，出现在 Xcode Console）
#define AppLog(level, fmt, ...) \
    fprintf(stderr, "[%s] %s [Line %d] %s\n", \
        [level UTF8String], __FUNCTION__, __LINE__, \
        [[NSString stringWithFormat:(fmt), ##__VA_ARGS__] UTF8String])

#define AppLogInfo(fmt, ...)  AppLog(LOG_INFO, fmt, ##__VA_ARGS__)
#define AppLogWarn(fmt, ...)  AppLog(LOG_WARN, fmt, ##__VA_ARGS__)
#define AppLogError(fmt, ...) AppLog(LOG_ERROR, fmt, ##__VA_ARGS__)

#endif /* Logger_h */
