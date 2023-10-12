/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStaticSyncTask : NSObject {
    unsigned long long  _options;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _storeIdentifier;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3;
- (id)runWithCompletion:(id /* block */)arg1;

@end