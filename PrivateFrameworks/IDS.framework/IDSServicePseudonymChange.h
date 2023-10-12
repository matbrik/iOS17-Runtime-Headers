/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSServicePseudonymChange : NSObject {
    unsigned long long  _changeType;
    IDSPseudonym * _pseudonym;
    long long  _updateFlags;
}

@property (nonatomic, readonly) unsigned long long changeType;
@property (nonatomic, readonly) IDSPseudonym *pseudonym;
@property (nonatomic, readonly) long long updateFlags;

- (void).cxx_destruct;
- (unsigned long long)changeType;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPseudonym:(id)arg1 changeType:(unsigned long long)arg2 updateFlags:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPseudonymChange:(id)arg1;
- (id)pseudonym;
- (long long)updateFlags;

@end