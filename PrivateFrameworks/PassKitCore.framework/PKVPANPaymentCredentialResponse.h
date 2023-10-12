/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKVPANPaymentCredentialResponse : PKPaymentWebServiceResponse {
    PKEncryptedVPANPaymentCredentials * _credentials;
    NSString * _expiration;
    NSString * _vpanIdentifier;
}

@property (nonatomic, readonly, copy) PKEncryptedVPANPaymentCredentials *credentials;
@property (nonatomic, readonly, copy) NSString *expiration;
@property (nonatomic, readonly, copy) NSString *vpanIdentifier;

- (void).cxx_destruct;
- (id)credentials;
- (id)expiration;
- (id)initWithData:(id)arg1;
- (id)vpanIdentifier;

@end