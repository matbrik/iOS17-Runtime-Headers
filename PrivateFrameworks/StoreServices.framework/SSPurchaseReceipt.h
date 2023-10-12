/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseReceipt : NSObject {
    bool  _isValid;
    ISPurchaseReceipt * _purchaseReceipt;
}

@property (readonly) NSDate *expirationDate;
@property (readonly) bool isRevoked;
@property (readonly) bool isVPPLicensed;
@property (readonly) bool isValid;

+ (void)getReceiptPathWithCompletionBlock:(id /* block */)arg1;
+ (id)receiptPathForProxy:(id)arg1;
+ (int)vppStateFlagsWithProxy:(id)arg1;

- (void).cxx_destruct;
- (id)expirationDate;
- (id)initWithContainerPath:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (bool)isRevoked;
- (bool)isVPPLicensed;
- (bool)isValid;
- (bool)receiptExpired;

@end