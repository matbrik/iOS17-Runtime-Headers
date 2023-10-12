/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSmoothingTask : NSObject {
    id /* block */  _completionHandler;
    bool  _isTimedOut;
    NSArray * _routes;
    unsigned long long  _smoothingAttempts;
    double  _smoothingTaskTimeout;
    HDDaemonTransaction * _transaction;
    NSArray * _unsmoothedLocations;
    HKWorkout * _workout;
}

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;

@end