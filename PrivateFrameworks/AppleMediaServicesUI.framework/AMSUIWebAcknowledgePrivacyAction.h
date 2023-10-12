/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebAcknowledgePrivacyAction : AMSUIWebAction {
    ACAccount * _account;
    NSString * _privacyIdentifier;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *privacyIdentifier;

- (void).cxx_destruct;
- (id)account;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)privacyIdentifier;
- (id)runAction;
- (void)setAccount:(id)arg1;
- (void)setPrivacyIdentifier:(id)arg1;

@end