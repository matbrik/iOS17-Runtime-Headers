/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSpotlightAsyncOperation : NSOperation {
    unsigned long long  _operationState;
}

@property unsigned long long operationState;

- (id)_keyObserverStringForOperationState:(unsigned long long)arg1;
- (void)cancel;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (unsigned long long)operationState;
- (void)setOperationState:(unsigned long long)arg1;
- (void)start;

@end