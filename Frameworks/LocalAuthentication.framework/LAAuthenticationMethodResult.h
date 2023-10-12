/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface LAAuthenticationMethodResult : NSObject {
    NSString * _authenticatedUser;
    LAAuthenticationMethod * _authenticationMethod;
}

@property (nonatomic, readonly) NSString *authenticatedUser;
@property (nonatomic, readonly) LAAuthenticationMethod *authenticationMethod;

- (void).cxx_destruct;
- (id)authenticatedUser;
- (id)authenticationMethod;
- (id)initWithAuthenticatedUser:(id)arg1 authenticationMethod:(id)arg2;
- (bool)unlockKeyBagWithError:(id*)arg1;

@end