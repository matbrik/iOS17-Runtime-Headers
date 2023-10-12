/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/libfaceCore.dylib
 */

@interface FaceCoreFace : NSObject {
    NSDictionary * additionalInfo;
    NSDictionary * expressionFeatures;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    }  face;
    double  faceAngle;
    NSDictionary * faceLandmarkPoints;
    double  faceSize;
    int  faceType;
    NSData * faceprint;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    }  leftEye;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    }  mouth;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    }  rightEye;
    unsigned long long  trackDuration;
    long long  trackID;
}

@property (retain) NSDictionary *additionalInfo;
@property (retain) NSDictionary *expressionFeatures;
@property struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } face;
@property double faceAngle;
@property (retain) NSDictionary *faceLandmarkPoints;
@property double faceSize;
@property int faceType;
@property (retain) NSData *faceprint;
@property (readonly) bool hasLeftEyeBounds;
@property (readonly) bool hasMouthBounds;
@property (readonly) bool hasRightEyeBounds;
@property struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } leftEye;
@property struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } mouth;
@property struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; } rightEye;
@property unsigned long long trackDuration;
@property long long trackID;

- (void).cxx_destruct;
- (id)additionalInfo;
- (void)dealloc;
- (id)expressionFeatures;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })face;
- (double)faceAngle;
- (id)faceLandmarkPoints;
- (double)faceSize;
- (int)faceType;
- (id)faceprint;
- (bool)hasLeftEyeBounds;
- (bool)hasMouthBounds;
- (bool)hasRightEyeBounds;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })leftEye;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })mouth;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })rightEye;
- (void)setAdditionalInfo:(id)arg1;
- (void)setExpressionFeatures:(id)arg1;
- (void)setFace:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setFaceAngle:(double)arg1;
- (void)setFaceLandmarkPoints:(id)arg1;
- (void)setFaceSize:(double)arg1;
- (void)setFaceType:(int)arg1;
- (void)setFaceprint:(id)arg1;
- (void)setLeftEye:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setMouth:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setRightEye:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setTrackDuration:(unsigned long long)arg1;
- (void)setTrackID:(long long)arg1;
- (unsigned long long)trackDuration;
- (long long)trackID;

@end