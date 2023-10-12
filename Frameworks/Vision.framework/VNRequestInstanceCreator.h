/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRequestInstanceCreator : NSObject {
    <VNRequestInstanceCreatorDelegate> * _delegate;
}

+ (id)defaultCreator;

- (void).cxx_destruct;
- (id)_newVNRequestInstanceOfClass:(Class)arg1 withCompletionHandler:(id /* block */)arg2 revision:(unsigned long long)arg3 error:(id*)arg4;
- (id)_newVNTargetedImageRequestInstanceOfClass:(Class)arg1 withCompletionHandler:(id /* block */)arg2 revision:(unsigned long long)arg3 error:(id*)arg4;
- (id)errorForFailedInstanceCreationOfRequestClass:(Class)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)newRequestInstanceOfClass:(Class)arg1 withCompletionHandler:(id /* block */)arg2 revision:(unsigned long long)arg3 error:(id*)arg4;

@end