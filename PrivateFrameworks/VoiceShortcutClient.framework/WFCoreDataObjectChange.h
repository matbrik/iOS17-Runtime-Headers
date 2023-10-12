/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFCoreDataObjectChange : NSObject {
    NSString * _URIRepresentation;
    NSString * _identifier;
    unsigned long long  _objectType;
}

@property (nonatomic, readonly) NSString *URIRepresentation;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long objectType;

- (void).cxx_destruct;
- (id)URIRepresentation;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithObjectID:(id)arg1 objectType:(unsigned long long)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)objectType;

@end