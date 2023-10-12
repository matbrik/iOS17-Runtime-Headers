/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPlaceholderPredictiveViewController : UIViewController <UIPredictiveViewController> {
    bool  _showsRemoteInputDashViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsRemoteInputDashViewController;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_canShowWhileLocked;
- (id)_currentTextSuggestions;
- (bool)_isVisibleForAutocorrectionType:(long long)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (id)displayedCandidates;
- (bool)hidesExpandableButton;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (bool)requiresKeyboard;
- (void)setShowsRemoteInputDashViewController:(bool)arg1;
- (bool)showsRemoteInputDashViewController;

@end