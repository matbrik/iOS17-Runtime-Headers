/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding> {
    unsigned long long  _assetsDownloaded;
    unsigned long long  _assetsDownloadedFileSize;
    unsigned long long  _assetsUploaded;
    unsigned long long  _assetsUploadedFileSize;
    unsigned long long  _bytesDownloaded;
    unsigned long long  _bytesFulfilledByPeers;
    unsigned long long  _bytesFulfilledLocally;
    unsigned long long  _bytesResumed;
    unsigned long long  _bytesUploaded;
    NSMutableDictionary * _chunkCountByChunkProfile;
    unsigned long long  _connections;
    unsigned long long  _connectionsCreated;
    double  _duration;
    double  _executing;
    NSMutableDictionary * _fileCountByChunkProfile;
    unsigned long long  _perRecordKeysRolled;
    double  _queueing;
    NSMutableArray * _ranges;
    unsigned long long  _recordsDeleted;
    unsigned long long  _recordsDownloaded;
    unsigned long long  _recordsUploaded;
    unsigned long long  _requestCount;
    NSMutableDictionary * _requestOperationCountsByType;
    NSMutableSet * _requestUUIDs;
    unsigned long long  _retries;
    unsigned long long  _shareKeysRolled;
    NSDate * _startDate;
    NSMutableDictionary * _totalBytesByChunkProfile;
    bool  _walrusEnabled;
    NSSet * _zoneIDs;
    unsigned long long  _zoneKeysRolled;
    unsigned long long  _zoneishKeysRolled;
}

@property unsigned long long assetsDownloaded;
@property unsigned long long assetsDownloadedFileSize;
@property unsigned long long assetsUploaded;
@property unsigned long long assetsUploadedFileSize;
@property unsigned long long bytesDownloaded;
@property unsigned long long bytesFulfilledByPeers;
@property unsigned long long bytesFulfilledLocally;
@property unsigned long long bytesResumed;
@property unsigned long long bytesUploaded;
@property (nonatomic, retain) NSMutableDictionary *chunkCountByChunkProfile;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property double executing;
@property (nonatomic, retain) NSMutableDictionary *fileCountByChunkProfile;
@property (readonly) unsigned long long hash;
@property unsigned long long perRecordKeysRolled;
@property double queueing;
@property (nonatomic, retain) NSMutableArray *ranges;
@property (readonly) NSArray *rangesCopy;
@property unsigned long long recordsDeleted;
@property unsigned long long recordsDownloaded;
@property unsigned long long recordsUploaded;
@property unsigned long long requestCount;
@property (nonatomic, retain) NSMutableDictionary *requestOperationCountsByType;
@property (retain) NSMutableSet *requestUUIDs;
@property unsigned long long retries;
@property unsigned long long shareKeysRolled;
@property (retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *totalBytesByChunkProfile;
@property bool walrusEnabled;
@property (retain) NSSet *zoneIDs;
@property unsigned long long zoneKeysRolled;
@property unsigned long long zoneishKeysRolled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initWithStartDate:(id)arg1;
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;
- (void)addRange:(id)arg1;
- (void)addRequestOperationCountsByOperationType:(id)arg1;
- (unsigned long long)assetsDownloaded;
- (unsigned long long)assetsDownloadedFileSize;
- (unsigned long long)assetsUploaded;
- (unsigned long long)assetsUploadedFileSize;
- (unsigned long long)bytesDownloaded;
- (unsigned long long)bytesFulfilledByPeers;
- (unsigned long long)bytesFulfilledLocally;
- (unsigned long long)bytesResumed;
- (unsigned long long)bytesUploaded;
- (id)chunkCountByChunkProfile;
- (unsigned long long)connections;
- (unsigned long long)connectionsCreated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)executing;
- (id)fileCountByChunkProfile;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (unsigned long long)perRecordKeysRolled;
- (double)queueing;
- (id)ranges;
- (id)rangesCopy;
- (unsigned long long)recordsDeleted;
- (unsigned long long)recordsDownloaded;
- (unsigned long long)recordsUploaded;
- (unsigned long long)requestCount;
- (id)requestOperationCountsByType;
- (id)requestUUIDs;
- (unsigned long long)retries;
- (void)setAssetsDownloaded:(unsigned long long)arg1;
- (void)setAssetsDownloadedFileSize:(unsigned long long)arg1;
- (void)setAssetsUploaded:(unsigned long long)arg1;
- (void)setAssetsUploadedFileSize:(unsigned long long)arg1;
- (void)setBytesDownloaded:(unsigned long long)arg1;
- (void)setBytesFulfilledByPeers:(unsigned long long)arg1;
- (void)setBytesFulfilledLocally:(unsigned long long)arg1;
- (void)setBytesResumed:(unsigned long long)arg1;
- (void)setBytesUploaded:(unsigned long long)arg1;
- (void)setChunkCountByChunkProfile:(id)arg1;
- (void)setConnections:(unsigned long long)arg1;
- (void)setConnectionsCreated:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setExecuting:(double)arg1;
- (void)setFileCountByChunkProfile:(id)arg1;
- (void)setPerRecordKeysRolled:(unsigned long long)arg1;
- (void)setQueueing:(double)arg1;
- (void)setRanges:(id)arg1;
- (void)setRecordsDeleted:(unsigned long long)arg1;
- (void)setRecordsDownloaded:(unsigned long long)arg1;
- (void)setRecordsUploaded:(unsigned long long)arg1;
- (void)setRequestCount:(unsigned long long)arg1;
- (void)setRequestOperationCountsByType:(id)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setRetries:(unsigned long long)arg1;
- (void)setShareKeysRolled:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTotalBytesByChunkProfile:(id)arg1;
- (void)setWalrusEnabled:(bool)arg1;
- (void)setZoneIDs:(id)arg1;
- (void)setZoneKeysRolled:(unsigned long long)arg1;
- (void)setZoneishKeysRolled:(unsigned long long)arg1;
- (unsigned long long)shareKeysRolled;
- (id)startDate;
- (id)totalBytesByChunkProfile;
- (bool)walrusEnabled;
- (id)zoneIDs;
- (unsigned long long)zoneKeysRolled;
- (unsigned long long)zoneishKeysRolled;

@end