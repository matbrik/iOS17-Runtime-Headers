/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPRecoveryKeyPair : NSObject {
    NSData * _encryptionKeyData;
    NSData * _signingKeyData;
}

@property (readonly, retain) NSData *encryptionKeyData;
@property (readonly, retain) NSData *signingKeyData;

- (void).cxx_destruct;
- (id)encryptionKeyData;
- (id)initWithSigningKeyData:(id)arg1 encryptionKeyData:(id)arg2;
- (id)initWithStableInfo:(id)arg1;
- (id)signingKeyData;

@end