/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSKTRegistrationStatus : NSObject <NSSecureCoding> {
    IDSKTRegistrationData * _registeredKTData;
    IDSKTRegistrationData * _unregisteredKTData;
}

@property (nonatomic, retain) IDSKTRegistrationData *registeredKTData;
@property (nonatomic, retain) IDSKTRegistrationData *unregisteredKTData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)registeredKTData;
- (void)setRegisteredKTData:(id)arg1;
- (void)setUnregisteredKTData:(id)arg1;
- (id)unregisteredKTData;

@end