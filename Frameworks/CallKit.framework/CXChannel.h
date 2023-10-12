/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXChannel : NSObject <CXSecureCoding> {
    NSUUID * _UUID;
    NSString * _localizedName;
    long long  _transmissionMode;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) long long transmissionMode;

- (void).cxx_destruct;
- (id)UUID;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithChannel:(id)arg1;
- (id)initWithUUID:(id)arg1 transmissionMode:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannel:(id)arg1;
- (id)localizedName;
- (long long)transmissionMode;

// CXChannel (Internal)

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalentToChannel:(id)arg1;

@end