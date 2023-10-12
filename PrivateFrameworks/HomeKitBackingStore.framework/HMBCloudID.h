/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBCloudID : HMFObject <HMBModelObjectStorage, NSCopying, NSSecureCoding> {
    CKContainerID * _containerID;
    NSUUID * _modelID;
    NSString * _name;
    long long  _scope;
}

@property (nonatomic, readonly) CKContainerID *containerID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *modelID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long scope;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 name:(id)arg3 modelID:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)modelID;
- (id)name;
- (long long)scope;

// HMBCloudID (HMBCloudExtensions)

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

@end