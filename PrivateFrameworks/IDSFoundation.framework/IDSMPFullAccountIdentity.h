/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (nonatomic, readonly) NSData *publicName;

+ (id)fullAccountIdentityWithError:(id*)arg1;
+ (id)identityWithData:(id)arg1 error:(id*)arg2;

- (id)dataRepresentationWithError:(id*)arg1;
- (id)publicAccountIdentityWithError:(id*)arg1;
- (id)publicName;
- (id)rolledAccountIdenityWithError:(id*)arg1;
- (id)signData:(id)arg1 withError:(id*)arg2;

@end