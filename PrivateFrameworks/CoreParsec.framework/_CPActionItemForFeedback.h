/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPActionItemForFeedback : PBCodable <NSSecureCoding, _CPActionItemForFeedback> {
    _CPPunchoutForFeedback * _punchout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _CPPunchoutForFeedback *punchout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)punchout;
- (bool)readFrom:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)writeTo:(id)arg1;

// _CPActionItemForFeedback (SFInitializer)

- (id)initWithFacade:(id)arg1;

@end