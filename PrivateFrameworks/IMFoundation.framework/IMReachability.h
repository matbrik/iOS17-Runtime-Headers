/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMReachability : NSObject {
    <IMReachabilityDelegate> * _delegate;
    NSString * _description;
    unsigned long long  _flags;
    bool  _gettingFlags;
    NSObject<OS_dispatch_queue> * _queue;
    void * _reachabilityRef;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) bool connectionRequired;
@property (nonatomic) <IMReachabilityDelegate> *delegate;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) bool gettingFlags;
@property (nonatomic, retain) NSString *reachabilityDescription;
@property (nonatomic) void*reachabilityRef;

+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2;
+ (id)reachabilityWithRemoteAddress:(id)arg1;

- (void).cxx_destruct;
- (void)_forceGetFlagsIfNecessary;
- (void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability { }*)arg1;
- (id)_initWithReachabilityRef:(struct __SCNetworkReachability { }*)arg1 description:(id)arg2 delegate:(id)arg3;
- (id)_queue;
- (bool)connectionRequired;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned long long)flags;
- (bool)gettingFlags;
- (id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;
- (id)reachabilityDescription;
- (void*)reachabilityRef;
- (void)setDelegate:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setGettingFlags:(bool)arg1;
- (void)setReachabilityDescription:(id)arg1;
- (void)setReachabilityRef:(void*)arg1;
- (void)set_queue:(id)arg1;

@end