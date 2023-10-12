/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostAnimationAccumulatedState : NSObject {
    NSMutableArray * _allClientDrawableIntervals;
    NSMutableArray * _allCommitIntervals;
    NSMutableArray * _allContributedFrameLifetimes;
    NSMutableArray * _allFrameLatencies;
    NSMutableArray * _allFrameLifetimes;
    NSMutableArray * _allHIDLatencies;
    NSMutableArray * _allRenders;
    NSMutableArray * _allSystemwideClientDrawableIntervals;
    NSMutableArray * _allSystemwideCommitIntervals;
    NSMutableArray * _allTransactionLifetimes;
    SignpostEvent * _animationBeginEvent;
    NSMutableArray * _compositorIntervals;
    NSMutableArray * _longClientDrawableIntervals;
    NSMutableArray * _longCommitIntervals;
    NSMutableArray * _longContributedFrameLifetimes;
    NSMutableArray * _longFrameLatencies;
    NSMutableArray * _longFrameLifetimes;
    NSMutableArray * _longHIDLatencies;
    NSMutableArray * _longRenders;
    NSMutableArray * _longSystemwideClientDrawableIntervals;
    NSMutableArray * _longSystemwideCommitIntervals;
    NSMutableArray * _longTransactionLifetimes;
}

@property (nonatomic, readonly) NSMutableArray *allClientDrawableIntervals;
@property (nonatomic, readonly) NSMutableArray *allCommitIntervals;
@property (nonatomic, readonly) NSMutableArray *allContributedFrameLifetimes;
@property (nonatomic, readonly) NSMutableArray *allFrameLatencies;
@property (nonatomic, readonly) NSMutableArray *allFrameLifetimes;
@property (nonatomic, readonly) NSMutableArray *allHIDLatencies;
@property (nonatomic, readonly) NSMutableArray *allRenders;
@property (nonatomic, readonly) NSMutableArray *allSystemwideClientDrawableIntervals;
@property (nonatomic, readonly) NSMutableArray *allSystemwideCommitIntervals;
@property (nonatomic, readonly) NSMutableArray *allTransactionLifetimes;
@property (nonatomic, readonly) SignpostEvent *animationBeginEvent;
@property (nonatomic, readonly) NSMutableArray *compositorIntervals;
@property (nonatomic, readonly) NSMutableArray *longClientDrawableIntervals;
@property (nonatomic, readonly) NSMutableArray *longCommitIntervals;
@property (nonatomic, readonly) NSMutableArray *longContributedFrameLifetimes;
@property (nonatomic, readonly) NSMutableArray *longFrameLatencies;
@property (nonatomic, readonly) NSMutableArray *longFrameLifetimes;
@property (nonatomic, readonly) NSMutableArray *longHIDLatencies;
@property (nonatomic, readonly) NSMutableArray *longRenders;
@property (nonatomic, readonly) NSMutableArray *longSystemwideClientDrawableIntervals;
@property (nonatomic, readonly) NSMutableArray *longSystemwideCommitIntervals;
@property (nonatomic, readonly) NSMutableArray *longTransactionLifetimes;

- (void).cxx_destruct;
- (void)_handleClientDrawableInterval:(id)arg1 isLong:(bool)arg2 isConcise:(bool)arg3;
- (void)_handleCommitInterval:(id)arg1 isLong:(bool)arg2 isConcise:(bool)arg3;
- (void)_handleFrameLatency:(id)arg1 isLong:(bool)arg2 isConcise:(bool)arg3;
- (void)_handleFrameLifetime:(id)arg1 isLong:(bool)arg2 isConcise:(bool)arg3;
- (void)_handleHIDLatency:(id)arg1 isLong:(bool)arg2 isConcise:(bool)arg3;
- (void)_handleRenderServerRender:(id)arg1 isLong:(bool)arg2 isConcise:(bool)arg3;
- (void)_handleTransactionLifetimeInterval:(id)arg1 isLong:(bool)arg2 isConcise:(bool)arg3;
- (void)addCompositorInterval:(id)arg1;
- (id)allClientDrawableIntervals;
- (id)allCommitIntervals;
- (id)allContributedFrameLifetimes;
- (id)allFrameLatencies;
- (id)allFrameLifetimes;
- (id)allHIDLatencies;
- (id)allRenders;
- (id)allSystemwideClientDrawableIntervals;
- (id)allSystemwideCommitIntervals;
- (id)allTransactionLifetimes;
- (id)animationBeginEvent;
- (id)compositorIntervals;
- (id)initWithAnimationBeginEvent:(id)arg1 shouldTrackComposites:(bool)arg2;
- (id)longClientDrawableIntervals;
- (id)longCommitIntervals;
- (id)longContributedFrameLifetimes;
- (id)longFrameLatencies;
- (id)longFrameLifetimes;
- (id)longHIDLatencies;
- (id)longRenders;
- (id)longSystemwideClientDrawableIntervals;
- (id)longSystemwideCommitIntervals;
- (id)longTransactionLifetimes;

@end