/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface RFSchemaRFGClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasRfId;
    SISchemaUUID * _rfId;
}

@property (nonatomic) bool hasRfId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *rfId;

- (void).cxx_destruct;
- (void)deleteRfId;
- (id)dictionaryRepresentation;
- (bool)hasRfId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)rfId;
- (void)setHasRfId:(bool)arg1;
- (void)setRfId:(id)arg1;
- (void)writeTo:(id)arg1;

// RFSchemaRFGClientEventMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end