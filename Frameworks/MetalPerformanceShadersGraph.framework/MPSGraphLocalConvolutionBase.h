/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphLocalConvolutionBase : MPSGraphOperation {
    unsigned long long  _dataLayout;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    NSArray * _kernelShape;
}

// MPSGraphLocalConvolutionBase (null)

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dataLayout:(unsigned long long)arg4 kernelShape:(id)arg5 dilationRateInX:(unsigned long long)arg6 dilationRateInY:(unsigned long long)arg7 name:(id)arg8;

@end