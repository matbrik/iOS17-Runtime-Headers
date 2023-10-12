/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNAnimalBodyPoseObservation : VNRecognizedPointsObservation

@property (readonly, copy) NSArray *availableJointGroupNames;
@property (readonly, copy) NSArray *availableJointNames;

- (id)availableJointGroupNames;
- (id)availableJointNames;
- (id)recognizedPointForJointName:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsForJointsGroupName:(id)arg1 error:(id*)arg2;

@end