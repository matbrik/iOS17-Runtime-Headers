/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface POMMESSchemaPOMMESSiriPegasusMetadata : SISchemaInstrumentationMessage {
    POMMESSchemaPOMMESDeviceState * _deviceState;
    struct { 
        unsigned int interactionType : 1; 
        unsigned int isCarplay : 1; 
        unsigned int movieRestriction : 1; 
        unsigned int tvRestriction : 1; 
        unsigned int isInRestrictedSharingMode : 1; 
        unsigned int isExplicitContentAllowed : 1; 
        unsigned int isWebContentDisabled : 1; 
    }  _has;
    bool  _hasDeviceState;
    int  _interactionType;
    bool  _isCarplay;
    bool  _isExplicitContentAllowed;
    bool  _isInRestrictedSharingMode;
    bool  _isWebContentDisabled;
    unsigned int  _movieRestriction;
    unsigned int  _tvRestriction;
}

@property (nonatomic, retain) POMMESSchemaPOMMESDeviceState *deviceState;
@property (nonatomic) bool hasDeviceState;
@property (nonatomic) bool hasInteractionType;
@property (nonatomic) bool hasIsCarplay;
@property (nonatomic) bool hasIsExplicitContentAllowed;
@property (nonatomic) bool hasIsInRestrictedSharingMode;
@property (nonatomic) bool hasIsWebContentDisabled;
@property (nonatomic) bool hasMovieRestriction;
@property (nonatomic) bool hasTvRestriction;
@property (nonatomic) int interactionType;
@property (nonatomic) bool isCarplay;
@property (nonatomic) bool isExplicitContentAllowed;
@property (nonatomic) bool isInRestrictedSharingMode;
@property (nonatomic) bool isWebContentDisabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int movieRestriction;
@property (nonatomic) unsigned int tvRestriction;

- (void).cxx_destruct;
- (void)deleteDeviceState;
- (void)deleteInteractionType;
- (void)deleteIsCarplay;
- (void)deleteIsExplicitContentAllowed;
- (void)deleteIsInRestrictedSharingMode;
- (void)deleteIsWebContentDisabled;
- (void)deleteMovieRestriction;
- (void)deleteTvRestriction;
- (id)deviceState;
- (id)dictionaryRepresentation;
- (bool)hasDeviceState;
- (bool)hasInteractionType;
- (bool)hasIsCarplay;
- (bool)hasIsExplicitContentAllowed;
- (bool)hasIsInRestrictedSharingMode;
- (bool)hasIsWebContentDisabled;
- (bool)hasMovieRestriction;
- (bool)hasTvRestriction;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)interactionType;
- (bool)isCarplay;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContentAllowed;
- (bool)isInRestrictedSharingMode;
- (bool)isWebContentDisabled;
- (id)jsonData;
- (unsigned int)movieRestriction;
- (bool)readFrom:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setHasDeviceState:(bool)arg1;
- (void)setHasInteractionType:(bool)arg1;
- (void)setHasIsCarplay:(bool)arg1;
- (void)setHasIsExplicitContentAllowed:(bool)arg1;
- (void)setHasIsInRestrictedSharingMode:(bool)arg1;
- (void)setHasIsWebContentDisabled:(bool)arg1;
- (void)setHasMovieRestriction:(bool)arg1;
- (void)setHasTvRestriction:(bool)arg1;
- (void)setInteractionType:(int)arg1;
- (void)setIsCarplay:(bool)arg1;
- (void)setIsExplicitContentAllowed:(bool)arg1;
- (void)setIsInRestrictedSharingMode:(bool)arg1;
- (void)setIsWebContentDisabled:(bool)arg1;
- (void)setMovieRestriction:(unsigned int)arg1;
- (void)setTvRestriction:(unsigned int)arg1;
- (unsigned int)tvRestriction;
- (void)writeTo:(id)arg1;

// POMMESSchemaPOMMESSiriPegasusMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end