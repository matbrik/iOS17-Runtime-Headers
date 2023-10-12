/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNUserOptionsEngine : NSObject {
    NSString * _navSessionLanguage;
    MNObserverHashTable * _observers;
    MNUserOptions * _options;
}

@property (nonatomic, readonly) NSString *currentVoiceLanguage;
@property (nonatomic, readonly) MNUserOptions *options;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)currentVoiceLanguage;
- (id)init;
- (id)localizedStringForKey:(id)arg1;
- (id)options;
- (void)removeObserver:(id)arg1;
- (void)update:(id)arg1;
- (void)updateNavigationSessionLanguage:(id)arg1;

@end