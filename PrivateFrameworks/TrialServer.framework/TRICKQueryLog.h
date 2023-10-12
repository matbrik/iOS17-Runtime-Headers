/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRICKQueryLog : NSObject {
    _PASLock * _lock;
    <TRIPaths> * _paths;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_logQueryWithRecordType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 guardedData:(id)arg4;
- (void)_openFileIfNeededWithGuardedData:(id)arg1;
- (id)initWithPaths:(id)arg1;
- (void)logQueryWithRecordType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;

@end