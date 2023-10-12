/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface _LAKeyStoreBackendKeychain : NSObject <LAKeyStoreBackend>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)createGenericPasswordWithQuery:(id)arg1 error:(id*)arg2;
- (bool)createKeyWithQuery:(id)arg1 error:(id*)arg2;
- (id)fetchItemWithQuery:(id)arg1 error:(id*)arg2;
- (id)fetchItemsWithQuery:(id)arg1 error:(id*)arg2;
- (bool)removeItemsWithQuery:(id)arg1 error:(id*)arg2;

@end