/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFMyriadGoodnessScoreOverrideStateMutation : NSObject <AFMyriadGoodnessScoreOverrideStateMutating> {
    AFMyriadGoodnessScoreOverrideState * _base;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasOverrideOption : 1; 
        unsigned int hasReason : 1; 
    }  _mutationFlags;
    long long  _overrideOption;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)getOverrideOption;
- (id)getReason;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setOverrideOption:(long long)arg1;
- (void)setReason:(id)arg1;

@end