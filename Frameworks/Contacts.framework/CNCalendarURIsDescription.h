/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNCalendarURIsDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)CNValueForContact:(id)arg1;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;

// CNCalendarURIsDescription (iOSAB)

- (void*)ABValueForABPerson:(void*)arg1;
- (void*)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void*)arg1;
- (bool)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(struct __CFError {}**)arg3;

@end