/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction
 */

@interface APOdmlDatabaseConfiguration : APOdmlSingleton {
    bool  _isDaemonProcess;
}

@property (nonatomic, readonly) bool isDaemonProcess;

+ (id)sharedInstance;

- (id)init;
- (bool)isDaemonProcess;
- (void)setProcessToDaemon;

@end