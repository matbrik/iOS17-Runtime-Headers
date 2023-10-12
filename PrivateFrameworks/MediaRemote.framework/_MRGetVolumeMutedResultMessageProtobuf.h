/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGetVolumeMutedResultMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int isMuted : 1; 
    }  _has;
    bool  _isMuted;
}

@property (nonatomic) bool hasIsMuted;
@property (nonatomic) bool isMuted;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsMuted;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMuted;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsMuted:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)writeTo:(id)arg1;

@end