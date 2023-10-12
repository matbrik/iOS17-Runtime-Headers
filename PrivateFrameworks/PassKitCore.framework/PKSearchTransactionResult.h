/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSearchTransactionResult : NSObject <NSSecureCoding> {
    NSString * _passUniqueIdentifier;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passUniqueIdentifier;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end