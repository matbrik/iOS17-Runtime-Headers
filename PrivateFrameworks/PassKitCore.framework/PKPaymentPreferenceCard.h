/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPreferenceCard : PKPaymentPreference {
    bool  _supportsNullSelection;
}

@property (nonatomic) bool supportsNullSelection;

- (id)errorsForPreference:(id)arg1;
- (id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(bool)arg4;
- (void)setErrors:(id)arg1 forPreference:(id)arg2;
- (void)setSupportsNullSelection:(bool)arg1;
- (bool)supportsDeletion;
- (bool)supportsNullSelection;

@end