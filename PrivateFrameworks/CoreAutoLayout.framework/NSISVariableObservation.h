/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
 */

@interface NSISVariableObservation : NSObject {
    double  _lastValue;
    NSISVariableObservation * _nextDirtyObservation;
    NSISVariableObservation * _prevDirtyObservation;
    bool  _valueIsDirtied;
    NSISVariable * _variable;
}

- (void)dealloc;
- (void)emitValueIfNeededWithEngine:(id)arg1;
- (id)initWithVariable:(id)arg1;
- (void)valueWasDirtied;

@end