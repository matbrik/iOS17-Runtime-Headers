/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse {
    NSString * _deviceIdentifier;
    NSURL * _peerPaymentServiceURL;
    NSString * _peerPaymentServicesPushTopic;
}

@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly, copy) NSURL *peerPaymentServiceURL;
@property (nonatomic, readonly, copy) NSString *peerPaymentServicesPushTopic;

- (void).cxx_destruct;
- (id)deviceIdentifier;
- (id)initWithData:(id)arg1;
- (id)peerPaymentServiceURL;
- (id)peerPaymentServicesPushTopic;

@end