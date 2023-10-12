/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPSatelliteReport : PBCodable <NSCopying> {
    CLPSatelliteInfo * _galileo;
    CLPSatelliteInfo * _glonass;
    CLPSatelliteInfo * _gps;
    CLPSatelliteInfo * _qzss;
}

@property (nonatomic, retain) CLPSatelliteInfo *galileo;
@property (nonatomic, retain) CLPSatelliteInfo *glonass;
@property (nonatomic, retain) CLPSatelliteInfo *gps;
@property (nonatomic, readonly) bool hasGalileo;
@property (nonatomic, readonly) bool hasGlonass;
@property (nonatomic, readonly) bool hasGps;
@property (nonatomic, readonly) bool hasQzss;
@property (nonatomic, retain) CLPSatelliteInfo *qzss;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)galileo;
- (id)glonass;
- (id)gps;
- (bool)hasGalileo;
- (bool)hasGlonass;
- (bool)hasGps;
- (bool)hasQzss;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)qzss;
- (bool)readFrom:(id)arg1;
- (void)setGalileo:(id)arg1;
- (void)setGlonass:(id)arg1;
- (void)setGps:(id)arg1;
- (void)setQzss:(id)arg1;
- (void)writeTo:(id)arg1;

@end