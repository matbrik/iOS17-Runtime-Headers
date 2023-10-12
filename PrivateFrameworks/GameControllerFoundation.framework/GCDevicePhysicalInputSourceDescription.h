/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCDevicePhysicalInputSourceDescription : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _direction;
    NSSet * _elementAliases;
    NSString * _elementLocalizedName;
    GCDevicePhysicalInputSymbolDescription * _symbol;
}

@property (readonly) unsigned long long direction;
@property (readonly) NSSet *elementAliases;
@property (readonly) NSString *elementLocalizedName;
@property (readonly) GCDevicePhysicalInputSymbolDescription *symbol;

+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2;
+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2 sfSymbolsName:(id)arg3;
+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2 sfSymbolsName:(id)arg3 direction:(unsigned long long)arg4;
+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2 symbol:(id)arg3;
+ (id)sourceWithElementAliases:(id)arg1 localizedName:(id)arg2 symbol:(id)arg3 direction:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)direction;
- (id)elementAliases;
- (id)elementLocalizedName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithElementAliases:(id)arg1 localizedName:(id)arg2 symbol:(id)arg3 direction:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)symbol;

@end