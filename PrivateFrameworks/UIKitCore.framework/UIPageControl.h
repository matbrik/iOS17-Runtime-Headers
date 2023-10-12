/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPageControl : UIControl <DebugHierarchyObject_Fallback> {
    UIVisualEffect * __platterEffect;
    long long  _backgroundStyle;
    long long  _currentPage;
    UIColor * _currentPageIndicatorTintColor;
    struct { 
        unsigned int verticalPadding : 1; 
        unsigned int horizontalPadding : 1; 
        unsigned int indicatorSpacing : 1; 
        unsigned int backgroundView : 1; 
    }  _custom;
    long long  _direction;
    double  _horizontalPadding;
    double  _indicatorSpacing;
    long long  _numberOfPages;
    struct { 
        unsigned int hideForSinglePage : 1; 
        unsigned int defersCurrentPageDisplay : 1; 
        unsigned int allowScrubbing : 1; 
        unsigned int allowTapping : 1; 
        unsigned int flickToEndGestureEnabled : 1; 
    }  _pageControlFlags;
    UIColor * _pageIndicatorTintColor;
    unsigned long long  _preferredNumberOfVisibleIndicators;
    long long  _previousPage;
    UIPageControlProgress * _progress;
    double  _verticalPadding;
    _UIPageControlVisualProvider * _visualProvider;
}

@property (setter=_setAllowsDiscreteInteraction:, nonatomic) bool _allowsDiscreteInteraction;
@property (setter=_setCustomHorizontalPadding:, nonatomic) double _customHorizontalPadding;
@property (setter=_setCustomIndicatorSpacing:, nonatomic) double _customIndicatorSpacing;
@property (setter=_setCustomVerticalPadding:, nonatomic) double _customVerticalPadding;
@property (setter=_setFlickToEndGestureEnabled:, nonatomic) bool _flickToEndGestureEnabled;
@property (setter=_setIndicatorOpacity:, nonatomic) double _indicatorOpacity;
@property (setter=_setPageProgress:, nonatomic, retain) UIPageControlProgress *_pageProgress;
@property (setter=_setPlatterBackgroundView:, nonatomic, retain) UIView *_platterBackgroundView;
@property (setter=_setPlatterEffect:, nonatomic, retain) UIVisualEffect *_platterEffect;
@property (nonatomic) bool allowsContinuousInteraction;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long currentPage;
@property (nonatomic, retain) UIColor *currentPageIndicatorTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defersCurrentPageDisplay;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesForSinglePage;
@property (nonatomic, readonly) long long interactionState;
@property (nonatomic) long long numberOfPages;
@property (nonatomic, retain) UIColor *pageIndicatorTintColor;
@property (nonatomic, retain) UIImage *preferredCurrentPageIndicatorImage;
@property (nonatomic, retain) UIImage *preferredIndicatorImage;
@property (getter=_preferredNumberOfVisibleIndicators, setter=_setPreferredNumberOfVisibleIndicators:, nonatomic) unsigned long long preferredNumberOfVisibleIndicators;
@property (nonatomic) long long previousPage;
@property (nonatomic, retain) UIPageControlProgress *progress;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_visualProviderForPageControl:(id)arg1;
+ (bool)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (bool)_allowsDiscreteInteraction;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (double)_customHorizontalPadding;
- (double)_customIndicatorSpacing;
- (double)_customVerticalPadding;
- (long long)_displayedPage;
- (void)_emitValueChanged;
- (bool)_flickToEndGestureEnabled;
- (bool)_implementsCustomCurrentPageImagesOverride;
- (bool)_implementsCustomPageImagesOverride;
- (double)_indicatorOpacity;
- (bool)_isVertical;
- (id)_pageProgress;
- (id)_platterBackgroundView;
- (id)_platterEffect;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setAllowsDiscreteInteraction:(bool)arg1;
- (void)_setCurrentPage:(long long)arg1;
- (void)_setCustomHorizontalPadding:(double)arg1;
- (void)_setCustomIndicatorSpacing:(double)arg1;
- (void)_setCustomVerticalPadding:(double)arg1;
- (void)_setFlickToEndGestureEnabled:(bool)arg1;
- (void)_setIndicatorOpacity:(double)arg1;
- (void)_setPage:(long long)arg1 interactionState:(long long)arg2;
- (void)_setPageProgress:(id)arg1;
- (void)_setPlatterBackgroundView:(id)arg1;
- (void)_setPlatterEffect:(id)arg1;
- (void)_setPreferredNumberOfVisibleIndicators:(unsigned long long)arg1;
- (void)_setVertical:(bool)arg1;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x1; id x2; id x3; bool x4; struct _UITraitCollectionTraitChanges { bool x_5_1_1; bool x_5_1_2; } x5; }*)arg1;
- (void)_updateCurrentPage:(long long)arg1 updateDisplayImmediately:(bool)arg2;
- (void)_updateCurrentPageDisplayWithForceUpdate:(bool)arg1;
- (void)_updateCurrentPageProgress;
- (void)dealloc;

// UIPageControl (ForSpringBoardOnly)

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorFrameForPage:(long long)arg1;
- (void)_invalidateIndicators;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (unsigned long long)_accessibilityAutomationType;
- (void)_accessibilityCurrentPageDidChange;
- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (unsigned int)_accessibilityMediaAnalysisOption;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (bool)_accessibilityRetainsFocusOnScreenChange;
- (bool)_accessibilitySupportsActivateAction;
- (bool)accessibilityActivate;
- (void)accessibilityDecrement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (void)accessibilityIncrement;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (bool)canBecomeFocused;
- (bool)isAccessibilityElement;
- (void)setCurrentPage:(long long)arg1;

// UIPageControl (SafeCategory)

+ (Class)safeCategoryBaseClass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (bool)allowsContinuousInteraction;
- (long long)backgroundStyle;
- (long long)currentPage;
- (id)currentPageIndicatorImageForPage:(long long)arg1;
- (id)currentPageIndicatorTintColor;
- (bool)defersCurrentPageDisplay;
- (void)didMoveToWindow;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hidesForSinglePage;
- (id)indicatorImageForPage:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interactionState;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (long long)numberOfPages;
- (id)pageIndicatorTintColor;
- (id)preferredCurrentPageIndicatorImage;
- (id)preferredIndicatorImage;
- (long long)previousPage;
- (id)progress;
- (void)setAllowsContinuousInteraction:(bool)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCurrentPageIndicatorImage:(id)arg1 forPage:(long long)arg2;
- (void)setCurrentPageIndicatorTintColor:(id)arg1;
- (void)setDefersCurrentPageDisplay:(bool)arg1;
- (void)setDirection:(long long)arg1;
- (void)setHidesForSinglePage:(bool)arg1;
- (void)setIndicatorImage:(id)arg1 forPage:(long long)arg2;
- (void)setNumberOfPages:(long long)arg1;
- (void)setPageIndicatorTintColor:(id)arg1;
- (void)setPreferredCurrentPageIndicatorImage:(id)arg1;
- (void)setPreferredIndicatorImage:(id)arg1;
- (void)setPreviousPage:(long long)arg1;
- (void)setProgress:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (bool)shouldTrack;
- (struct CGSize { double x1; double x2; })sizeForNumberOfPages:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateCurrentPageDisplay;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libViewDebuggerSupport.dylib

// UIPageControl (DebugHierarchyAdditionsFallback)

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

@end