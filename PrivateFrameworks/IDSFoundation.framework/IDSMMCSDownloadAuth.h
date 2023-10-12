/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMMCSDownloadAuth : NSObject <NSCopying> {
    NSDictionary * _dictionaryRepresentation;
}

@property (nonatomic, readonly) NSString *authURL;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *ownerID;
@property (nonatomic, readonly) NSData *signature;

- (void).cxx_destruct;
- (id)authURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSignature:(id)arg1 authURL:(id)arg2 ownerID:(id)arg3;
- (id)ownerID;
- (id)signature;

@end