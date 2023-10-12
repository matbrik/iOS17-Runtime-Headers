/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2MOBIKE : NSObject <NSObject> {
    bool  _mobikeEarlyDisconnect;
    bool  _mobikeInProgress;
    NWInterface * _mobikeInterface;
    long long  _mobikePathStatus;
    bool  _mobikePending;
    NSObject<OS_dispatch_queue> * _mobikeQueue;
    bool  _mobikeReasserting;
    NSString * _mobikeServer;
    NWInterface * _mobikeTransportInterface;
    unsigned long long  _mobikeTries;
    NSObject<OS_dispatch_source> * _mobikeWaitTimer;
    NSString * _overrideServerPortString;
    NEIKEv2PacketTunnelProvider * _tunnelProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end