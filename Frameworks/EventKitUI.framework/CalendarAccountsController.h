/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarAccountsController : NSObject {
    CUIKAccountsController * _controller;
}

+ (void)invalidate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountTypeTitleForSource:(id)arg1;
- (id)accountTypeTitleForSourceWithExternalId:(id)arg1;
- (bool)haveiCloudCalendarAccountInSources:(id)arg1;
- (id)init;
- (id)initWithController:(id)arg1;
- (int)sortOrderForSource:(id)arg1;
- (int)sortOrderForSourceType:(long long)arg1;
- (bool)sourceIsManaged:(id)arg1;
- (id)titleForSource:(id)arg1 forBeginningOfSentence:(bool)arg2;

@end