/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutEventCollector : NSObject {
    <HDWorkoutEventCollectorDelegate> * _delegate;
    HDProfile * _profile;
    NSUUID * _sessionId;
}

@property (readonly) <HDWorkoutEventCollectorDelegate> *delegate;
@property (readonly) HDProfile *profile;
@property (readonly) NSUUID *sessionId;

+ (bool)isAvailableInCurrentHardware;
+ (bool)supportsWorkoutActivityType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (void)fakeActivityDetection:(id)arg1 workoutActivity:(id)arg2;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (id)profile;
- (void)requestPendingEventsThroughDate:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionId;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (void)unitTest_setCMWorkoutManager:(id)arg1;

@end