/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVNotificationSubscription : NSObject <AVCancellable> {
    id /* block */  _callback;
    struct OpaqueFigSimpleMutex { } * _cancelMutex;
    NSObject * _object;
    id  _observerToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithObject:(id)arg1 notificationName:(id)arg2 callbackBlock:(id /* block */)arg3;

@end