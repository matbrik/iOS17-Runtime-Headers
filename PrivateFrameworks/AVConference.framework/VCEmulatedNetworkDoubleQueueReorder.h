/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCEmulatedNetworkDoubleQueueReorder : VCEmulatedNetworkDoubleQueue {
    double  _correlation;
    int  _gap;
    double  _probability;
    int  _reorderGap;
    int  _state;
    bool  _useMarkovModel;
}

- (void)dealloc;
- (id)initWithPolicies:(id)arg1;
- (void)push:(id)arg1;
- (bool)shouldSendPacketImmediatelyMM;

@end