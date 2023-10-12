/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSObject<OS_dispatch_queue> * _managementQueue;
    int  _nextRequestID;
    NSMutableDictionary * _progressBlocks;
}

+ (id)analysisService;
+ (id)errorWithDescription:(id)arg1;
+ (int)queryCachedFaceAnalysisProgress:(id*)arg1 forPhotoLibrary:(id)arg2;
+ (int)queryCachedFaceAnalysisProgress:(id*)arg1 forPhotoLibrary:(id)arg2 withExtendTimeoutBlock:(id /* block */)arg3;
+ (int)queryProgress:(float*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (int)queryProgress:(float*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(id /* block */)arg4;
+ (int)queryProgressDetail:(id*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (int)queryProgressDetail:(id*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(id /* block */)arg4;
+ (int)queryProgressDetail:(id*)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (int)queryProgressDetail:(id*)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(id /* block */)arg4;
+ (id)sharedAnalysisService;

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)cancelBackgroundActivity;
- (void)cancelRequest:(int)arg1;
- (id)connection;
- (id)init;
- (void)invalidate;
- (void)notifyLibraryAvailableAtURL:(id)arg1;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;
- (int)requestAnalysisTypes:(unsigned long long)arg1 forAssetWithResourceURLs:(id)arg2 withOptions:(id)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)requestAnalysisTypes:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)requestBackgroundAnalysisForAssets:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 realTime:(bool)arg3 progessHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(bool)arg2 progessHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestBackgroundProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 progessHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestFaceProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestFaceProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestFullProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestLivePhotoEffectsForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestMultiWorkerProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requestProcessingWithTaskID:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)requestProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 withOptions:(id)arg3 progessHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (int)requestRecentsProcessing:(unsigned long long)arg1 photoLibrary:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestSceneProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestSceneprintProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestVIPModelFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (int)requestVideoCaptionForFrames:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestVideoStabilizationForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;

// VCPMediaAnalysisService (Accessibility)

- (int)downloadVideoEncoderWithCompletionHandler:(id /* block */)arg1;

// VCPMediaAnalysisService (FaceSuggestions)

- (int)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progessHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 photoLibraryURL:(id)arg4 progessHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (int)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(bool)arg2 photoLibraryURL:(id)arg3 progessHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

// VCPMediaAnalysisService (Hubble)

- (int)requestIdentificationOfFaces:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (int)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

// VCPMediaAnalysisService (InternalTools)

- (int)queryAutoCounterOptInStatusForPhotoLibraryURL:(id)arg1 withPersonLocalIdentifiers:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)requestAutoCounterAccuracyCalculationForPhotoLibraryURL:(id)arg1 clusterStateURL:(id)arg2 groundTruthURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (int)requestAutoCounterAccuracyCalculationForPhotoLibraryURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requestAutoCounterSIMLValidationForPhotoLibraryURL:(id)arg1 simlGroundTruthURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (int)requestDumpAutoCounterForPhotoLibraryURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)requestOptInAutoCounterForPhotoLibraryURL:(id)arg1 withPersons:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)requestRebuildPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestReclusterFacesWithPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (int)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

// VCPMediaAnalysisService (Moments)

+ (id)defaultDeferredProcessingTypes;

- (id)assetsPendingDeferredProcessingWithPhotoLibraryURL:(id)arg1 error:(id*)arg2;
- (bool)requestDeferredProcessingTypes:(id)arg1 assets:(id)arg2 error:(id*)arg3;
- (int)requestForceDeferredProcessingWithProgessHandler:(id /* block */)arg1 andCompletionHandler:(id /* block */)arg2;

// VCPMediaAnalysisService (PersonBuilderAndPromoter)

- (int)requestPersonProcessingForPhotoLibraryURL:(id)arg1 options:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestPersonPromoterStatusWithAdvancedFlag:(bool)arg1 photoLibraryURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (int)requestResetPersons:(id)arg1 forPhotoLibraryURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)requestResetPetClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (int)requestSuggestedMePersonIdentifierWithContext:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

// VCPMediaAnalysisService (Stickers)

- (int)requestStaticStickerScoringForLibrary:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;

@end