/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMClientMessageContext : NSObject <MCMClientMessageContext> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSObject<OS_xpc_object> * _message;
    NSString * _personaUniqueString;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExtension, nonatomic, readonly) bool extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *message;
@property (nonatomic, readonly) NSString *personaUniqueString;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) MCMPOSIXUser *posixUser;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initForCurrentThreadContextWithXPCMessage:(id)arg1 userIdentityCache:(id)arg2;
- (bool)isExtension;
- (id)message;
- (id)personaUniqueString;
- (int)pid;
- (id)posixUser;
- (id)userIdentityCache;

@end