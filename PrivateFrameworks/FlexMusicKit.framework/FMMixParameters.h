/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FlexMusicKit.framework/FlexMusicKit
 */

@interface FMMixParameters : NSObject {
    NSMutableArray * _volumeKeyFrames;
}

@property (nonatomic, retain) NSArray *volumeKeyFrames;

- (void).cxx_destruct;
- (bool)appendVolumeKeyframe:(id)arg1;
- (id)description;
- (id)init;
- (void)insertVolumeKeyframe:(id)arg1;
- (id)lastVolumeKeyFrame;
- (bool)removeRedundantVolumeKeyFrames;
- (void)setVolumeKeyFrames:(id)arg1;
- (id)volumeKeyFrames;
- (bool)volumeKeyframesAreValid;
- (float)volumeValueAtTime:(long long)arg1;

@end