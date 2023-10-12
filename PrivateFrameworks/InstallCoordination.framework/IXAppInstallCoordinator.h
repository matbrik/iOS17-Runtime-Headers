/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXAppInstallCoordinator : NSObject <IXCoordinatorWithPlaceholderPromise> {
    bool  _complete;
    LSApplicationRecord * _completedApplicationRecord;
    NSError * _error;
    unsigned long long  _errorSourceIdentifier;
    bool  _isRegisteredWithDaemon;
    <IXAppInstallCoordinatorObserver> * _observer;
    unsigned long long  _observersCalled;
    IXAppInstallCoordinatorSeed * _seed;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic, readonly) LSApplicationRecord *completedApplicationRecord;
@property (nonatomic, readonly) unsigned long long coordinationState;
@property (nonatomic, readonly) unsigned int creatorEUID;
@property (nonatomic, readonly) unsigned long long creatorIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *descriptionWithRemoteState;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) unsigned long long errorSourceIdentifier;
@property (nonatomic, readonly) bool hasAppAssetPromise;
@property (nonatomic, readonly) bool hasInitialODRAssetPromises;
@property (nonatomic, readonly) bool hasInstallOptions;
@property (nonatomic, readonly) bool hasPlaceholderPromise;
@property (nonatomic, readonly) bool hasUserDataPromise;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IXApplicationIdentity *identity;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) bool isRegisteredWithDaemon;
@property (nonatomic) <IXAppInstallCoordinatorObserver> *observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observerCalloutQueue;
@property (nonatomic) unsigned long long observersCalled;
@property (nonatomic, readonly) IXAppInstallCoordinatorSeed *seed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSArray *validInstallTypes;

+ (void)_asynchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
+ (id)_coordinatorForAppWithIdentity:(id)arg1 targetingInstallationDomain:(unsigned long long)arg2 withClientID:(unsigned long long)arg3 intent:(unsigned long long)arg4 createIfNotExisting:(bool)arg5 requireMatchingIntent:(bool)arg6 scopeRequirement:(unsigned char)arg7 created:(bool*)arg8 error:(id*)arg9;
+ (bool)_synchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
+ (void)_validatePreconditionForIntent:(unsigned long long)arg1 matchesCurrentInstallStateForBundleID:(id)arg2;
+ (void)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (bool)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id*)arg4;
+ (void)cancelCoordinatorForAppWithIdentity:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (bool)cancelCoordinatorForAppWithIdentity:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id*)arg4;
+ (void)cancelCoordinatorsForAppsWithApplicationIdentities:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (bool)cancelCoordinatorsForAppsWithApplicationIdentities:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id*)arg4;
+ (void)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (bool)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id*)arg4;
+ (Class)classForIntent:(unsigned long long)arg1;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;
+ (id)coordinatorForAppWithIdentity:(id)arg1 targetingInstallationDomain:(unsigned long long)arg2 withClientID:(unsigned long long)arg3 createIfNotExisting:(bool)arg4 created:(bool*)arg5 error:(id*)arg6;
+ (id)coordinatorForAppWithIdentity:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;
+ (void)enumerateCoordinatorsUsingBlock:(id /* block */)arg1;
+ (bool)enumerateCoordinatorsWithBlock:(id /* block */)arg1 error:(id*)arg2;
+ (bool)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
+ (id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2;
+ (id)existingCoordinatorForAppWithIdentity:(id)arg1 error:(id*)arg2;
+ (unsigned long long)intent;
+ (bool)modifiesLocalLaunchServicesDatabase;
+ (void)pauseCoordinatorForAppWithBundleID:(id)arg1 completion:(id /* block */)arg2;
+ (bool)pauseCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2;
+ (void)pauseCoordinatorForAppWithIdentity:(id)arg1 completion:(id /* block */)arg2;
+ (bool)pauseCoordinatorForAppWithIdentity:(id)arg1 error:(id*)arg2;
+ (void)prioritizeCoordinatorForAppWithBundleID:(id)arg1 completion:(id /* block */)arg2;
+ (bool)prioritizeCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2;
+ (void)prioritizeCoordinatorForAppWithIdentity:(id)arg1 completion:(id /* block */)arg2;
+ (bool)prioritizeCoordinatorForAppWithIdentity:(id)arg1 error:(id*)arg2;
+ (id)processScopedCoordinatorForAppWithIdentity:(id)arg1 targetingInstallationDomain:(unsigned long long)arg2 withClientID:(unsigned long long)arg3 createIfNotExisting:(bool)arg4 created:(bool*)arg5 error:(id*)arg6;
+ (id)processScopedCoordinatorForAppWithIdentity:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;
+ (bool)refreshContainerTypes:(unsigned long long)arg1 forApplicationIdentity:(id)arg2 reason:(id)arg3 error:(id*)arg4;
+ (bool)refreshContainerTypes:(unsigned long long)arg1 forBundleID:(id)arg2 reason:(id)arg3 error:(id*)arg4;
+ (bool)refreshDataContainerForBundleID:(id)arg1 reason:(id)arg2 error:(id*)arg3;
+ (void)removabilityForAppWithBundleID:(id)arg1 completion:(id /* block */)arg2;
+ (unsigned long long)removabilityForAppWithBundleID:(id)arg1 error:(id*)arg2;
+ (void)removabilityForAppWithIdentity:(id)arg1 completion:(id /* block */)arg2;
+ (unsigned long long)removabilityForAppWithIdentity:(id)arg1 error:(id*)arg2;
+ (void)resumeCoordinatorForAppWithBundleID:(id)arg1 completion:(id /* block */)arg2;
+ (bool)resumeCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2;
+ (void)resumeCoordinatorForAppWithIdentity:(id)arg1 completion:(id /* block */)arg2;
+ (bool)resumeCoordinatorForAppWithIdentity:(id)arg1 error:(id*)arg2;
+ (void)revertAppWithBundleID:(id)arg1 completion:(id /* block */)arg2;
+ (void)revertAppWithBundleID:(id)arg1 completionWithApplicationRecord:(id /* block */)arg2;
+ (bool)revertAppWithBundleID:(id)arg1 error:(id*)arg2;
+ (bool)revertAppWithBundleID:(id)arg1 resultingApplicationRecord:(id*)arg2 error:(id*)arg3;
+ (void)revertAppWithIdentity:(id)arg1 completionWithApplicationRecord:(id /* block */)arg2;
+ (bool)revertAppWithIdentity:(id)arg1 resultingApplicationRecord:(id*)arg2 error:(id*)arg3;
+ (void)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 byClient:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 completion:(id /* block */)arg3;
+ (void)setRemovability:(unsigned long long)arg1 forAppWithIdentity:(id)arg2 byClient:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (void)setSkipIntentValidation:(bool)arg1;
+ (bool)skipIntentValidation;
+ (bool)uninstallAppWithBundleID:(id)arg1 error:(id*)arg2;
+ (void)uninstallAppWithBundleID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (bool)uninstallAppWithBundleID:(id)arg1 options:(id)arg2 disposition:(unsigned long long*)arg3 error:(id*)arg4;
+ (bool)uninstallAppWithBundleID:(id)arg1 options:(id)arg2 disposition:(unsigned long long*)arg3 error:(id*)arg4 legacyProgressBlock:(id /* block */)arg5;
+ (void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(bool)arg2 completion:(id /* block */)arg3;
+ (void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(bool)arg2 waitForDeletion:(bool)arg3 completion:(id /* block */)arg4;
+ (bool)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(bool)arg2 waitForDeletion:(bool)arg3 error:(id*)arg4;
+ (void)uninstallAppWithIdentity:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (bool)uninstallAppWithIdentity:(id)arg1 options:(id)arg2 disposition:(unsigned long long*)arg3 error:(id*)arg4;
+ (bool)uninstallAppWithIdentity:(id)arg1 options:(id)arg2 disposition:(unsigned long long*)arg3 error:(id*)arg4 legacyProgressBlock:(id /* block */)arg5;
+ (bool)updateSINFForAppWithIdentity:(id)arg1 sinfData:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (bool)updateSINFForAppWithIdentity:(id)arg1 wrapperURL:(id)arg2 sinfData:(id)arg3 error:(id*)arg4;
+ (bool)updateiTunesMetadataForAppWithIdentity:(id)arg1 plistData:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (bool)updateiTunesMetadataForAppWithIdentity:(id)arg1 wrapperURL:(id)arg2 plistData:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;
- (oneway void)_clientDelegate_didCompleteForApplicationRecord:(id)arg1;
- (oneway void)_clientDelegate_didRegisterForObservation;
- (oneway void)_clientDelegate_didUpdateProgress:(double)arg1 forPhase:(unsigned long long)arg2 overallProgress:(double)arg3;
- (oneway void)_clientDelegate_placeholderDidInstallForApplicationRecord:(id)arg1;
- (oneway void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
- (oneway void)_clientDelegate_shouldBeginPostProcessingForApplicationRecord:(id)arg1;
- (oneway void)_clientDelegate_shouldBeginRestoringUserData;
- (oneway void)_clientDelegate_shouldPause;
- (oneway void)_clientDelegate_shouldPrioritize;
- (oneway void)_clientDelegate_shouldResume;
- (void)_conveyCurrentPriorityBoostReplacingExisting:(bool)arg1;
- (void)_onObserverCalloutQueue_handleObserverForCompletedCoordinator:(id)arg1 completedApplicationRecord:(id)arg2 error:(id)arg3 client:(unsigned long long)arg4;
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(bool)arg2;
- (bool)appAssetPromiseHasBegunFulfillment:(bool*)arg1 error:(id*)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id*)arg1;
- (id)appAssetPromiseWithError:(id*)arg1;
- (id)appQuitPromiseWithError:(id*)arg1;
- (id)bundleID;
- (void)cancelForReason:(id)arg1;
- (bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id*)arg3;
- (id)completedApplicationRecord;
- (bool)convertToGloballyScopedCoordinatorWithError:(id*)arg1;
- (unsigned long long)coordinationState;
- (unsigned char)coordinatorScopeWithError:(id*)arg1;
- (unsigned int)creatorEUID;
- (unsigned long long)creatorIdentifier;
- (void)dealloc;
- (id)description;
- (id)descriptionWithRemoteState;
- (id)deviceSecurityPromiseWithError:(id*)arg1;
- (id)error;
- (unsigned long long)errorSourceIdentifier;
- (id)essentialAssetPromisesWithError:(id*)arg1;
- (bool)getHasDeviceSecurityPromise:(bool*)arg1 error:(id*)arg2;
- (bool)getHasEssentialAssetPromises:(bool*)arg1 error:(id*)arg2;
- (bool)getNeedsPostProcessing:(bool*)arg1 error:(id*)arg2;
- (bool)getPostProcessingShouldBegin:(bool*)arg1 error:(id*)arg2;
- (bool)getShouldOverrideGatekeeperValue:(bool*)arg1 error:(id*)arg2;
- (bool)hasAppAssetPromise;
- (bool)hasInitialODRAssetPromises;
- (bool)hasInstallOptions;
- (bool)hasPlaceholderPromise;
- (bool)hasUserDataPromise;
- (unsigned long long)hash;
- (id)identity;
- (unsigned long long)importanceWithError:(id*)arg1;
- (id)initWithSeed:(id)arg1;
- (id)initialODRAssetPromisesWithError:(id*)arg1;
- (id)installTargetDirectoryURLWithError:(id*)arg1;
- (id)internalQueue;
- (bool)isComplete;
- (bool)isEqual:(id)arg1;
- (bool)isPaused:(bool*)arg1 withError:(id*)arg2;
- (bool)isRegisteredWithDaemon;
- (id)managedInstallUUIDWithError:(id*)arg1;
- (id)observer;
- (id)observerCalloutQueue;
- (unsigned long long)observersCalled;
- (bool)pauseWithError:(id*)arg1;
- (unsigned long long)placeholderDispositionWithError:(id*)arg1;
- (id)placeholderPromiseWithError:(id*)arg1;
- (id)preparationPromiseWithError:(id*)arg1;
- (bool)prioritizeWithError:(id*)arg1;
- (id)progressHintWithError:(id*)arg1;
- (unsigned long long)removabilityWithError:(id*)arg1;
- (bool)resumeWithError:(id*)arg1;
- (id)seed;
- (bool)setAppAssetPromise:(id)arg1 error:(id*)arg2;
- (bool)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setAppQuitPromise:(id)arg1 error:(id*)arg2;
- (void)setComplete:(bool)arg1;
- (void)setComplete:(bool)arg1 forApplicationRecord:(id)arg2;
- (bool)setDeviceSecurityPromise:(id)arg1 error:(id*)arg2;
- (void)setError:(id)arg1;
- (void)setErrorSourceIdentifier:(unsigned long long)arg1;
- (bool)setEssentialAssetPromises:(id)arg1 error:(id*)arg2;
- (bool)setImportance:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setInitialODRAssetPromises:(id)arg1 error:(id*)arg2;
- (bool)setInstallOptions:(id)arg1 error:(id*)arg2;
- (bool)setInstallTargetDirectoryURL:(id)arg1 error:(id*)arg2;
- (void)setIsRegisteredWithDaemon:(bool)arg1;
- (bool)setManagedInstallUUID:(id)arg1 error:(id*)arg2;
- (bool)setNeedsPostProcessing:(bool)arg1 error:(id*)arg2;
- (void)setObserver:(id)arg1;
- (void)setObserversCalled:(unsigned long long)arg1;
- (bool)setPlaceholderDisposition:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setPlaceholderPromise:(id)arg1 error:(id*)arg2;
- (bool)setPreparationPromise:(id)arg1 withError:(id*)arg2;
- (bool)setProgressHint:(id)arg1 withError:(id*)arg2;
- (bool)setRemovability:(unsigned long long)arg1 byClient:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setShouldOverrideGatekeeper:(bool)arg1 error:(id*)arg2;
- (bool)setTargetBundleURL:(id)arg1 error:(id*)arg2;
- (bool)setTargetBundleURL:(id)arg1 preservingTargetBundleNameOnUpdate:(bool)arg2 error:(id*)arg3;
- (bool)setUserDataPromise:(id)arg1 error:(id*)arg2;
- (id)targetBundleURLWithError:(id*)arg1;
- (id)uniqueIdentifier;
- (id)userDataPromiseWithError:(id*)arg1;
- (id)userDataRestoreShouldBegin:(bool*)arg1;

// IXAppInstallCoordinator (IXDemoteToPlaceholder)

+ (void)_demoteAppToPlaceholderWithApplicationIdentity:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 ignoreRemovability:(bool)arg4 returnEarlyForTesting:(bool)arg5 completion:(id /* block */)arg6;
+ (void)_demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 ignoreRemovability:(bool)arg4 completion:(id /* block */)arg5;
+ (void)demoteAppToPlaceholderWithApplicationIdentity:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 ignoreRemovability:(bool)arg4 completion:(id /* block */)arg5;
+ (bool)demoteAppToPlaceholderWithApplicationIdentity:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 ignoreRemovability:(bool)arg4 error:(id*)arg5;
+ (bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 error:(id*)arg3;
+ (void)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 completion:(id /* block */)arg4;
+ (bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 error:(id*)arg4;
+ (void)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 ignoreRemovability:(bool)arg4 completion:(id /* block */)arg5;
+ (bool)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 ignoreRemovability:(bool)arg4 error:(id*)arg5;

// IXAppInstallCoordinator (IXDemoteToPlaceholderTesting)

+ (bool)testReturnEarlyDemoteAppToPlaceholderWithApplicationIdentity:(id)arg1 forReason:(unsigned long long)arg2 error:(id*)arg3;

// IXAppInstallCoordinator (IXDiskImageMounter)

+ (bool)registerContentsForDiskImageAtURL:(id)arg1 options:(id)arg2 withError:(id*)arg3;
+ (bool)unregisterContentsForDiskImageAtURL:(id)arg1 options:(id)arg2 withError:(id*)arg3;

// IXAppInstallCoordinator (IXPersonaBasedMultiUser)

+ (bool)associateMultiPersonaAppsWithBundleIDs:(id)arg1 withPersona:(id)arg2 withError:(id*)arg3;

// IXAppInstallCoordinator (IXSimpleInstaller)

+ (void)_beginInstallForURL:(id)arg1 forPersonaUniqueString:(id)arg2 consumeSource:(bool)arg3 options:(id)arg4 progressBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)_beginInstallForURL:(id)arg1 forPersonaUniqueString:(id)arg2 consumeSource:(bool)arg3 options:(id)arg4 progressBlock:(id /* block */)arg5 completionWithIdentity:(id /* block */)arg6;
+ (id)_coordinatorForIdentity:(id)arg1 created:(bool*)arg2 error:(id*)arg3;
+ (void)installApplication:(id)arg1 consumeSource:(bool)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (void)installApplication:(id)arg1 forPersonaUniqueString:(id)arg2 consumeSource:(bool)arg3 options:(id)arg4 completion:(id /* block */)arg5;
+ (void)installApplication:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (void)installApplication:(id)arg1 toTargetDirectory:(id)arg2 consumeSource:(bool)arg3 options:(id)arg4 completion:(id /* block */)arg5;
+ (void)installApplication:(id)arg1 toTargetDirectory:(id)arg2 consumeSource:(bool)arg3 shouldOverrideGatekeeper:(bool)arg4 options:(id)arg5 completion:(id /* block */)arg6;
+ (void)installApplication:(id)arg1 toURL:(id)arg2 consumeSource:(bool)arg3 options:(id)arg4 completion:(id /* block */)arg5;
+ (void)installApplication:(id)arg1 toURL:(id)arg2 consumeSource:(bool)arg3 shouldOverrideGatekeeper:(bool)arg4 options:(id)arg5 completion:(id /* block */)arg6;

// IXAppInstallCoordinator (IXSimpleInstallerPrivate)

+ (void)installApplication:(id)arg1 consumeSource:(bool)arg2 options:(id)arg3 legacyProgressBlock:(id /* block */)arg4 completion:(id /* block */)arg5;

// IXAppInstallCoordinator (IXTesting)

+ (int)daemonPid;
+ (bool)killDaemonForTesting;
+ (bool)postNSCurrentLocaleDidChangeNotification;
+ (bool)purgeAllCoordinatorsAndPromisesForCreator:(unsigned long long)arg1;
+ (bool)setTestModeForIdentifierPrefix:(id)arg1 testMode:(unsigned long long)arg2;
+ (bool)setTestModeForIdentifierPrefix:(id)arg1 testMode:(unsigned long long)arg2 testSpecificValidationData:(id)arg3;
+ (bool)setTestingEnabled:(bool)arg1;
+ (bool)simulateClientDeath;

@end