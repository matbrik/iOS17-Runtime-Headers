/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSDateTimePickerCell : PSTableCell {
    UIDatePicker * _datePicker;
    UILabel * _titleLabel;
}

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)datePicker;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setTitle:(id)arg1;
- (void)timeZoneChanged:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/PreferencesFramework.axbundle/PreferencesFramework

- (bool)_accessibilitySupportsActivateAction;
- (bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityPickerTimeView;
- (id)accessibilityPickerView;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

// PSDateTimePickerCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end