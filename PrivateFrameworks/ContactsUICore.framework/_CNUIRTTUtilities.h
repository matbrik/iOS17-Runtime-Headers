/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities> {
    RTTTelephonyUtilities * _utilityProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) RTTTelephonyUtilities *utilityProvider;

- (void).cxx_destruct;
- (bool)contactIsTTYContact:(id)arg1;
- (id)init;
- (id)initWithUtilityProvider:(id)arg1;
- (id)nts_lazyUtilityProvider;
- (bool)relayIsSupported;
- (void)setUtilityProvider:(id)arg1;
- (id)utilityProvider;

@end