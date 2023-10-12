/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PETSchemaPET1Key : SISchemaInstrumentationMessage {
    bool  _hasKey;
    NSString * _key;
}

@property (nonatomic) bool hasKey;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *key;

- (void).cxx_destruct;
- (void)deleteKey;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)key;
- (bool)readFrom:(id)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

// PETSchemaPET1Key (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end