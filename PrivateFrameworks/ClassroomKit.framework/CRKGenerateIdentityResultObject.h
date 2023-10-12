/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKGenerateIdentityResultObject : CATTaskResultObject {
    NSData * _certificateData;
    NSData * _privateKeyData;
}

@property (nonatomic, copy) NSData *certificateData;
@property (nonatomic, copy) NSData *privateKeyData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificateData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)privateKeyData;
- (void)setCertificateData:(id)arg1;
- (void)setPrivateKeyData:(id)arg1;

@end