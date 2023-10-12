/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VisionCore.framework/VisionCore
 */

@interface VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _inputBlobName;
    NSURL * _labelsFileURL;
    NSURL * _modelFileURL;
    NSString * _outputBlobName;
}

@property (nonatomic, readonly, copy) NSString *inputBlobName;
@property (nonatomic, readonly) NSURL *labelsFileURL;
@property (nonatomic, readonly) NSURL *modelFileURL;
@property (nonatomic, readonly, copy) NSString *outputBlobName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelFileURL:(id)arg1 labelsFileURL:(id)arg2 inputBlobName:(id)arg3 outputBlobName:(id)arg4;
- (id)inputBlobName;
- (bool)isEqual:(id)arg1;
- (id)labelsFileURL;
- (id)modelFileURL;
- (id)outputBlobName;

@end