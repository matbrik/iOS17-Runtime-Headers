/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMSelfIdModelScore : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 model:(struct SGMSelfIdModelType_ { unsigned long long x1; })arg2 result:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg3 supervision:(struct SGMSelfIdSupervisionType_ { unsigned long long x1; })arg4 extractionModelVersion:(unsigned long long)arg5;
- (id)tracker;

@end