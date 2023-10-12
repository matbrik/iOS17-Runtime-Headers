/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {
    struct __SCDynamicStore { } * _scDynamicStore;
    struct __CFRunLoopSource { } * _scRunLoopSource;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (bool)isDataEnabled;
- (bool)isTetheringEnabled;
- (void)sendStateUpdate;
- (bool)shouldShowTethering;

@end