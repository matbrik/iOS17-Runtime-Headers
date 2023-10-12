/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataManager : NSObject <HDProfileReadyObserver> {
    NSObject<OS_dispatch_queue> * _demoDataQueue;
    HDDemoDataGenerator * _generator;
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDDemoDataGenerator *generator;
@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (id)generator;
- (id)initWithProfile:(id)arg1;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;

@end