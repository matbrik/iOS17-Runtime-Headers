/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventVisibilityEditItem : EKEventEditItem {
    EKEventAvailabilityEditItem * _availabilityEditItem;
    unsigned long long  _lastKnownNumberOfSubitems;
    EKEventPrivacyLevelInlineEditItem * _privacyLevelEditItem;
    EKEventEditItem * _subitemOfLastDetailViewControllerRequested;
}

- (void).cxx_destruct;
- (id)_editItemForIndex:(unsigned long long)arg1;
- (id)_lowestEditItem;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (double)footerHeightForWidth:(double)arg1;
- (id)footerTitle;
- (id)footerView;
- (bool)forceTableReloadOnSave;
- (id)init;
- (unsigned long long)numberOfSubitems;
- (bool)requiresReconfigurationOnSave;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldAppearWithVisibility:(int)arg1;
- (bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;

@end