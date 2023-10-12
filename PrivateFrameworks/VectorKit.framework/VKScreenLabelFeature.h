/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScreenLabelFeature : NSObject {
    VKImage * _image;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    unsigned int  _type;
}

@property (nonatomic, readonly) VKImage *image;
@property struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) unsigned int type;

- (void).cxx_destruct;
- (id)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 type:(unsigned int)arg3;
- (struct CGPoint { double x1; double x2; })position;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)type;

@end