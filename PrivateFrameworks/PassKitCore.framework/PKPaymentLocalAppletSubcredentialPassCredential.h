/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentLocalAppletSubcredentialPassCredential : PKPaymentCredential {
    PKAppletSubcredential * _credentialToShare;
    PKPaymentPass * _paymentPass;
}

@property (nonatomic, readonly) PKAppletSubcredential *credentialToShare;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;

- (void).cxx_destruct;
- (id)credentialToShare;
- (id)initWithPaymentPass:(id)arg1 credentialToShare:(id)arg2;
- (id)paymentPass;

@end