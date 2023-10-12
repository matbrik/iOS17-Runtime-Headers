/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBarcodeCredential : NSObject <NSSecureCoding> {
    NSDate * _expirationTimestamp;
    NSString * _identifier;
    PKEncryptedDataObject * _value;
}

@property (nonatomic, copy) NSDate *expirationTimestamp;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) PKEncryptedDataObject *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationTimestamp;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setExpirationTimestamp:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end