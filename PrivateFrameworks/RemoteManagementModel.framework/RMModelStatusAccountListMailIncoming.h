/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel
 */

@interface RMModelStatusAccountListMailIncoming : RMModelStatusBase {
    NSNumber * _statusAreNotesEnabled;
    NSString * _statusDeclarationIdentifier;
    NSString * _statusHostname;
    NSString * _statusIdentifier;
    NSNumber * _statusIsMailEnabled;
    NSNumber * _statusPort;
    NSNumber * _statusRemoved;
    NSString * _statusUsername;
    NSString * _statusVisibleName;
}

@property (nonatomic, copy) NSNumber *statusAreNotesEnabled;
@property (nonatomic, copy) NSString *statusDeclarationIdentifier;
@property (nonatomic, copy) NSString *statusHostname;
@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) NSNumber *statusIsMailEnabled;
@property (nonatomic, copy) NSNumber *statusPort;
@property (nonatomic, copy) NSNumber *statusRemoved;
@property (nonatomic, copy) NSString *statusUsername;
@property (nonatomic, copy) NSString *statusVisibleName;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 removed:(id)arg2 declarationIdentifier:(id)arg3 visibleName:(id)arg4 hostname:(id)arg5 port:(id)arg6 username:(id)arg7 isMailEnabled:(id)arg8 areNotesEnabled:(id)arg9;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusAreNotesEnabled:(id)arg1;
- (void)setStatusDeclarationIdentifier:(id)arg1;
- (void)setStatusHostname:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusIsMailEnabled:(id)arg1;
- (void)setStatusPort:(id)arg1;
- (void)setStatusRemoved:(id)arg1;
- (void)setStatusUsername:(id)arg1;
- (void)setStatusVisibleName:(id)arg1;
- (id)statusAreNotesEnabled;
- (id)statusDeclarationIdentifier;
- (id)statusHostname;
- (id)statusIdentifier;
- (id)statusIsMailEnabled;
- (id)statusPort;
- (id)statusRemoved;
- (id)statusUsername;
- (id)statusVisibleName;

@end