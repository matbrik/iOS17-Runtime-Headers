/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CMImaging.framework/CMImaging
 */

@interface InterceptConfig : NSObject {
    FigMetalExecutionStatus * _executionStatus;
    int  _interceptLevel;
    bool  _waitUntilCompleted;
    bool  _waitUntilScheduled;
}

@property (nonatomic, retain) FigMetalExecutionStatus *executionStatus;
@property (nonatomic) int interceptLevel;
@property (nonatomic) bool waitUntilCompleted;
@property (nonatomic) bool waitUntilScheduled;

- (void).cxx_destruct;
- (id)executionStatus;
- (id)initWithLevel:(int)arg1;
- (int)interceptLevel;
- (void)loadExperimentsConfig;
- (void)setExecutionStatus:(id)arg1;
- (void)setInterceptLevel:(int)arg1;
- (void)setWaitUntilCompleted:(bool)arg1;
- (void)setWaitUntilScheduled:(bool)arg1;
- (bool)waitUntilCompleted;
- (bool)waitUntilScheduled;

@end