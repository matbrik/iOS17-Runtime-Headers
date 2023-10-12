/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackRequest : PBRequest <NSCopying> {
    GEOABSecondPartyPlaceRequestClientMetaData * _abClientMetadata;
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEORPClientCapabilities * _clientCapabilities;
    GEOPDClientMetadata * _clientMetadata;
    GEORPDebugSettings * _debugSettings;
    NSMutableArray * _displayLanguages;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _feedbackClientCapabilities;
    GEORPFeedbackRequestParameters * _feedbackRequestParameters;
    int  _feedbackRequestType;
    struct { 
        unsigned int has_feedbackRequestType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_feedbackClientCapabilities : 1; 
        unsigned int read_abClientMetadata : 1; 
        unsigned int read_analyticMetadata : 1; 
        unsigned int read_clientCapabilities : 1; 
        unsigned int read_clientMetadata : 1; 
        unsigned int read_debugSettings : 1; 
        unsigned int read_displayLanguages : 1; 
        unsigned int read_feedbackRequestParameters : 1; 
        unsigned int read_userInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEORPFeedbackUserInfo * _userInfo;
}

@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) GEORPDebugSettings *debugSettings;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, readonly) int*feedbackClientCapabilities;
@property (nonatomic, readonly) unsigned long long feedbackClientCapabilitiesCount;
@property (nonatomic, retain) GEORPFeedbackRequestParameters *feedbackRequestParameters;
@property (nonatomic) int feedbackRequestType;
@property (nonatomic, readonly) bool hasAbClientMetadata;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasDebugSettings;
@property (nonatomic, readonly) bool hasFeedbackRequestParameters;
@property (nonatomic) bool hasFeedbackRequestType;
@property (nonatomic, readonly) bool hasUserInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEORPFeedbackUserInfo *userInfo;

+ (Class)displayLanguageType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeedbackClientCapabilities:(id)arg1;
- (int)StringAsFeedbackRequestType:(id)arg1;
- (id)abClientMetadata;
- (void)addDisplayLanguage:(id)arg1;
- (void)addFeedbackClientCapabilities:(int)arg1;
- (id)analyticMetadata;
- (void)clearDisplayLanguages;
- (void)clearFeedbackClientCapabilities;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientCapabilities;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugSettings;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (id)displayLanguages;
- (unsigned long long)displayLanguagesCount;
- (int*)feedbackClientCapabilities;
- (id)feedbackClientCapabilitiesAsString:(int)arg1;
- (int)feedbackClientCapabilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackClientCapabilitiesCount;
- (id)feedbackRequestParameters;
- (int)feedbackRequestType;
- (id)feedbackRequestTypeAsString:(int)arg1;
- (bool)hasAbClientMetadata;
- (bool)hasAnalyticMetadata;
- (bool)hasClientCapabilities;
- (bool)hasClientMetadata;
- (bool)hasDebugSettings;
- (bool)hasFeedbackRequestParameters;
- (bool)hasFeedbackRequestType;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasUserInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAbClientMetadata:(id)arg1;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDebugSettings:(id)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setFeedbackClientCapabilities:(int*)arg1 count:(unsigned long long)arg2;
- (void)setFeedbackRequestParameters:(id)arg1;
- (void)setFeedbackRequestType:(int)arg1;
- (void)setHasFeedbackRequestType:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)unknownFields;
- (id)userInfo;
- (void)writeTo:(id)arg1;

// GEORPFeedbackRequest (GEORPProtoExtras)

+ (id)clientTestingDebugSettings;
+ (id)defaultDebugSettingsMergedWithSettings:(id)arg1;

- (void)_initForSubmissionParameters;
- (void)_setupSubmissionParameters;
- (void)_sharedInitWithRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 debugSettings:(id)arg4;
- (id)initWithFeedbackRequestParameters:(id)arg1 traits:(id)arg2;
- (id)initWithFeedbackRequestParameters:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5;
- (id)initWithFeedbackRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3;
- (id)initWithFeedbackRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 debugSettings:(id)arg4;
- (bool)isPOIEnrichment;

@end