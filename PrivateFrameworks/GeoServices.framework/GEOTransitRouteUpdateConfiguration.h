/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitRouteUpdateConfiguration : PBCodable <NSCopying> {
    struct { 
        unsigned int has_ttlSeconds : 1; 
    }  _flags;
    unsigned long long  _ttlSeconds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasTtlSeconds;
@property (nonatomic) unsigned long long ttlSeconds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTtlSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTtlSeconds:(bool)arg1;
- (void)setTtlSeconds:(unsigned long long)arg1;
- (unsigned long long)ttlSeconds;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end