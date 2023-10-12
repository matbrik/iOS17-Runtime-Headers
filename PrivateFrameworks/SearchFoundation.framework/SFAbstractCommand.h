/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFAbstractCommand : NSObject <NSCopying, NSSecureCoding, SFAbstractCommand> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    SFCommandValue * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) SFCommandValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)value;

// SFAbstractCommand (ProtobufInitializer)

- (id)initWithProtobuf:(id)arg1;

@end