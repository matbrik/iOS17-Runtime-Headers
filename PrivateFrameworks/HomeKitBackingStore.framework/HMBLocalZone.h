/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBLocalZone : HMFObject <HMFLogging> {
    HMBLocalZoneConfiguration * _configuration;
    <HMBLocalZoneDelegate> * _delegate;
    bool  _hasStartedUp;
    HMBLocalDatabase * _localDatabase;
    <HMBMirrorProtocol> * _mirror;
    NSHashTable * _mirrorOutputObservers;
    HMBModelContainer * _modelContainer;
    NSMutableDictionary * _modelObserversByModelID;
    NSHashTable * _observersForAllModels;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertyLock;
    NAFuture * _shutdownFuture;
    HMBLocalSQLContext * _sql;
    <HMBLocalZoneID> * _zoneID;
    unsigned long long  _zoneRow;
}

@property (nonatomic, readonly) HMBLocalZoneConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMBLocalZoneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStartedUp;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMBLocalDatabase *localDatabase;
@property (nonatomic, readonly) <HMBMirrorProtocol> *mirror;
@property (nonatomic, readonly) NSHashTable *mirrorOutputObservers;
@property (nonatomic, readonly) HMBModelContainer *modelContainer;
@property (nonatomic, readonly) NSMutableDictionary *modelObserversByModelID;
@property (nonatomic, readonly) NSHashTable *observersForAllModels;
@property (nonatomic, retain) NAFuture *shutdownFuture;
@property (nonatomic, readonly) HMBLocalSQLContext *sql;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HMBLocalZoneID> *zoneID;
@property (nonatomic) unsigned long long zoneRow;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)addModels:(id)arg1 andRemoveModelIDs:(id)arg2 options:(id)arg3;
- (id)addModels:(id)arg1 options:(id)arg2;
- (void)addObserver:(id)arg1 forModelWithID:(id)arg2;
- (void)addObserverForAllModels:(id)arg1;
- (id)attributeDescriptions;
- (id)configuration;
- (id)createLocalInputWithError:(id*)arg1;
- (id)createModels:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)destroyWithError:(id*)arg1;
- (id)externalDataForExternalID:(id)arg1 error:(id*)arg2;
- (id)externalDataForModelID:(id)arg1 error:(id*)arg2;
- (id)externalIDForModelID:(id)arg1 error:(id*)arg2;
- (id)flush;
- (bool)hasStartedUp;
- (id)initWithLocalDatabase:(id)arg1 zoneID:(id)arg2 zoneRow:(unsigned long long)arg3 configuration:(id)arg4 mirror:(id)arg5;
- (id)localDatabase;
- (id)logIdentifier;
- (id)mirror;
- (id)mirrorOutputObservers;
- (id)modelContainer;
- (id)modelIDForExternalID:(id)arg1 error:(id*)arg2;
- (id)modelObserversByModelID;
- (id)observersForAllModels;
- (id)removeAllModelsOfTypes:(id)arg1 options:(id)arg2;
- (id)removeModelIDs:(id)arg1 options:(id)arg2;
- (id)removeModelsAndDescendantModelsWithIDs:(id)arg1 depth:(unsigned long long)arg2 options:(id)arg3;
- (id)removeModelsWithParentModelID:(id)arg1 options:(id)arg2;
- (void)removeObserver:(id)arg1 forModelWithID:(id)arg2;
- (void)removeObserverForAllModels:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)setExternalData:(id)arg1 forExternalID:(id)arg2;
- (id)setExternalData:(id)arg1 forModelID:(id)arg2;
- (void)setHasStartedUp:(bool)arg1;
- (void)setLocalDatabase:(id)arg1;
- (void)setShutdownFuture:(id)arg1;
- (void)setZoneRow:(unsigned long long)arg1;
- (id)shutdown;
- (id)shutdownFuture;
- (id)sql;
- (void)startUp;
- (id)updateModels:(id)arg1 andRemoveModelIDs:(id)arg2 options:(id)arg3;
- (id)updateModels:(id)arg1 options:(id)arg2;
- (id)zoneID;
- (unsigned long long)zoneRow;

// HMBLocalZone (Block)

- (bool)_insertDeletionItemsForModelsAndDescendantModelsWithBlockRow:(unsigned long long)arg1 context:(id)arg2 type:(unsigned long long)arg3 modelIDs:(id)arg4 currentDepth:(unsigned long long)arg5 maximumDepth:(unsigned long long)arg6 options:(id)arg7 error:(id*)arg8;
- (id)createInputBlockWithType:(unsigned long long)arg1 error:(id*)arg2;
- (id)createOutputBlockWithError:(id*)arg1;
- (id)fetchItemsInBlock:(id)arg1 error:(id*)arg2;
- (id)fetchReadyBlocksWithType:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)insertBlockToRemoveAllModelsWithType:(unsigned long long)arg1 modelTypes:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (unsigned long long)insertBlockToRemoveChildModelsWithType:(unsigned long long)arg1 parentModelID:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (unsigned long long)insertBlockToRemoveModelsAndDescendantModelsWithType:(unsigned long long)arg1 modelIDs:(id)arg2 depth:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5;
- (unsigned long long)insertBlockWithType:(unsigned long long)arg1 options:(id)arg2 items:(id)arg3 error:(id*)arg4;
- (bool)removeBlockWithRow:(unsigned long long)arg1 error:(id*)arg2;

// HMBLocalZone (MigrateUnsupported)

- (void)migrateUnsupportedModels;

// HMBLocalZone (MirrorInput)

- (id)createMirrorInputWithError:(id*)arg1;

// HMBLocalZone (MirrorOutput)

- (void)addMirrorOutputObserver:(id)arg1;
- (id)allMirrorOutputObservers;
- (id)fetchOptionsForOutputBlock:(unsigned long long)arg1 error:(id*)arg2;
- (id)fetchRecordsForOutputBlock:(unsigned long long)arg1 error:(id*)arg2;
- (id)markGroupAsSentWithOutputBlock:(unsigned long long)arg1 tuples:(id)arg2;
- (void)removeMirrorOutputObserver:(id)arg1;
- (bool)removeOutputBlockWithRow:(unsigned long long)arg1 error:(id*)arg2;

// HMBLocalZone (Model)

- (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 recordRowID:(unsigned long long)arg4 error:(id*)arg5;
- (id)remove:(id)arg1;
- (id)update:(id)arg1;
- (id)update:(id)arg1 remove:(id)arg2;

// HMBLocalZone (Process)

+ (id)outputBlockRowForTuple:(id)arg1 activity:(id)arg2;
+ (id)outputModelFromUpdateModel:(id)arg1 mergedModel:(id)arg2;
+ (bool)shouldMirrorInputExternalData:(id)arg1 overwriteExistingExternalData:(id)arg2;

- (id)observersForModelWithID:(id)arg1;
- (void)queueIncompleteProcesses;
- (id)triggerProcessForBlockRow:(unsigned long long)arg1;

// HMBLocalZone (Queryable)

- (id)countModelsUsingQuery:(id)arg1 arguments:(id)arg2 error:(id*)arg3;
- (id)fetchModels;
- (id)queryModelsOfType:(Class)arg1;
- (id)queryModelsOfType:(Class)arg1 filter:(id /* block */)arg2;
- (id)queryModelsOfType:(Class)arg1 predicate:(id)arg2;
- (id)queryModelsOfType:(Class)arg1 properties:(id)arg2 filter:(id /* block */)arg3;
- (id)queryModelsRecursivelyStartingWithModelID:(id)arg1;
- (id)queryModelsUsingQuery:(id)arg1;
- (id)queryModelsUsingQuery:(id)arg1 arguments:(id)arg2;
- (id)queryModelsWithParentModelID:(id)arg1;
- (id)queryModelsWithParentModelID:(id)arg1 ofType:(Class)arg2;
- (void)rebuildIndexesIfNeeded;

// HMBLocalZone (Record)

- (id)fetchAllModelsWithError:(id*)arg1;
- (id)fetchModelWithModelID:(id)arg1 error:(id*)arg2;
- (id)fetchModelWithModelID:(id)arg1 ofType:(Class)arg2 error:(id*)arg3;
- (id)fetchModelsOfType:(Class)arg1 error:(id*)arg2;
- (id)fetchModelsWithParentModelID:(id)arg1 error:(id*)arg2;
- (id)fetchModelsWithParentModelID:(id)arg1 ofType:(Class)arg2 error:(id*)arg3;

// HMBLocalZone (Record_Internal)

- (id)fetchModelWithModelID:(id)arg1 recordRow:(unsigned long long*)arg2 error:(id*)arg3;
- (id)fetchModelWithRecordRow:(unsigned long long)arg1 error:(id*)arg2;
- (id)fetchRecordRowWithExternalID:(id)arg1 returning:(unsigned long long)arg2 error:(id*)arg3;
- (id)fetchRecordRowWithModelID:(id)arg1 returning:(unsigned long long)arg2 error:(id*)arg3;
- (id)fetchRecordRowsWithModelIDs:(id)arg1 error:(id*)arg2;
- (id)queryAllRowRecordsReturning:(unsigned long long)arg1;
- (bool)removeAllRecordsWithError:(id*)arg1;
- (id)setExternalID:(id)arg1 externalData:(id)arg2 forRecordRow:(unsigned long long)arg3;

@end