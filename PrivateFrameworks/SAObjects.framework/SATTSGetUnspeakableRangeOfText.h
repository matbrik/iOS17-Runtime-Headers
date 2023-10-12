/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATTSGetUnspeakableRangeOfText : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSArray *texts;

+ (id)getUnspeakableRangeOfText;
+ (id)getUnspeakableRangeOfTextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locale;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setLocale:(id)arg1;
- (void)setTexts:(id)arg1;
- (id)texts;

@end