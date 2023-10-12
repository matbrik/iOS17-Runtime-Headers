/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppletSubcredentialSharingSession : PKDASession

+ (id)createPendingSessionWithDelegate:(id)arg1;
+ (id)createSessionWithDelegate:(id)arg1;

- (void)acceptSharingInvitation:(id)arg1 encryptedProductPlanIdentifierContainer:(id)arg2 completion:(id /* block */)arg3;
- (void)accountAttestionRequestForCredential:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)cancelSharingInvitationWithIdentifier:(id)arg1;
- (void)getPretrackRequestForKeyWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getProductPlanIdentifierRequestForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(id /* block */)arg3;
- (void)routingInformationForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccountAttestation:(id)arg1 forCredential:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)startSession;

@end