/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIAccountsFacade : NSObject {
    ACAccountStore * _accountStore;
    CNUIAccountsFacadeRequestRunner * _requestRunner;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) CNUIAccountsFacadeRequestRunner *requestRunner;

- (void).cxx_destruct;
- (id)accountStore;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2;
- (id)requestRunner;

@end