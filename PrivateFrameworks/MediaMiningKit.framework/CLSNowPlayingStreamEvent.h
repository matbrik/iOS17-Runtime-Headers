/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSNowPlayingStreamEvent : NSObject {
    NSDate * _localEndDate;
    NSDate * _localStartDate;
    CLSNowPlayingStreamEventMetadata * _metadata;
}

@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly, copy) CLSNowPlayingStreamEventMetadata *metadata;

+ (id)playbackStreamEventDateSortDescriptors;

- (void).cxx_destruct;
- (id)description;
- (id)localEndDate;
- (id)localStartDate;
- (id)metadata;

// CLSNowPlayingStreamEvent (NowPlayingMetadata)

- (id)initWithDuetKnowledgeEvent:(id)arg1;

@end