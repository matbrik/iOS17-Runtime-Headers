/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarVisualProvider_Split : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider> {
    NSTimer * _airplaneModeIgnoreChangesTimer;
    double  _animatedTypeDisplayItemSpacingFactor;
    _UIStatusBarDisplayItemPlacement * _batteryChargingPlacement;
    NSTimer * _batteryExpansionTimer;
    UILayoutGuide * _cutoutLayoutGuide;
    bool  _delayedSystemUpdateData;
    _UIStatusBarDisplayItemPlacement * _dualServiceNamePlacement;
    NSLayoutConstraint * _expandedLeadingLowerTopConstraint;
    NSLayoutConstraint * _expandedTrailingBottomConstraint;
    _UIStatusBarDisplayItemPlacementGroup * _lowerWifiGroup;
    UILayoutGuide * _mainRegionsLayoutGuide;
    NSDictionary * _orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement * _serviceNamePlacement;
    NSTimer * _systemUpdatesTimer;
}

@property (nonatomic, retain) NSTimer *airplaneModeIgnoreChangesTimer;
@property (readonly) double animatedTypeDisplayItemSpacingFactor;
@property (readonly) double baselineBottomInset;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement;
@property (nonatomic, retain) NSTimer *batteryExpansionTimer;
@property (readonly) double bottomLeadingSpace;
@property (readonly) double bottomLeadingTopOffset;
@property (readonly) double cornerRadius;
@property (nonatomic, retain) UILayoutGuide *cutoutLayoutGuide;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delayedSystemUpdateData;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *dualServiceNamePlacement;
@property (readonly) UIFont *emphasizedFont;
@property (readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } expandedEdgeInsets;
@property (readonly) UIFont *expandedFont;
@property (readonly) double expandedIconScale;
@property (readonly) long long expandedIconSize;
@property (nonatomic, retain) NSLayoutConstraint *expandedLeadingLowerTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *expandedTrailingBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) double lowerExpandedBaselineOffset;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup;
@property (nonatomic, retain) UILayoutGuide *mainRegionsLayoutGuide;
@property (readonly) UIFont *normalFont;
@property (readonly) double normalIconScale;
@property (readonly) long long normalIconSize;
@property (nonatomic, retain) NSDictionary *orderedDisplayItemPlacements;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *serviceNamePlacement;
@property (readonly) UIFont *smallFont;
@property (readonly) struct CGSize { double x1; double x2; } smallPillSize;
@property (readonly) Class superclass;
@property (readonly) bool supportsAnimatedCellularNetworkType;
@property (readonly) bool supportsCondensedBatteryPercentage;
@property (readonly) UIFont *systemUpdateFont;
@property (nonatomic, retain) NSTimer *systemUpdatesTimer;
@property (readonly) UIFont *voiceControlFont;

+ (double)LTEAPlusFontSize;
+ (double)baseFontSize;
+ (double)expandedEdgeInset;
+ (double)expandedFontSize;
+ (double)height;
+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (bool)scalesWithScreenNativeScale;
+ (bool)showsLargeBatteryChargingAnimation;
+ (bool)shrinksSingleCharacterTypes;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (id)_additionAnimationForBatteryCharging;
- (void)_collapseBattery;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_collapseChargingBoltTransformForDisplayItem:(id)arg1;
- (void)_delaySystemUpdateData;
- (void)_disableSystemUpdates;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_expandedChargingBoltTransformForDisplayItem:(id)arg1;
- (id)_orderedDisplayItemPlacements;
- (id)_removalAnimationForBatteryCharging;
- (void)_resetBattery;
- (void)_resumeSystemUpdateData;
- (void)_setupExpandedRegionsInContainerView:(id)arg1 sensorHeight:(double)arg2 constraints:(id*)arg3 regions:(id*)arg4;
- (bool)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1;
- (void)_stopBatteryCollapseTimer;
- (id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)_systemUpdateDelayedDataIdentifiers;
- (void)_updateDataForBatteryCharging:(id)arg1;
- (void)_updateDataForSystemUpdates:(id)arg1;
- (void)_updateExpandedTrailingRegion;
- (bool)_updateLowerRegionsWithData:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)airplaneModeIgnoreChangesTimer;
- (double)airplaneObstacleFadeOutDuration;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2;
- (double)animatedTypeDisplayItemSpacingFactor;
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)arg1;
- (id)animationForAirplaneMode;
- (id)animationForProminentLocation;
- (double)baselineBottomInset;
- (id)batteryChargingPlacement;
- (id)batteryExpansionTimer;
- (double)bottomLeadingSpace;
- (double)bottomLeadingTopOffset;
- (bool)canFixupDisplayItemAttributes;
- (id)clockFont;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3;
- (double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double*)arg3;
- (double)cornerRadius;
- (id)cutoutLayoutGuide;
- (void)dealloc;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (bool)delayedSystemUpdateData;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)dualServiceNamePlacement;
- (id)emphasizedFont;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })expandedEdgeInsets;
- (id)expandedFont;
- (double)expandedIconScale;
- (long long)expandedIconSize;
- (id)expandedLeadingLowerTopConstraint;
- (id)expandedTrailingBottomConstraint;
- (bool)hasCustomAnimationForDisplayItemWithIdentifier:(id)arg1 removal:(bool)arg2;
- (void)itemCreated:(id)arg1;
- (double)itemSpacing;
- (double)lowerExpandedBaselineOffset;
- (id)lowerWifiGroup;
- (id)mainRegionsLayoutGuide;
- (id)normalFont;
- (double)normalIconScale;
- (long long)normalIconSize;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)serviceNamePlacement;
- (void)setAirplaneModeIgnoreChangesTimer:(id)arg1;
- (void)setBatteryChargingPlacement:(id)arg1;
- (void)setBatteryExpansionTimer:(id)arg1;
- (void)setCutoutLayoutGuide:(id)arg1;
- (void)setDelayedSystemUpdateData:(bool)arg1;
- (void)setDualServiceNamePlacement:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedLeadingLowerTopConstraint:(id)arg1;
- (void)setExpandedTrailingBottomConstraint:(id)arg1;
- (void)setLowerWifiGroup:(id)arg1;
- (void)setMainRegionsLayoutGuide:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setServiceNamePlacement:(id)arg1;
- (void)setSystemUpdatesTimer:(id)arg1;
- (id)smallFont;
- (struct CGSize { double x1; double x2; })smallPillSize;
- (void)statusBarRegionsUpdated;
- (id)stringForCellularType:(long long)arg1 condensed:(bool)arg2;
- (id)styleAttributesForStyle:(long long)arg1;
- (bool)supportsAnimatedCellularNetworkType;
- (bool)supportsCondensedBatteryPercentage;
- (id)systemUpdateFont;
- (id)systemUpdatesTimer;
- (void)updateDataForService:(id)arg1;
- (id)voiceControlFont;
- (id)willUpdateWithData:(id)arg1;

@end