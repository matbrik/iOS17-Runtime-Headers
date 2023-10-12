/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITransitionView : UIView <NSCoding> {
    long long  _animationTimingCurve;
    double  _curlUpRevealedHeight;
    id  _delegate;
    UIResponder * _firstResponderToRemember;
    UIView * _fromView;
    NSMutableArray * _frozenSubviews;
    bool  _ignoreDirectTouchEvents;
    UIWindow * _originalWindow;
    int  _textEffectsVisibilityLevel;
    UIView * _toView;
    struct { 
        unsigned int animationInProgress : 1; 
        unsigned int ignoresInteractionEvents : 1; 
        unsigned int shouldNotifyDidCompleteImmediately : 1; 
        unsigned int useViewControllerAppearanceCallbacks : 1; 
        unsigned int shouldRestoreFromViewAlpha : 1; 
        unsigned int shouldRestoreGroupOpacity : 1; 
        unsigned int groupOpacityToRestoreForFromView : 1; 
        unsigned int groupOpacityToRestoreForToView : 1; 
        unsigned int shouldRasterize : 1; 
        unsigned int enableRotationAfterTransition : 1; 
        unsigned int removeFromView : 1; 
    }  _transitionViewFlags;
}

@property (nonatomic, readonly) double _curlUpRevealedHeight;
@property (nonatomic) long long animationTimingCurve;
@property (nonatomic) bool ignoreDirectTouchEvents;
@property (nonatomic) bool shouldNotifyDidCompleteImmediately;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (double)defaultDurationForTransition:(int)arg1;

- (void).cxx_destruct;
- (void)_didStartTransition;
- (bool)_isTransitioningFromFromView:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_shouldDisableGroupOpacityOnAlphaTransitions;
- (void)_startTransition:(int)arg1 withDuration:(double)arg2;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_transitionDidStopFinished:(bool)arg1;
- (void)_viewDidMoveFromScreen:(id)arg1 toScreen:(id)arg2;

// UITransitionView (UITransitionView_Internal)

- (double)_curlUpRevealedHeight;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (id)_accessibilityHitTestingObscuredScreenAllowedViews;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityObscuredScreenAllowedViews;
- (void)_didCompleteTransition:(bool)arg1;
- (bool)accessibilityPerformEscape;
- (bool)accessibilityViewIsModal;
- (id)axAdditionalElements;

// UITransitionView (SafeCategory)

+ (Class)safeCategoryBaseClass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (long long)animationTimingCurve;
- (id)delegate;
- (double)durationForTransition:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)ignoreDirectTouchEvents;
- (bool)ignoresInteractionEvents;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTransitioning;
- (void)layoutSubviews;
- (void)notifyDidCompleteTransition:(id)arg1;
- (bool)rasterizesOnTransition;
- (void)safeAreaInsetsDidChange;
- (void)setAnimationTimingCurve:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIgnoreDirectTouchEvents:(bool)arg1;
- (void)setIgnoresInteractionEvents:(bool)arg1;
- (void)setRasterizesOnTransition:(bool)arg1;
- (void)setShouldNotifyDidCompleteImmediately:(bool)arg1;
- (bool)shouldNotifyDidCompleteImmediately;
- (int)textEffectsVisibilityLevel;
- (id)toView;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (bool)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(bool)arg4;
- (bool)transition:(int)arg1 toView:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end