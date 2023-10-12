/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDEffectParameterValue : NSManagedObject

@property (nonatomic, retain) NSNumber *angleValue;
@property (nonatomic) unsigned long long blueComponent;
@property (nonatomic, retain) NSNumber *colorValue;
@property (nonatomic, retain) TDEffectComponent *component;
@property (nonatomic, retain) NSNumber *floatValue;
@property (nonatomic) unsigned long long greenComponent;
@property (nonatomic, retain) NSNumber *intValue;
@property (nonatomic, retain) TDEffectParameterType *parameterType;
@property (nonatomic) unsigned long long redComponent;

+ (id)keyPathsForValuesAffectingBlueComponent;
+ (id)keyPathsForValuesAffectingColor;
+ (id)keyPathsForValuesAffectingGreenComponent;
+ (id)keyPathsForValuesAffectingRedComponent;

- (unsigned long long)blueComponent;
- (unsigned long long)greenComponent;
- (unsigned long long)redComponent;
- (void)setBlueComponent:(unsigned long long)arg1;
- (void)setGreenComponent:(unsigned long long)arg1;
- (void)setRedComponent:(unsigned long long)arg1;

@end