/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

@interface HUUtilities : NSObject {
    HURoutesManager * _routesManager;
    NSObject<OS_dispatch_queue> * _routingQueue;
    bool  _takingConnection;
}

@property (nonatomic, retain) HURoutesManager *routesManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) bool takingConnection;

+ (id)XDCObjectFromObject:(id)arg1;
+ (id)objectFromXDCObject:(id)arg1;
+ (id)sharedUtilities;
+ (bool)shouldUseMultideviceV3;

- (void).cxx_destruct;
- (void)addHearingFeatureUsage:(unsigned long long)arg1;
- (void)checkAudioPlayingWithQueue:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)checkAudioPlayingWithQueue:(id)arg1 origin:(void*)arg2 andCompletion:(id /* block */)arg3;
- (void)clearAudioRoutes;
- (id)currentPickableAudioRoutes;
- (id)currentPickableAudioRoutesIfExist;
- (void)dealloc;
- (bool)deviceIsTinker;
- (bool)hearingAidRouteAvailable;
- (void)hearingAidRouteAvailableAsync:(id /* block */)arg1;
- (bool)hearingAidRouteAvailableForAvailableRoutes:(id)arg1;
- (id)init;
- (void)pauseNowPlaying:(bool)arg1 withQueue:(id)arg2 andCompletion:(id /* block */)arg3;
- (void)requestCurrentRoutesWithCompletion:(id /* block */)arg1;
- (id)routesManager;
- (id)routingQueue;
- (void)setRoutesManager:(id)arg1;
- (void)setRoutingQueue:(id)arg1;
- (void)setTakingConnection:(bool)arg1;
- (bool)takingConnection;
- (void)updateHearingFeatureUsage;

@end