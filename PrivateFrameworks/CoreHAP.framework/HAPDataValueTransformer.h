/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPDataValueTransformer : HAPValueTransformer

+ (id)defaultDataValueTransformer;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
+ (void)initialize;
+ (bool)isValidFormat:(unsigned long long)arg1;

- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;

@end