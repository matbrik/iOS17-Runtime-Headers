/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUHDRApplyGainMapFilter : CIFilter {
    CIImage * _inputGainMap;
    NSNumber * _inputHeadroom;
    CIImage * _inputImage;
}

@property (nonatomic, retain) CIImage *inputGainMap;
@property (nonatomic, retain) NSNumber *inputHeadroom;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)gainMapLumaToneMappingKernel;

- (void).cxx_destruct;
- (id)inputGainMap;
- (id)inputHeadroom;
- (id)inputImage;
- (id)outputImage;
- (void)setInputGainMap:(id)arg1;
- (void)setInputHeadroom:(id)arg1;
- (void)setInputImage:(id)arg1;

@end