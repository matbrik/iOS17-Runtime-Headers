/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSuzeLeaseSession : NSObject {
    long long  _automaticRefreshCount;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    ICSuzeLeaseSessionConfiguration * _configuration;
    <ICSuzeLeaseSessionDelegate> * _delegate;
    bool  _isRunning;
    NSDate * _leaseExpirationDate;
    NSObject<OS_dispatch_source> * _leaseRenewTimer;
    ICFPLeaseSyncSession * _leaseSyncSession;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, readonly, copy) ICSuzeLeaseSessionConfiguration *configuration;
@property (nonatomic) <ICSuzeLeaseSessionDelegate> *delegate;

- (void).cxx_destruct;
- (id)_newSuzeLeaseRequestWithType:(long long)arg1 clientData:(id)arg2;
- (void)_renewLeaseTimerAction;
- (void)_updateRenewalTimer;
- (void)_updateRenewalTimerWithResponse:(id)arg1;
- (void)beginAutomaticallyRefreshingLease;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)endAutomaticallyRefreshingLease;
- (id)initWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startLeaseSessionWithCompletionHandler:(id /* block */)arg1;
- (void)stopLeaseSessionWithCompletionHandler:(id /* block */)arg1;

@end