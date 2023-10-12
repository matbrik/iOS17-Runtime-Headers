/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAddSecureElementPassConfiguration : NSObject <NSSecureCoding> {
    long long  _configurationType;
    NSString * _issuerIdentifier;
    NSString * _localizedDescription;
}

@property (nonatomic, readonly) long long configurationType;
@property (nonatomic, copy) NSString *issuerIdentifier;
@property (nonatomic, copy) NSString *localizedDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)configurationType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRequiredDataForProvisioning;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)issuerIdentifier;
- (id)localizedDescription;
- (void)setIssuerIdentifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;

@end