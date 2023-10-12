/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRemoteNotificationClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _notifyToken;
}

+ (id)sharedClient;

- (void)dealloc;
- (id)init;
- (id)popQueuedNotifications;
- (void)registerForRemoteNotifications;
- (void)unregisterForRemoteNotifications;

@end