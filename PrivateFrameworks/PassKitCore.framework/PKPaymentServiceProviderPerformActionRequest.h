/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentServiceProviderPerformActionRequest : PKPaymentWebServiceRequest {
    NSString * _action;
    PKServiceProviderPurchase * _purchase;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, retain) PKServiceProviderPurchase *purchase;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)action;
- (id)initWithAction:(id)arg1 purchase:(id)arg2;
- (id)purchase;
- (void)setAction:(id)arg1;
- (void)setPurchase:(id)arg1;

@end