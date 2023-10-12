/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUStoragePoolStats : NSObject <NSCopying> {
    long long  _discardedCount;
    long long  _migrationBytes;
    long long  _migrationCount;
    long long  _nonPurgeableBytes;
    long long  _nonPurgeableCount;
    long long  _peakNonPurgeableBytes;
    long long  _peakTotalBytes;
    long long  _peakUsedBytes;
    long long  _peakVolatileBytes;
    long long  _purgedBytes;
    long long  _purgedCount;
    long long  _requestCount;
    long long  _reusedNonPurgeableCount;
    long long  _reusedVolatileCount;
    long long  _usedBytes;
    long long  _usedCount;
    long long  _volatileBytes;
    long long  _volatileCount;
}

@property (nonatomic) long long discardedCount;
@property (nonatomic) long long migrationBytes;
@property (nonatomic) long long migrationCount;
@property (nonatomic) long long nonPurgeableBytes;
@property (nonatomic) long long nonPurgeableCount;
@property (nonatomic, readonly) long long peakNonPurgeableBytes;
@property (nonatomic, readonly) long long peakTotalBytes;
@property (nonatomic, readonly) long long peakUsedBytes;
@property (nonatomic, readonly) long long peakVolatileBytes;
@property (nonatomic) long long purgedBytes;
@property (nonatomic) long long purgedCount;
@property (nonatomic) long long requestCount;
@property (nonatomic, readonly) long long reusedCount;
@property (nonatomic) long long reusedNonPurgeableCount;
@property (nonatomic, readonly) float reusedRate;
@property (nonatomic) long long reusedVolatileCount;
@property (nonatomic, readonly) long long totalBytes;
@property (nonatomic, readonly) long long totalCount;
@property (nonatomic) long long usedBytes;
@property (nonatomic) long long usedCount;
@property (nonatomic) long long volatileBytes;
@property (nonatomic) long long volatileCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)discardedCount;
- (long long)migrationBytes;
- (long long)migrationCount;
- (long long)nonPurgeableBytes;
- (long long)nonPurgeableCount;
- (long long)peakNonPurgeableBytes;
- (long long)peakTotalBytes;
- (long long)peakUsedBytes;
- (long long)peakVolatileBytes;
- (long long)purgedBytes;
- (long long)purgedCount;
- (long long)requestCount;
- (long long)reusedCount;
- (long long)reusedNonPurgeableCount;
- (float)reusedRate;
- (long long)reusedVolatileCount;
- (void)setDiscardedCount:(long long)arg1;
- (void)setMigrationBytes:(long long)arg1;
- (void)setMigrationCount:(long long)arg1;
- (void)setNonPurgeableBytes:(long long)arg1;
- (void)setNonPurgeableCount:(long long)arg1;
- (void)setPurgedBytes:(long long)arg1;
- (void)setPurgedCount:(long long)arg1;
- (void)setRequestCount:(long long)arg1;
- (void)setReusedNonPurgeableCount:(long long)arg1;
- (void)setReusedVolatileCount:(long long)arg1;
- (void)setUsedBytes:(long long)arg1;
- (void)setUsedCount:(long long)arg1;
- (void)setVolatileBytes:(long long)arg1;
- (void)setVolatileCount:(long long)arg1;
- (long long)totalBytes;
- (long long)totalCount;
- (long long)usedBytes;
- (long long)usedCount;
- (long long)volatileBytes;
- (long long)volatileCount;

@end