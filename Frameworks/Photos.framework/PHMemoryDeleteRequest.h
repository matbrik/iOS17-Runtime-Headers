/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMemoryDeleteRequest : PHObjectDeleteRequest {
    bool  _clientEntitledToMemoryMutation;
}

@property (nonatomic, readonly) bool clientEntitledToMemoryMutation;

- (bool)clientEntitledToMemoryMutation;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end