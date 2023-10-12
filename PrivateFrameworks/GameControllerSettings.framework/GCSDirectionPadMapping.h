/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings
 */

@interface GCSDirectionPadMapping : GCSElementMapping {
    bool  _invertHorizontally;
    bool  _invertVertically;
    bool  _swapAxes;
}

@property (nonatomic) bool invertHorizontally;
@property (nonatomic) bool invertVertically;
@property (nonatomic) bool swapAxes;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)id;
- (id)initWithElementKey:(id)arg1 mappingKey:(id)arg2 remappingOrder:(int)arg3;
- (id)initWithElementKey:(id)arg1 mappingKey:(id)arg2 remappingOrder:(int)arg3 invertHorizontally:(bool)arg4 invertVertically:(bool)arg5 swapAxes:(bool)arg6;
- (bool)invertHorizontally;
- (bool)invertVertically;
- (bool)isCustomized;
- (void)setInvertHorizontally:(bool)arg1;
- (void)setInvertVertically:(bool)arg1;
- (void)setSwapAxes:(bool)arg1;
- (bool)swapAxes;

// GCSDirectionPadMapping (GCSJSONSerializable)

- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;

// GCSDirectionPadMapping (NSSecureCoding)

+ (id)archivalClasses;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end