/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBCollectionStyleGrid : PBCodable <NSSecureCoding, _SFPBCollectionStyleGrid> {
    unsigned long long  _numberOfColumns;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long numberOfColumns;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)numberOfColumns;
- (bool)readFrom:(id)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

// _SFPBCollectionStyleGrid (FacadeInitializer)

- (id)initWithFacade:(id)arg1;

@end