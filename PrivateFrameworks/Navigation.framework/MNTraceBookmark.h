/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceBookmark : NSObject <NSSecureCoding> {
    NSData * _imageData;
    double  _timestamp;
}

@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end