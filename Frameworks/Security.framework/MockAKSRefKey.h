/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Security.framework/Security
 */

@interface MockAKSRefKey : PBCodable <NSCopying> {
    NSData * _key;
    NSData * _optionalParams;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasOptionalParams;
@property (nonatomic, retain) NSData *key;
@property (nonatomic, retain) NSData *optionalParams;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasOptionalParams;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (id)optionalParams;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setOptionalParams:(id)arg1;
- (void)writeTo:(id)arg1;

@end