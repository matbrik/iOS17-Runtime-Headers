/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FPSupport_PowerStateSingleton : NSObject {
    NSObject<OS_dispatch_queue> * _notificationQ;
}

+ (id)sharedFPSupportPowerStateSingleton;

- (void)_didChangePowerState:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)postNotification;

@end