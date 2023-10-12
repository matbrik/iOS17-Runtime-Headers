/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitScheduleInfo : PBCodable <NSCopying> {
    GEOTransitEntry * _entry;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOTransitEntry *entry;
@property (nonatomic, readonly) bool hasEntry;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entry;
- (bool)hasEntry;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntry:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOTransitScheduleInfo (GEOTransitExtrasInternal)

- (unsigned long long)lineID;
- (id)routingParameters;
- (id)staticDepartureDate;
- (unsigned long long)tripID;
- (id)windowStartDate;

@end