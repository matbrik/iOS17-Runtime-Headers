/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAttSiriFaceTrackingCapture : NSObject {
    <CSAttSiriFaceTrackingCaptureDelegate> * _delegate;
}

@property (nonatomic) <CSAttSiriFaceTrackingCaptureDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startFaceTracking;
- (void)stopFaceTracking;

@end