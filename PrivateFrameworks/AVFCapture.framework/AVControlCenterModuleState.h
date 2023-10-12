/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVControlCenterModuleState : NSObject {
    long long  _activeMicrophoneMode;
    NSString * _activeMicrophoneModeKey;
    bool  _auVoiceIOBypassVoiceProcessing;
    NSString * _auVoiceIOBypassVoiceProcessingKey;
    float  _backgroundBlurAperture;
    NSString * _backgroundBlurApertureKey;
    long long  _backgroundBlurControlMode;
    NSString * _backgroundBlurControlModeKey;
    bool  _backgroundBlurEnabled;
    NSString * _backgroundBlurEnabledKey;
    bool  _backgroundBlurSupported;
    NSString * _backgroundBlurUnavailableReasonsKey;
    NSString * _bundleID;
    long long  _centerStageControlMode;
    NSString * _centerStageControlModeKey;
    bool  _centerStageEnabled;
    NSString * _centerStageEnabledKey;
    NSString * _centerStageFieldOfViewRestrictedToWideKey;
    bool  _centerStageSupported;
    NSString * _centerStageUnavailableReasonsKey;
    double  _currentOriginalZoomFactor;
    double  _currentPanningAngleX;
    double  _currentPanningAngleY;
    NSString * _dockedTrackingActiveKey;
    bool  _gesturesEnabled;
    NSString * _gesturesEnabledKey;
    NSArray * _hiddenMicrophoneModes;
    NSString * _hiddenMicrophoneModesKey;
    bool  _holdingStateLock;
    bool  _isOptedInForBackgroundBlur;
    bool  _isOptedInForReactionEffects;
    bool  _isOptedInForStudioLight;
    bool  _isVOIPApp;
    long long  _manualFramingDeviceType;
    NSString * _manualFramingDeviceTypeKey;
    NSString * _manualFramingVideoZoomFactorKey;
    bool  _micModesSupported;
    long long  _microphoneMode;
    NSString * _microphoneModeKey;
    NSString * _oneShotFramingCompletedKey;
    NSString * _panWithTranslationKey;
    NSString * _panningAnglesKey;
    NSString * _performOneShotFramingKey;
    NSMutableDictionary * _previousReactionStateByDeviceIdentifier;
    bool  _reactionEffectsSupported;
    NSString * _reactionTriggeredKey;
    bool  _reactionsEnabled;
    NSString * _reactionsEnabledKey;
    NSString * _reactionsInProgressKey;
    NSString * _reactionsUnavailableReasonsKey;
    NSString * _resetFramingCompletedKey;
    NSString * _resetFramingKey;
    NSString * _startPanningAtPointKey;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    long long  _studioLightingControlMode;
    NSString * _studioLightingControlModeKey;
    bool  _studioLightingEnabled;
    NSString * _studioLightingEnabledKey;
    float  _studioLightingIntensity;
    NSString * _studioLightingIntensityKey;
    bool  _studioLightingSupported;
    NSString * _studioLightingUnavailableReasonsKey;
    NSArray * _supportedMicrophoneModes;
    NSString * _supportedMicrophoneModesKey;
    NSDictionary * _zoomFactorConstantsByManualFramingDeviceType;
}

@property (getter=isActive, readonly) bool active;
@property bool backgroundBlurSupported;
@property bool centerStageFieldOfViewRestrictedToWide;
@property bool centerStageSupported;
@property long long manualFramingDeviceType;
@property (readonly) bool manualFramingIsAtDefault;
@property bool micModesSupported;
@property bool reactionEffectsSupported;
@property bool studioLightingSupported;
@property (readonly) NSDictionary *zoomFactorConstantsByManualFramingDeviceType;

+ (id)moduleStateForBundleID:(id)arg1 micModesSupported:(bool)arg2;

- (void)_checkManualFramingDefaultStateWithNewOriginalZoomFactor:(double)arg1;
- (double)_defaultOriginalVideoZoomFactor;
- (void)_handleBackPropagatedVideoZoomFactorUpdate:(id)arg1;
- (void)_handlePanningAnglesUpdate:(id)arg1;
- (void)_proprietaryDefaultChanged:(id)arg1 keyPath:(id)arg2 context:(void*)arg3;
- (long long)activeMicrophoneMode;
- (bool)backgroundBlurSupported;
- (bool)centerStageFieldOfViewRestrictedToWide;
- (bool)centerStageSupported;
- (long long)controlModeForVideoEffect:(id)arg1;
- (void)dealloc;
- (void)enableBlackenFrames:(bool)arg1 forDeviceUID:(id)arg2;
- (float)getEffectIntensityDefaultForVideoEffect:(id)arg1;
- (float)getEffectIntensityForVideoEffect:(id)arg1;
- (struct AudioValueRange { double x1; double x2; })getEffectIntensityRangeForVideoEffect:(id)arg1;
- (id)hiddenMicrophoneModes;
- (id)initForBundleID:(id)arg1 micModesSupported:(bool)arg2;
- (void)installProprietaryDefaultsHandlers;
- (bool)isActive;
- (bool)isEnabledForVideoEffect:(id)arg1;
- (long long)manualFramingDeviceType;
- (bool)manualFramingEnabledForDevice:(id)arg1;
- (bool)manualFramingIsAtDefault;
- (double)manualFramingOriginalVideoZoomFactor;
- (bool)micModesSupported;
- (long long)microphoneMode;
- (void)panWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)performOneShotFraming;
- (void)performReactionEffect:(id)arg1 forCaptureDeviceWithID:(id)arg2;
- (bool)reactionEffectsSupported;
- (void)resetFraming;
- (void)setBackgroundBlurSupported:(bool)arg1;
- (void)setCenterStageFieldOfViewRestrictedToWide:(bool)arg1;
- (void)setCenterStageSupported:(bool)arg1;
- (bool)setEffectIntensityForVideoEffect:(float)arg1 forVideoEffect:(id)arg2;
- (bool)setEnabled:(bool)arg1 forVideoEffect:(id)arg2;
- (void)setManualFramingDeviceType:(long long)arg1;
- (void)setManualFramingOriginalZoomFactor:(double)arg1 convertedZoomFactor:(double)arg2;
- (void)setMicModesSupported:(bool)arg1;
- (bool)setMicrophoneMode:(long long)arg1;
- (void)setReactionEffectsSupported:(bool)arg1;
- (void)setStudioLightingSupported:(bool)arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)studioLightingSupported;
- (id)supportedMicrophoneModes;
- (bool)supportsVideoEffect:(id)arg1;
- (unsigned long long)unavailableReasonsForVideoEffect:(id)arg1;
- (void)updateActiveReactions:(id)arg1 currentRenderPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 requestedTriggers:(int)arg3 forCaptureDeviceWithID:(id)arg4;
- (bool)voiceProcessingBypassed;
- (id)zoomFactorConstantsByManualFramingDeviceType;

@end