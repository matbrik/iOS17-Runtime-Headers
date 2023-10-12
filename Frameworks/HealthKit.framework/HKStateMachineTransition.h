/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKStateMachineTransition : NSObject {
    long long  _event;
    HKStateMachineState * _fromState;
    NSString * _label;
    HKStateMachineState * _toState;
}

@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly) HKStateMachineState *fromState;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) HKStateMachineState *toState;

- (void).cxx_destruct;
- (id)description;
- (long long)event;
- (id)fromState;
- (id)init;
- (id)initWithEvent:(long long)arg1 label:(id)arg2 from:(id)arg3 to:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)toState;

@end