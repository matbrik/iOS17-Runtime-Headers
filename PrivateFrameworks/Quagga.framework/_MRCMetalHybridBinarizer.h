/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Quagga.framework/Quagga
 */

@interface _MRCMetalHybridBinarizer : NSObject {
    <MTLComputePipelineState> * _calcuateBlackPointsPipelineState;
    <MTLComputePipelineState> * _fixBlackPointsPipelineState;
    _MRCMetalContext * _metalContext;
    <MTLComputePipelineState> * _thresholdPipelineState;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetalContext:(id)arg1 error:(id*)arg2;
- (id)newTextureByBinarizingPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;

@end