/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate> {
    <VKMapViewCameraDelegate> * _cameraDelegate;
    bool  _isChangingMapType;
    unsigned long long  _regionChangeCount;
}

@property (nonatomic) <VKMapViewCameraDelegate> *cameraDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isChangingMapType;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (void).cxx_destruct;
- (id)cameraDelegate;
- (id)init;
- (bool)isChangingMapType;
- (void)mapLayerCanEnter3DModeDidChange:(bool)arg1;
- (void)mapLayerCanZoomInDidChange:(bool)arg1;
- (void)mapLayerCanZoomOutDidChange:(bool)arg1;
- (void)mapLayerDidBecomePitched:(bool)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (id)mapLayerPresentationForAnnotation:(id)arg1;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerWillAnimateToLocation:(struct { double x1; double x2; })arg1;
- (void)mapLayerWillChangeRegionAnimated:(bool)arg1;
- (void)mapLayerWillPerformZoomBounceAnimation;
- (void)setCameraDelegate:(id)arg1;
- (void)setIsChangingMapType:(bool)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit

- (void)mapLayerDidChangeRegionAnimated:(bool)arg1;
- (void)mapLayerDidChangeVisibleRegion;

// VKCameraDelegateMediator (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end