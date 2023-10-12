/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary
 */

@interface MICodeSigningVerifier : NSObject {
    bool  _allowAdhocSigning;
    MIExecutableBundle * _bundle;
    bool  _logResourceVerificationErrors;
    bool  _performOnlineAuthorization;
    MICodeSigningInfo * _signingInfo;
    bool  _skipProfileIDValidation;
    bool  _validateResources;
    bool  _validateUsingDetachedSignature;
    bool  _verifyTrustCachePresence;
}

@property (nonatomic) bool allowAdhocSigning;
@property (nonatomic, readonly) MIExecutableBundle *bundle;
@property (nonatomic) bool logResourceVerificationErrors;
@property (nonatomic) bool performOnlineAuthorization;
@property (nonatomic, readonly) MICodeSigningInfo *signingInfo;
@property (nonatomic) bool skipProfileIDValidation;
@property (nonatomic) bool validateResources;
@property (nonatomic) bool validateUsingDetachedSignature;
@property (nonatomic) bool verifyTrustCachePresence;

+ (id)codeSigningVerifierForBundle:(id)arg1;

- (void).cxx_destruct;
- (bool)allowAdhocSigning;
- (id)bundle;
- (id)initWithBundle:(id)arg1;
- (bool)logResourceVerificationErrors;
- (bool)performOnlineAuthorization;
- (bool)performValidationWithError:(id*)arg1;
- (void)setAllowAdhocSigning:(bool)arg1;
- (void)setLogResourceVerificationErrors:(bool)arg1;
- (void)setPerformOnlineAuthorization:(bool)arg1;
- (void)setSkipProfileIDValidation:(bool)arg1;
- (void)setValidateResources:(bool)arg1;
- (void)setValidateUsingDetachedSignature:(bool)arg1;
- (void)setVerifyTrustCachePresence:(bool)arg1;
- (id)signingInfo;
- (bool)skipProfileIDValidation;
- (bool)validateResources;
- (bool)validateUsingDetachedSignature;
- (bool)verifyTrustCachePresence;

@end