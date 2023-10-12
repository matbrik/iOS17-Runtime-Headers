/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVResult : NSObject {
    NSError * _error;
    struct OpaqueFigSimpleMutex { } * _ivarAccessLock;
    long long  _status;
}

@property (getter=isFailed, readonly) bool failed;

- (void)dealloc;
- (void)getStatus:(long long*)arg1 error:(id*)arg2;
- (id)init;
- (bool)isFailed;
- (void)markAsCompleted;
- (void)markAsFailedWithError:(id)arg1;

@end