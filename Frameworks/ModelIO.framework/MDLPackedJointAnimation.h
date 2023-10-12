/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLPackedJointAnimation : MDLObject <MDLJointAnimation, NSCopying> {
    NSArray * _jointPaths;
    MDLAnimatedQuaternionArray * _rotations;
    MDLAnimatedVector3Array * _scales;
    MDLAnimatedVector3Array * _translations;
}

@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) MDLAnimatedQuaternionArray *rotations;
@property (nonatomic, readonly) MDLAnimatedVector3Array *scales;
@property (nonatomic, readonly) MDLAnimatedVector3Array *translations;

// MDLPackedJointAnimation (null)

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)jointPaths;
- (id)rotations;
- (id)scales;
- (id)translations;

@end