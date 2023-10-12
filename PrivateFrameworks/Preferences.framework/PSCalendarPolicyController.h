/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCalendarPolicyController : NSObject

+ (unsigned long long)authorizationRightforAccessLevel:(int)arg1;
+ (id)loadPrivacySettingsBundle;
+ (void)setCalendarAccessForApp:(id)arg1 toValue:(int)arg2 shouldPrompt:(bool)arg3;

- (id)appSpecifierWithName:(id)arg1 bundleID:(id)arg2;
- (id)calendarStatus:(id)arg1;
- (void)setCalendarStatus:(id)arg1 specifier:(id)arg2;

@end