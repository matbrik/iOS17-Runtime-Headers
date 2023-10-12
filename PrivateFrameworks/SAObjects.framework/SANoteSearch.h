/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteSearch : SADomainCommand

@property (nonatomic, copy) NSString *contentQuery;
@property (nonatomic, copy) NSDate *fromDate;
@property (nonatomic, copy) NSDate *toDate;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentQuery;
- (id)encodedClassName;
- (id)fromDate;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContentQuery:(id)arg1;
- (void)setFromDate:(id)arg1;
- (void)setToDate:(id)arg1;
- (id)toDate;

@end