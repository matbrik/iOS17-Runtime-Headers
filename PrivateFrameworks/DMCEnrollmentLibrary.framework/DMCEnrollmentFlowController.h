/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DMCEnrollmentLibrary.framework/DMCEnrollmentLibrary
 */

@interface DMCEnrollmentFlowController : DMCEnrollmentFlowControllerBase {
    NSString * _ESSOConfigurationProfileIdentifier;
    NSString * _altDSID;
    NSArray * _anchorCertificateRefs;
    NSString * _appBundleID;
    NSDictionary * _authParams;
    NSDictionary * _authTokens;
    NSMutableDictionary * _authenticationResults;
    bool  _cleanupIfFail;
    NSString * _devicePasscode;
    NSData * _devicePasscodeData;
    unsigned long long  _devicePasscodeDataType;
    DMCEnrollmentDirtyState * _dirtyState;
    id /* block */  _enrollmentCompletionHandler;
    unsigned long long  _enrollmentMethod;
    unsigned long long  _enrollmentType;
    NSString * _enrollmentURL;
    NSNumber * _essoAppITunesStoreID;
    MDMESSODetails * _essoDetails;
    NSString * _friendlyName;
    bool  _hasExecutedUIStep;
    bool  _isPostRestoration;
    bool  _isProfileLocked;
    bool  _isRenewalFlow;
    NSString * _managedAppleID;
    <DMCEnrollmentFlowMCBridge> * _managedConfigurationHelper;
    bool  _noCompletionScene;
    NSString * _organizationName;
    NSString * _personaID;
    <DMCEnrollmentFlowPresenter> * _presenter;
    NSData * _profileData;
    NSString * _profileIdentifier;
    bool  _restartIfFail;
    NSString * _rmAccountIdentifier;
    NSArray * _serverCapabilities;
    unsigned long long  _serverInformationSource;
    NSArray * _servers;
    DMCServiceDiscoveryHelper * _serviceDiscoveryHelper;
    NSURL * _serviceURL;
    NSString * _username;
}

@property (nonatomic, retain) NSString *ESSOConfigurationProfileIdentifier;
@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, copy) NSArray *anchorCertificateRefs;
@property (nonatomic, retain) NSString *appBundleID;
@property (nonatomic, retain) NSDictionary *authParams;
@property (nonatomic, retain) NSDictionary *authTokens;
@property (nonatomic, retain) NSMutableDictionary *authenticationResults;
@property (nonatomic) bool cleanupIfFail;
@property (nonatomic, retain) NSString *devicePasscode;
@property (nonatomic, retain) NSData *devicePasscodeData;
@property (nonatomic) unsigned long long devicePasscodeDataType;
@property (nonatomic, retain) DMCEnrollmentDirtyState *dirtyState;
@property (nonatomic, copy) id /* block */ enrollmentCompletionHandler;
@property (nonatomic) unsigned long long enrollmentMethod;
@property (nonatomic) unsigned long long enrollmentType;
@property (nonatomic, retain) NSString *enrollmentURL;
@property (nonatomic, retain) NSNumber *essoAppITunesStoreID;
@property (nonatomic, retain) MDMESSODetails *essoDetails;
@property (nonatomic, retain) NSString *friendlyName;
@property (nonatomic) bool hasExecutedUIStep;
@property (nonatomic) bool isPostRestoration;
@property (nonatomic) bool isProfileLocked;
@property (nonatomic) bool isRenewalFlow;
@property (nonatomic, retain) NSString *managedAppleID;
@property (nonatomic, retain) <DMCEnrollmentFlowMCBridge> *managedConfigurationHelper;
@property (nonatomic) bool noCompletionScene;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic, retain) NSString *personaID;
@property (nonatomic, retain) <DMCEnrollmentFlowPresenter> *presenter;
@property (nonatomic, retain) NSData *profileData;
@property (nonatomic, retain) NSString *profileIdentifier;
@property (nonatomic) bool restartIfFail;
@property (nonatomic, retain) NSString *rmAccountIdentifier;
@property (nonatomic, retain) NSArray *serverCapabilities;
@property (nonatomic) unsigned long long serverInformationSource;
@property (nonatomic, retain) NSArray *servers;
@property (nonatomic, retain) DMCServiceDiscoveryHelper *serviceDiscoveryHelper;
@property (nonatomic, retain) NSURL *serviceURL;
@property (nonatomic, retain) NSString *username;

+ (id)_createEnterpriseApplicationExistsError;
+ (id)_createEnterpriseApplicationMissingEntitlementsError;
+ (id)_createGeneralError;
+ (id)_createGeneralSignInError;
+ (id)_createMissingAppleAccountForUserEnrollmentError;
+ (id)_createMissingEnterpriseApplicationBundleIDError;
+ (id)_createMissingEnterpriseApplicationError;
+ (id)_createMissingRMAccountError;
+ (id)_createUnsupportedFeatureError;
+ (id)chooseServerFromUAORGOServers:(id)arg1 error:(id*)arg2;
+ (id)enrollmentFlowController;
+ (id)enrollmentFlowControllerWithPresenter:(id)arg1 managedConfigurationHelper:(id)arg2;

- (void).cxx_destruct;
- (id)ESSOConfigurationProfileIdentifier;
- (id)_ADxE_MAID_firstPartSteps;
- (id)_ADxE_MAID_secondPartSteps_default;
- (id)_ADxE_MAID_secondPartSteps_orgToken;
- (id)_ADxE_commonSteps;
- (id)_ADxE_reauthSteps;
- (id)_ADxE_thirdParty_ESSO_firstPartSteps;
- (id)_ADxE_thirdParty_ESSO_secondPartSteps_default;
- (id)_ADxE_thirdParty_ESSO_secondPartSteps_orgToken;
- (id)_ADxE_thirdParty_firstPartSteps;
- (id)_ADxE_thirdParty_secondPartSteps_default;
- (id)_ADxE_thirdParty_secondPartSteps_orgToken;
- (id)_MDM_SharediPad_commonSteps;
- (id)_MDM_UserEnrollment_commonSteps;
- (id)_ORGO_MACBuddy_commonSteps;
- (id)_ORGO_MACBuddy_firstPartSteps;
- (id)_ORGO_MACBuddy_secondPartSteps;
- (id)_ORGO_MAIDEnrollmentSteps;
- (id)_ORGO_commonSteps;
- (id)_ORGO_deviceEnrollmentSteps;
- (id)_Watch_deviceEnrollmentSteps;
- (void)_addNotification;
- (bool)_appWithBundleIDExists:(id)arg1;
- (void)_askForPasscodeIfNeeded;
- (void)_askForRestoreChoiceWithMAID:(id)arg1 personaID:(id)arg2;
- (void)_askForUserConsentWithProfileData:(id)arg1 managedAppleID:(id)arg2;
- (void)_askForUsernameWithDefaultUsername:(id)arg1;
- (void)_authenticateMAID:(id)arg1 authenticationResults:(id)arg2 enrollmentType:(unsigned long long)arg3 personaID:(id)arg4 ephemeral:(bool)arg5 silent:(bool)arg6 isRenewalFlow:(bool)arg7;
- (void)_blockAppInstalls;
- (void)_blockAppInstallsIfNecessary;
- (id)_bundleIDsFromAppIDs:(id)arg1;
- (void)_chooseEnrollmentTypeWithAvailableServers:(id)arg1 serverInformationSource:(unsigned long long)arg2;
- (void)_cleanupDirtyState:(id)arg1;
- (id)_commonStepsForEnrollmentType:(unsigned long long)arg1;
- (id)_convertErrorToHumanReadableError:(id)arg1;
- (void)_correlateMAIDWithAltDSID:(id)arg1 withRMAccount:(id)arg2 isProfileLocked:(bool)arg3 organizationName:(id)arg4 friendlyName:(id)arg5 personaID:(id)arg6;
- (void)_createEnterprisePersonaWithDevicePasscode:(id)arg1 devicePasscodeData:(id)arg2 devicePasscodeDataType:(unsigned long long)arg3;
- (void)_createRMAccountIfNeededWithSignInUserIdentifier:(id)arg1 assignedMAID:(id)arg2 existingRMAccountID:(id)arg3 enrollmentType:(unsigned long long)arg4 enrollmentMethod:(unsigned long long)arg5 isRenewalFlow:(bool)arg6;
- (void)_detectAuthTypeWithServiceURL:(id)arg1 enrollmentType:(unsigned long long)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4;
- (void)_displayManagementDetailsOverviewWithProfileData:(id)arg1 managedAppleID:(id)arg2;
- (id)_errorTranslation;
- (void)_exchangeMAIDForBearerTokenWithRMAccountIdentifier:(id)arg1 authParams:(id)arg2 anchorCertificateRefs:(id)arg3;
- (bool)_extractAndVerifyPropertiesFromProfileData:(id)arg1 enrollmentMethod:(unsigned long long)arg2 isESSO:(bool)arg3 essoAppITunesStoreID:(id)arg4 error:(id*)arg5;
- (id)_fetchAppAttributesWithITunesItemID:(id)arg1 error:(id*)arg2;
- (void)_fetchEnrollmentProfileFromServiceURL:(id)arg1 authTokens:(id)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 enrollmentType:(unsigned long long)arg5 enrollmentMethod:(unsigned long long)arg6 isESSO:(bool)arg7 essoAppITunesStoreID:(id)arg8;
- (void)_fetchServerInformationWithUsername:(id)arg1;
- (id)_findServerWithVersion:(id)arg1 servers:(id)arg2;
- (void)_flowTerminatedWithError:(id)arg1 canceled:(bool)arg2;
- (id)_guardAgainstConflictingAccountsWithUsername:(id)arg1;
- (void)_installESSOConfigurationProfile:(id)arg1 devicePasscode:(id)arg2 personaID:(id)arg3;
- (void)_installEnrollmentProfile:(id)arg1 devicePasscode:(id)arg2 personaID:(id)arg3 rmAccountIdentifier:(id)arg4 isESSO:(bool)arg5 essoAppITunesStoreID:(id)arg6 essoConfigurationProfile:(id)arg7 enrollmentType:(unsigned long long)arg8;
- (void)_installEnterpriseApplication:(id)arg1 debuggingAppIDs:(id)arg2 personaID:(id)arg3;
- (bool)_isBYODEnrollment:(unsigned long long)arg1;
- (bool)_isORGOEnrollment:(unsigned long long)arg1;
- (void)_manageApplicationWithAppBundleID:(id)arg1 essoDetails:(id)arg2 organization:(id)arg3 personaID:(id)arg4;
- (id)_nameForStep:(unsigned long long)arg1;
- (id)_postEnrollmentSteps;
- (void)_preflightEnrollmentWithEnrollmentType:(unsigned long long)arg1 isRenewalFlow:(bool)arg2 isPostRestoration:(bool)arg3;
- (void)_processAuthServicesWithAuthParams:(id)arg1 enrollmentMethod:(unsigned long long)arg2 username:(id)arg3;
- (void)_promoteiCloudWithAltDSID:(id)arg1;
- (id)_readDirtyStateFromDisk;
- (void)_reauthenticationCompleteWithRMIdentifier:(id)arg1;
- (void)_receivedApplicationWillTerminateNotification:(id)arg1;
- (void)_requestiCloudSignInConfirmation;
- (void)_resetToInitialSteps;
- (void)_signInMAIDWithAuthenticationResult:(id)arg1 enrollmentType:(unsigned long long)arg2 personaID:(id)arg3 isRenewalFlow:(bool)arg4;
- (void)_startEnrollmentFlowWithType:(unsigned long long)arg1 anchorCertificates:(id)arg2 restartIfFail:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)_stepsWithUI;
- (id)_translatedErrorStringForError:(id)arg1;
- (id)_trustedErrors;
- (void)_unblockAppInstallsIfNecessaryWithCaller:(id)arg1;
- (void)_unblockAppInstallsWithCaller:(id)arg1;
- (void)_updateAccountsWithRMIdentifier:(id)arg1 managedAppleID:(id)arg2 profileIdentifier:(id)arg3 organizationName:(id)arg4 enrollmentURL:(id)arg5 personaID:(id)arg6;
- (void)_updateCredentialForAccount:(id)arg1 authTokens:(id)arg2;
- (void)_updateRMAccountWithIdentifier:(id)arg1 authTokens:(id)arg2 personaID:(id)arg3;
- (void)_updateRMAccountWithIdentifier:(id)arg1 authTokens:(id)arg2 profileIdentifier:(id)arg3 organizationName:(id)arg4 personaID:(id)arg5 enrollmentMethod:(unsigned long long)arg6;
- (void)_updateRMAccountWithIdentifier:(id)arg1 authenticationResults:(id)arg2 enrollmentMethod:(unsigned long long)arg3;
- (bool)_validEnrollmentMode:(id)arg1 enrollmentMethod:(unsigned long long)arg2;
- (bool)_validateAndTrackAppWithBundleID:(id)arg1 personaID:(id)arg2 requiredEntitlements:(id)arg3 error:(id*)arg4;
- (void)_workerQueue_cleanupCachedValues;
- (void)_workerQueue_flowCompleted;
- (void)_workerQueue_performFlowStep:(unsigned long long)arg1;
- (void)_workerQueue_stopMonitorAndEmptyDiskValues;
- (void)_writeDirtyStateToDisk:(id)arg1;
- (id)altDSID;
- (id)anchorCertificateRefs;
- (id)appBundleID;
- (id)authParams;
- (id)authTokens;
- (id)authenticationResults;
- (void)cleanUpDirtyState;
- (bool)cleanupIfFail;
- (void)continueMacBuddyORGOEnrollmentFlowWithAuthentiactionResults:(id)arg1 serviceURL:(id)arg2 bearerToken:(id)arg3 profileData:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)dealloc;
- (id)devicePasscode;
- (id)devicePasscodeData;
- (unsigned long long)devicePasscodeDataType;
- (id)dirtyState;
- (id /* block */)enrollmentCompletionHandler;
- (unsigned long long)enrollmentMethod;
- (unsigned long long)enrollmentType;
- (id)enrollmentURL;
- (id)essoAppITunesStoreID;
- (id)essoDetails;
- (id)friendlyName;
- (bool)hasExecutedUIStep;
- (id)init;
- (id)initWithPresenter:(id)arg1 managedConfigurationHelper:(id)arg2;
- (bool)isPostRestoration;
- (bool)isProfileLocked;
- (bool)isRenewalFlow;
- (id)managedAppleID;
- (id)managedConfigurationHelper;
- (bool)noCompletionScene;
- (id)organizationName;
- (id)personaID;
- (id)presenter;
- (id)profileData;
- (id)profileIdentifier;
- (void)reauthBYODEnrollmentFlowRestartIfFail:(bool)arg1 rmAccountIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)renewORGOEnrollmentWithServiceURL:(id)arg1 anchorCertificates:(id)arg2 restartIfFail:(bool)arg3 cleanupIfFail:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)restartIfFail;
- (void)restartORGOEnrollmentWithServiceURL:(id)arg1 anchorCertificates:(id)arg2 isPostRestoration:(bool)arg3 restartIfFail:(bool)arg4 cleanupIfFail:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)rmAccountIdentifier;
- (id)serverCapabilities;
- (unsigned long long)serverInformationSource;
- (id)servers;
- (id)serviceDiscoveryHelper;
- (id)serviceURL;
- (void)setAltDSID:(id)arg1;
- (void)setAnchorCertificateRefs:(id)arg1;
- (void)setAppBundleID:(id)arg1;
- (void)setAuthParams:(id)arg1;
- (void)setAuthTokens:(id)arg1;
- (void)setAuthenticationResults:(id)arg1;
- (void)setCleanupIfFail:(bool)arg1;
- (void)setDevicePasscode:(id)arg1;
- (void)setDevicePasscodeData:(id)arg1;
- (void)setDevicePasscodeDataType:(unsigned long long)arg1;
- (void)setDirtyState:(id)arg1;
- (void)setESSOConfigurationProfileIdentifier:(id)arg1;
- (void)setEnrollmentCompletionHandler:(id /* block */)arg1;
- (void)setEnrollmentMethod:(unsigned long long)arg1;
- (void)setEnrollmentType:(unsigned long long)arg1;
- (void)setEnrollmentURL:(id)arg1;
- (void)setEssoAppITunesStoreID:(id)arg1;
- (void)setEssoDetails:(id)arg1;
- (void)setFriendlyName:(id)arg1;
- (void)setHasExecutedUIStep:(bool)arg1;
- (void)setIsPostRestoration:(bool)arg1;
- (void)setIsProfileLocked:(bool)arg1;
- (void)setIsRenewalFlow:(bool)arg1;
- (void)setManagedAppleID:(id)arg1;
- (void)setManagedConfigurationHelper:(id)arg1;
- (void)setNoCompletionScene:(bool)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setProfileData:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setRestartIfFail:(bool)arg1;
- (void)setRmAccountIdentifier:(id)arg1;
- (void)setServerCapabilities:(id)arg1;
- (void)setServerInformationSource:(unsigned long long)arg1;
- (void)setServers:(id)arg1;
- (void)setServiceDiscoveryHelper:(id)arg1;
- (void)setServiceURL:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)startBYODEnrollmentFlowRestartIfFail:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)startMacBuddyORGOEnrollmentFlowWithServiceURL:(id)arg1 anchorCertificates:(id)arg2 restartIfFail:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)startORGOEnrollmentFlowWithServiceURL:(id)arg1 anchorCertificates:(id)arg2 restartIfFail:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)startUAORGOEnrollmentFlowWithServiceURL:(id)arg1 anchorCertificates:(id)arg2 restartIfFail:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)startWatchEnrollmentFlowWithServiceURL:(id)arg1 anchorCertificates:(id)arg2 restartIfFail:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)terminateEnrollmentFlow;
- (void)updateMDMUserEnrollmentWithManagedAppleID:(id)arg1 profileIdentifier:(id)arg2 organizationName:(id)arg3 personaID:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)updateSharediPadUserChannelWithManagedAppleID:(id)arg1 profileIdentifier:(id)arg2 organizationName:(id)arg3 enrollmentURL:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)username;

@end