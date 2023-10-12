/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKKeychainProvider : NSObject {
    <CRKKeychain> * _keychain;
}

@property (nonatomic, readonly) <CRKKeychain> *keychain;

+ (id)makeKeychainForCurrentEnvironment;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)initWithKeychain:(id)arg1;
- (id)keychain;

@end