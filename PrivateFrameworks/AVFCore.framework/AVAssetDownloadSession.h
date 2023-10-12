/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetDownloadSession : NSObject {
    AVAssetDownloadSessionInternal * _internal;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long availableFileSize;
@property (nonatomic, readonly) unsigned long long countOfBytesReceived;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) AVMediaSelection *resolvedMediaSelection;
@property (nonatomic, readonly) long long status;

+ (id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
+ (id)assetDownloadSessionWithAsset:(id)arg1 mediaSelections:(id)arg2 destinationURL:(id)arg3 options:(id)arg4;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
+ (void)registerDownloadLocation:(id)arg1 forURLAsset:(id)arg2;

- (id)URL;
- (id)_common_init;
- (unsigned long long)availableFileSize;
- (unsigned long long)countOfBytesReceived;
- (void)dealloc;
- (id)destinationURL;
- (unsigned long long)downloadToken;
- (id)error;
- (unsigned long long)fileSize;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaSelections:(id)arg2 destinationURL:(id)arg3 options:(id)arg4;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)loadedTimeRanges;
- (void)pause;
- (long long)priority;
- (id)resolvedMediaSelection;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)start;
- (void)startLoadingMetadata;
- (long long)status;
- (void)stop;

// AVAssetDownloadSession (AVAssetDownloadSession_DelegateSupport)

- (void)_sendDidFinishDownloadForMediaSelectionWithMediaSelection:(id)arg1;
- (void)_sendDidResolveMediaSelectionWithMediaSelection:(id)arg1;
- (void)_sendDownloadFailureToDelegateWithError:(id)arg1;
- (void)_sendDownloadSuccessToDelegate;
- (void)_sendLoadedTimeRangesChangedToDelegateWithNewlyLoadedTimeRange:(id)arg1 currentLoadedTimeRanges:(id)arg2 timeRangeExpectedToLoad:(id)arg3 selectedMediaArray:(id)arg4;
- (void)_sendProgessUpdateWithExpectedBytesToDownload:(unsigned long long)arg1 bytesDownloaded:(unsigned long long)arg2;
- (void)_sendWillDownloadVariants:(id)arg1;

// AVAssetDownloadSession (AVAssetDownloadSession_Local)

- (void)_addFigAssetListeners;
- (void)_addFigPlaybackItemListeners;
- (struct OpaqueFigAsset { }*)_createDuplicateFigAssetFromAVAsset:(id)arg1;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (id)_errorFromAssetNotificationPayload:(id)arg1;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_figAssetNotificationNames;
- (id)_figPlaybackItemNotificationNames;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (int)_primeCache;
- (void)_primeCacheOnDispatchQueue;
- (int)_readyForInspection;
- (void)_removeFigAssetListeners;
- (void)_removeFigPlaybackItemListeners;
- (int)_setFileFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (void)_setupFigClientObjectAsync:(id)arg1;
- (id)_setupFigClientObjectForFileDownload:(id)arg1;
- (id)_setupFigClientObjectForStreaming:(id)arg1;
- (void)_startLoadingMetadataOnQueue;
- (id)_startOnQueue;
- (id)_startOnQueueFirstTime;
- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;
- (id)_verifyDownloadConfigurationForAssetType;
- (id)_weakReference;
- (void)cancelAndReleaseProgressTimerOnQueue;
- (bool)ensureProgressTimerIsRunningOnQueueWithError:(id*)arg1;
- (bool)isDefunct;

// AVAssetDownloadSession (AVAssetDownloadSession_StreamingAssetOrchestratorSupport)

- (void)_downloadFailureCallbackWithError:(id)arg1;
- (void)_downloadSuccessCallback;

@end