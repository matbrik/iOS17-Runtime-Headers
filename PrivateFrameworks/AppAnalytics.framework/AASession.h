/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
 */

@interface AASession : NSObject {
    void identifier;
    void kind;
    void name;
    void sessionData;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *sessionData;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (long long)kind;
- (id)name;
- (id)sessionData;
- (id)startDate;

@end