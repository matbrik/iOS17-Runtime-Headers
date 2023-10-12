/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPushNotificationMessage : NSObject {
    long long  _accountDSID;
    long long  _actionType;
    NSDictionary * _apsPayload;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) long long accountDSID;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly, copy) NSDictionary *apsPayload;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSArray *jaliscoChangedMediaTypes;
@property (nonatomic, readonly) long long jaliscoServerRevision;
@property (nonatomic, readonly) long long moduleIdentifier;
@property (nonatomic, readonly) long long sagaServerRevision;
@property (nonatomic, readonly, copy) NSArray *sagaUpdatedSubscribedPlaylistIDs;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (long long)accountDSID;
- (long long)actionType;
- (id)apsPayload;
- (id)initWithMessageUserInfo:(id)arg1;
- (id)userInfo;

// ICPushNotificationMessage (ic_ITunesStoreAdditions)

- (id)clientIdentifier;
- (long long)moduleIdentifier;

// ICPushNotificationMessage (ic_JaliscoAdditions)

- (id)jaliscoChangedMediaTypes;
- (long long)jaliscoServerRevision;

// ICPushNotificationMessage (ic_SagaAdditions)

- (long long)sagaServerRevision;
- (id)sagaUpdatedSubscribedPlaylistIDs;

@end