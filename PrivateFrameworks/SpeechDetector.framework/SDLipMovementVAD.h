/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpeechDetector.framework/SpeechDetector
 */

@interface SDLipMovementVAD : NSObject {
    <LipMovementVADDelegate> * _delegate;
    double  _visualSpeechProbability;
}

@property (nonatomic) <LipMovementVADDelegate> *delegate;
@property (nonatomic, readonly) double visualSpeechProbability;

- (void).cxx_destruct;
- (void)addFaceTrackingData:(id)arg1 atMachAbsTime:(unsigned long long)arg2;
- (id)delegate;
- (id)initWithModelFile:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (double)visualSpeechProbability;

@end