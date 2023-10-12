/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFDisplay : NSObject <NSSecureCoding, WFNaming> {
    NSString * _UUID;
    NSString * _deviceName;
    NSString * _name;
    NSString * _serializationUUID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *serializationUUID;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayUUID:(id)arg1 deviceName:(id)arg2 name:(id)arg3;
- (id)initWithDisplayUUID:(id)arg1 name:(id)arg2;
- (id)initWithDisplayUUID:(id)arg1 serializationUUID:(id)arg2 localizedName:(id)arg3;
- (id)name;
- (id)serializationUUID;
- (id)wfName;

@end