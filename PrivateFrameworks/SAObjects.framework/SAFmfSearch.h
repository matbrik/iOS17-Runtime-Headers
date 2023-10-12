/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfSearch : SADomainCommand

@property (nonatomic, retain) SALocation *currentLocation;
@property (nonatomic, copy) NSArray *friends;
@property (nonatomic, copy) NSString *proximity;
@property (nonatomic, retain) SALocation *requestedLocation;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)currentLocation;
- (id)encodedClassName;
- (id)friends;
- (id)groupIdentifier;
- (id)proximity;
- (id)requestedLocation;
- (bool)requiresResponse;
- (void)setCurrentLocation:(id)arg1;
- (void)setFriends:(id)arg1;
- (void)setProximity:(id)arg1;
- (void)setRequestedLocation:(id)arg1;

@end