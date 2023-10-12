/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMEventBinarySteppingImplementor : BMEventBase <BMEventBinaryStepping> {
    bool  starting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStarting, nonatomic) bool starting;
@property (readonly) Class superclass;

- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isStarting;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (void)setStarting:(bool)arg1;

@end