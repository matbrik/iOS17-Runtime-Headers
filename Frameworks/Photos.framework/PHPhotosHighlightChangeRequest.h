/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotosHighlightChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHRelationshipChangeRequestHelper * _adaptiveExplicitlyAddedAssetsHelper;
    PHRelationshipChangeRequestHelper * _adaptiveExplicitlyRemovedAssetsHelper;
    PHRelationshipChangeRequestHelper * _adaptiveKeyAssetHelper;
    PHRelationshipChangeRequestHelper * _adaptiveKeyAssetUserEditedHelper;
    PHRelationshipChangeRequestHelper * _adaptiveKeySharedAssetHelper;
    PHRelationshipChangeRequestHelper * _adaptiveKeySharedAssetUserEditedHelper;
    NSArray * _assetObjectIDsToAddToAdaptiveExplicitlyRemovedAssets;
    NSDictionary * _curationHelpersByCurationType;
    PHRelationshipChangeRequestHelper * _dayGroupKeyAssetHelper;
    PHRelationshipChangeRequestHelper * _dayGroupKeyAssetSharedHelper;
    PHRelationshipChangeRequestHelper * _dayKeyAssetHelper;
    PHRelationshipChangeRequestHelper * _dayKeyAssetSharedHelper;
    PHRelationshipChangeRequestHelper * _monthKeyAssetHelper;
    PHRelationshipChangeRequestHelper * _monthKeyAssetSharedHelper;
    PHPhotosHighlight * _originalHighlight;
    NSString * _sourceHighlightUUIDForAdaptiveHighlight;
    PHRelationshipChangeRequestHelper * _yearKeyAssetHelper;
    PHRelationshipChangeRequestHelper * _yearKeyAssetSharedHelper;
}

@property (nonatomic, readonly) long long accessScopeOptionsRequirement;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *adaptiveExplicitlyAddedAssetsHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *adaptiveExplicitlyRemovedAssetsHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *adaptiveKeyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *adaptiveKeyAssetUserEditedHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *adaptiveKeySharedAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *adaptiveKeySharedAssetUserEditedHelper;
@property (nonatomic, retain) NSArray *assetObjectIDsToAddToAdaptiveExplicitlyRemovedAssets;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) NSDictionary *curationHelpersByCurationType;
@property (nonatomic, retain) NSString *dateDescription;
@property (nonatomic, retain) NSString *dateDescriptionMixed;
@property (nonatomic, retain) NSString *dateDescriptionShared;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *dayGroupKeyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *dayGroupKeyAssetSharedHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *dayKeyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *dayKeyAssetSharedHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short enrichmentState;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, retain) NSDate *lastEnrichmentDate;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *monthKeyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *monthKeyAssetSharedHelper;
@property (nonatomic) unsigned long long mood;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) PHPhotosHighlight *originalHighlight;
@property (nonatomic) double promotionScore;
@property (nonatomic) bool shouldPerformConcurrentWork;
@property (nonatomic, retain) NSString *smartDescription;
@property (nonatomic, retain) NSString *smartDescriptionMixed;
@property (nonatomic, retain) NSString *smartDescriptionShared;
@property (nonatomic, retain) NSString *sourceHighlightUUIDForAdaptiveHighlight;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *verboseSmartDescription;
@property (nonatomic, retain) NSString *verboseSmartDescriptionMixed;
@property (nonatomic, retain) NSString *verboseSmartDescriptionShared;
@property (nonatomic, retain) NSString *verboseSmartDescriptionUserEdited;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic) unsigned short visibilityStateMixed;
@property (nonatomic) unsigned short visibilityStateShared;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *yearKeyAssetHelper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *yearKeyAssetSharedHelper;

+ (id)_adaptiveExplicitlyRemovedAssetsFromXPCDict:(id)arg1 storeCoordinator:(id)arg2;
+ (id)changeRequestForPhotosHighlight:(id)arg1;
+ (id)creationRequestForAdaptiveHighlightFromSourceHighlight:(id)arg1;
+ (id)creationRequestForAdaptiveHighlightWithAssets:(id)arg1 extendedAssets:(id)arg2 summaryAssets:(id)arg3;
+ (void)deletePhotosHighlights:(id)arg1;

- (void).cxx_destruct;
- (bool)_applyAdaptiveExplicitAssetMutationsToHighlight:(id)arg1 error:(id*)arg2;
- (id)_existentAssetObjectIDs;
- (id)_existentCuratedAssetObjectIDsForCurationType:(unsigned short)arg1;
- (unsigned short)_externalCurationTypeForInternalCurationType:(unsigned short)arg1;
- (void)_initializeCurationHelpersWithHelper:(id)arg1 xpcDict:(id)arg2;
- (unsigned short)_internalCurationTypeForExternalCurationType:(unsigned short)arg1;
- (id)_mutableAssetObjectIDsAndUUIDsForCurationType:(unsigned short)arg1;
- (id)_mutableKeyAssetObjectIDsAndUUIDsForShared:(bool)arg1 userEdited:(bool)arg2;
- (id)adaptiveExplicitlyAddedAssetsHelper;
- (id)adaptiveExplicitlyRemovedAssetsHelper;
- (id)adaptiveKeyAssetHelper;
- (id)adaptiveKeyAssetUserEditedHelper;
- (id)adaptiveKeySharedAssetHelper;
- (id)adaptiveKeySharedAssetUserEditedHelper;
- (unsigned short)adaptiveMergePolicy;
- (unsigned short)adaptiveVisibilityState;
- (void)addExplicitlyRemovedAssets:(id)arg1;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)assetObjectIDsToAddToAdaptiveExplicitlyRemovedAssets;
- (void)clearCurationWithType:(unsigned short)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)curationHelpersByCurationType;
- (id)dateDescription;
- (id)dateDescriptionMixed;
- (id)dateDescriptionShared;
- (id)dayGroupKeyAssetHelper;
- (id)dayGroupKeyAssetSharedHelper;
- (id)dayKeyAssetHelper;
- (id)dayKeyAssetSharedHelper;
- (void)didEnrichHighlight;
- (void)encodeToXPCDict:(id)arg1;
- (unsigned short)enrichmentState;
- (short)enrichmentVersion;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (bool)isFavorite;
- (unsigned short)kind;
- (id)lastEnrichmentDate;
- (id)managedEntityName;
- (unsigned short)mixedSharingCompositionKeyAssetRelationship;
- (id)monthKeyAssetHelper;
- (id)monthKeyAssetSharedHelper;
- (unsigned long long)mood;
- (id)originalHighlight;
- (id)placeholderForCreatedPhotosHighlight;
- (double)promotionScore;
- (void)setAdaptiveExplicitlyAddedAssets:(id)arg1;
- (void)setAdaptiveExplicitlyRemovedAssets:(id)arg1;
- (void)setAdaptiveMergePolicy:(unsigned short)arg1;
- (void)setAdaptiveVisibilityState:(unsigned short)arg1;
- (void)setAssetObjectIDsToAddToAdaptiveExplicitlyRemovedAssets:(id)arg1;
- (void)setAssets:(id)arg1 forCurationType:(unsigned short)arg2;
- (void)setDateDescription:(id)arg1;
- (void)setDateDescriptionMixed:(id)arg1;
- (void)setDateDescriptionShared:(id)arg1;
- (void)setEnrichmentState:(unsigned short)arg1;
- (void)setEnrichmentVersion:(short)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setKeyAssetPrivate:(id)arg1;
- (void)setKeyAssetPrivate:(id)arg1 userEdited:(bool)arg2;
- (void)setKeyAssetShared:(id)arg1;
- (void)setKeyAssetShared:(id)arg1 userEdited:(bool)arg2;
- (void)setKind:(unsigned short)arg1;
- (void)setLastEnrichmentDate:(id)arg1;
- (void)setMixedSharingCompositionKeyAssetRelationship:(unsigned short)arg1;
- (void)setMood:(unsigned long long)arg1;
- (void)setOriginalHighlight:(id)arg1;
- (void)setPromotionScore:(double)arg1;
- (void)setSmartDescription:(id)arg1;
- (void)setSmartDescriptionMixed:(id)arg1;
- (void)setSmartDescriptionShared:(id)arg1;
- (void)setSourceHighlightUUIDForAdaptiveHighlight:(id)arg1;
- (void)setVerboseSmartDescription:(id)arg1;
- (void)setVerboseSmartDescriptionMixed:(id)arg1;
- (void)setVerboseSmartDescriptionShared:(id)arg1;
- (void)setVerboseSmartDescriptionUserEdited:(id)arg1;
- (void)setVisibilityState:(unsigned short)arg1;
- (void)setVisibilityStateMixed:(unsigned short)arg1;
- (void)setVisibilityStateShared:(unsigned short)arg1;
- (id)smartDescription;
- (id)smartDescriptionMixed;
- (id)smartDescriptionShared;
- (id)sourceHighlightUUIDForAdaptiveHighlight;
- (id)verboseSmartDescription;
- (id)verboseSmartDescriptionMixed;
- (id)verboseSmartDescriptionShared;
- (id)verboseSmartDescriptionUserEdited;
- (unsigned short)visibilityState;
- (unsigned short)visibilityStateMixed;
- (unsigned short)visibilityStateShared;
- (id)yearKeyAssetHelper;
- (id)yearKeyAssetSharedHelper;

@end