/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainer : NSObject <NSSecureCoding> {
    NSDictionary * _bundleIDVersions;
    NSSet * _bundleIDs;
    unsigned int  _currentStatus;
    NSData * _dataRepresentation;
    NSSet * _documentsTypes;
    NSSet * _exportedTypes;
    NSNumber * _iconGeneratorVersion;
    NSDictionary * _iconMetadata;
    NSDictionary * _iconURLs;
    NSData * _imageSandboxExtension;
    NSSet * _importedTypes;
    bool  _isCloudSyncTCCDisabled;
    NSNumber * _isDocumentScopePublicAsNumber;
    bool  _isInCloudDocsZone;
    bool  _isInInitialState;
    bool  _isObservingCurrentStatus;
    bool  _isObservingLastServerUpdate;
    bool  _isObservingOverQuota;
    bool  _isOverQuota;
    NSDate * _lastServerUpdate;
    NSString * _localizedName;
    BRMangledID * _mangledID;
    NSObject<OS_dispatch_queue> * _observationSetupQueueForDefaultConnection;
    NSObject<OS_dispatch_queue> * _observationSetupQueueForSecondaryConnection;
    NSString * _personaID;
    NSPurgeableData * _purgeableDataRepresentation;
    bool  _shouldUsePurgeableData;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSSet *bundleIdentifiers;
@property (readonly) unsigned int currentStatus;
@property unsigned int currentStatus;
@property (nonatomic, readonly) NSSet *documentsTypes;
@property (nonatomic, readonly) NSURL *documentsURL;
@property (nonatomic, readonly) NSSet *exportedTypes;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSSet *importedTypes;
@property (nonatomic) bool isCloudSyncTCCDisabled;
@property (nonatomic, readonly) bool isDocumentScopePublic;
@property (nonatomic) bool isInCloudDocsZone;
@property (nonatomic) bool isInInitialState;
@property (retain) NSDate *lastServerUpdate;
@property (readonly) NSDate *lastServerUpdate;
@property (nonatomic, readonly) NSString *localizedName;
@property (getter=isOverQuota) bool overQuota;
@property (getter=isOverQuota, readonly) bool overQuota;
@property (nonatomic, readonly) NSString *supportedFolderLevels;
@property (nonatomic, readonly) NSURL *trashURL;
@property (nonatomic, readonly) NSURL *url;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)_URLForPlistOfMangledID:(id)arg1;
+ (id)_bundleIDVersionsWithProperties:(id)arg1 mangledID:(id)arg2;
+ (id)_bundleIDsWithProperties:(id)arg1;
+ (id)_containerRepositoryURLForMangledID:(id)arg1;
+ (id)_documentsTypesWithProperties:(id)arg1;
+ (id)_exportedTypesWithProperties:(id)arg1;
+ (id)_iconGeneratorVersionWithProperties:(id)arg1;
+ (id)_iconMetadataWithProperties:(id)arg1;
+ (id)_iconURLsWithProperties:(id)arg1 mangledID:(id)arg2;
+ (id)_importedTypesWithProperties:(id)arg1;
+ (id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 mangledID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 mangledID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 mangledID:(id)arg2 preferredLanguages:(id)arg3;
+ (id)_pathForIconName:(id)arg1 mangledID:(id)arg2;
+ (id)_sanitizedContainerFallbackNameForMangledID:(id)arg1;
+ (id)allContainers;
+ (id)allContainersBlockIfNeeded:(bool)arg1;
+ (id)allContainersByContainerID;
+ (id)bundleIdentifiersEnumeratorForProperties:(id)arg1;
+ (id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3;
+ (bool)canMoveFilesWithoutDownloadingFromContainer:(id)arg1 toContainer:(id)arg2;
+ (id)containersRepositoryURL;
+ (id)documentContainers;
+ (void)forceRefreshAllContainersWithCompletion:(id /* block */)arg1;
+ (void)initialize;
+ (id)localizedNameForDefaultCloudDocsContainer;
+ (id)localizedNameForDesktopContainer;
+ (id)localizedNameForDocumentsContainer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_containerRepositoryURL;
- (id)_imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2 isiOSIcon:(bool*)arg3 shouldTransformToAppIcon:(bool*)arg4;
- (id)_pathForIconName:(id)arg1;
- (id)_pathForPlist;
- (void)_performWhileAccessingSecurityScopedContainer:(id /* block */)arg1;
- (void)_replaceDataRepresentationWithData:(id)arg1;
- (void)accessPropertiesInBlock:(id /* block */)arg1;
- (id)bundleIDVersions;
- (id)bundleIdentifiers;
- (id)computedProperties;
- (id)description;
- (id)documentsTypes;
- (id)documentsURL;
- (void)encodeWithCoder:(id)arg1;
- (id)exportedTypes;
- (void)forceRefreshWithCompletion:(id /* block */)arg1;
- (id)iconGeneratorVersion;
- (id)iconMetadata;
- (id)identifier;
- (id)imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2;
- (id)imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2 isiOSIcon:(bool*)arg3;
- (id)imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2 shouldTransformToAppIcon:(bool*)arg3;
- (id)imageRepresentationsAvailable;
- (id)importedTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocsOrDesktopContainerID:(id)arg1;
- (id)initWithMangledID:(id)arg1;
- (id)initWithMangledID:(id)arg1 dataRepresentation:(id)arg2;
- (bool)isCloudSyncTCCDisabled;
- (bool)isDocumentScopePublic;
- (bool)isInCloudDocsZone;
- (bool)isInInitialState;
- (id)localizedName;
- (id)localizedNameWithPreferredLanguages:(id)arg1;
- (void)setIsCloudSyncTCCDisabled:(bool)arg1;
- (void)setIsInCloudDocsZone:(bool)arg1;
- (void)setIsInInitialState:(bool)arg1;
- (void)setUrlRoot:(id)arg1;
- (id)supportedFolderLevels;
- (id)trashRestoreStringForURL:(id)arg1;
- (id)trashURL;
- (id)url;

// BRContainer (BRFinderAdditions)

+ (id)containerForItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)containerInRepositoryURL:(id)arg1 createIfMissing:(bool)arg2 error:(id*)arg3;
+ (id)containerInRepositoryURL:(id)arg1 error:(id*)arg2;
+ (id)documentsContainersInBackupHomeAtURL:(id)arg1 error:(id*)arg2;

- (bool)deleteAllContentsOnClientAndServer:(id*)arg1;
- (bool)isOverQuota;

// BRContainer (BRFinderInternalAdditions)

- (bool)deleteAllContentsOnClientAndServer:(bool)arg1 error:(id*)arg2;
- (void)setOverQuota:(bool)arg1;

// BRContainer (BRInternalAdditions)

+ (void)_generateiOSIconsForMangledID:(id)arg1 usingBundle:(struct __CFBundle { }*)arg2 generatedIcons:(id)arg3;
+ (id)classesForDecoding;
+ (id)containerForMangledID:(id)arg1;
+ (void)forceRefreshContainers:(id)arg1 completion:(id /* block */)arg2;
+ (bool)isDocumentScopePublicWithProperties:(id)arg1 mangledID:(id)arg2;
+ (void)postContainerListUpdateNotification;
+ (void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)propertiesForMangledID:(id)arg1 usingBundle:(struct __CFBundle { }*)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4;
+ (bool)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2;

- (bool)_updateMetadataOnDiskWithProperties:(id)arg1;
- (void)accessDataRepresentationInBlock:(id /* block */)arg1;
- (id)bestFittingImageDataForSize:(struct CGSize { double x1; double x2; })arg1 shouldTransformToAppIcon:(bool*)arg2;
- (bool)containsExcludedDocumentsOnTheFSWithExcludedButPreservedFilename:(id)arg1 excludedButPreservedExtensions:(id)arg2 andStampUploadedAppWithXattr:(bool)arg3;
- (id)copyDataRepresentation;
- (bool)hasIconWithName:(id)arg1;
- (id)iconURLs;
- (id)shortDescription;
- (bool)updateMetadataWithExtractorProperties:(id)arg1 iconPaths:(id)arg2 bundleID:(id)arg3;
- (bool)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2;
- (id)versionNumberForBundleIdentifier:(id)arg1;

// BRContainer (BRPriorityHinting)

+ (void)unregisterCurrentProcessAsPriorityHint;

- (bool)registerCurrentProcessAsPriorityHintWithError:(id*)arg1;

// BRContainer (BRXcodeAdditions)

- (unsigned int)currentStatus;
- (id)lastServerUpdate;

// BRContainer (BRXcodeInternalAdditions)

- (void)setCurrentStatus:(unsigned int)arg1;
- (void)setLastServerUpdate:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

// BRContainer (Daemon)

- (unsigned int)currentStatus;
- (bool)isOverQuota;
- (id)lastServerUpdate;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

// BRContainer (Daemon)

- (unsigned int)currentStatus;
- (bool)isOverQuota;
- (id)lastServerUpdate;

@end