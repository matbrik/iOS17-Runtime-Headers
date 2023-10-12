/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATInitializingServiceConnectionIDSMessage : NSObject <CATIDSMessage> {
    <CATInitializingIDSServiceConnectionMessageContent> * _content;
    NSUUID * _invitationIdentifier;
}

@property (nonatomic, readonly) <CATInitializingIDSServiceConnectionMessageContent> *content;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSUUID *invitationIdentifier;
@property (nonatomic, readonly) long long messageType;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)content;
- (id)dictionaryValue;
- (id)initWithInvitationIdentifier:(id)arg1 content:(id)arg2;
- (id)invitationIdentifier;
- (long long)messageType;

@end