/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (Class)classForCompilingModelType:(int)arg1;
- (id)classesForLoadingModelType:(int)arg1;
- (id)classesForLoadingModelType:(int)arg1 configuration:(id)arg2 isUpdatable:(bool)arg3 isEncrypted:(bool)arg4;
- (id)init;
- (id)loadNeuralNetworkClasses:(bool)arg1 trainWithMLCompute:(bool)arg2;

@end