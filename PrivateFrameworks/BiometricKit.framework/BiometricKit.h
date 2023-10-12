/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKit : NSObject {
    bool  _cancelOperation;
    <BiometricKitDelegate> * _delegate;
    int  _enrollProgressConfigRenderMode;
    BiometricKitIdentity * _enrolledIdentity;
    bool  _fingerDetectMode;
    bool  _fingerOffRequest;
    NSTimer * _fingerOffTimer;
    bool  _fingerOn;
    bool  _fingerOnStatusState;
    bool  _inUse;
    BiometricKitIdentity * _matchingIdentity;
    bool  _matchingMode;
    NSCondition * _operationCondition;
    NSObject<OS_dispatch_queue> * _operationQueue;
}

@property (nonatomic) <BiometricKitDelegate> *delegate;
@property (nonatomic) int enrollProgressConfigRenderMode;
@property bool inUse;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (long long)getSensorPatchVersion;
+ (id)manager;

- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delegateStatusMessage:(unsigned int)arg1;
- (int)detectFingerWithOptions:(id)arg1;
- (int)detectPresenceWithOptions:(id)arg1;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(bool*)arg3 withDetails:(id*)arg4;
- (int)dropUnlockToken;
- (int)enableBackgroundFdet:(bool)arg1;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)enroll:(int)arg1 withAuthToken:(id)arg2;
- (int)enroll:(int)arg1 withOptions:(id)arg2;
- (int)enrollProgressConfigRenderMode;
- (bool)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (void)fingerOffTimerFired:(id)arg1;
- (int)forceBioLockout;
- (int)forceBioLockoutForUser:(unsigned int)arg1;
- (long long)getBioLockoutState;
- (long long)getBioLockoutStateForUser:(unsigned int)arg1;
- (long long)getCalBlobVersion;
- (id)getCalibrationDataInfo;
- (long long)getCalibrationDataState;
- (int)getCountersignedStoreToken:(id*)arg1;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2;
- (id)getIdentitiesDatabaseHash;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1;
- (id)getIdentitiesDatabaseUUID;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1;
- (id)getIdentityFromUUID:(id)arg1;
- (id)getLogs:(bool)arg1 withDetails:(id*)arg2;
- (id)getMatchPolicyInfo;
- (long long)getMaxIdentityCount:(int)arg1;
- (float)getModulationRatio;
- (id)getProtectedConfiguration;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1;
- (long long)getProvisioningState;
- (long long)getSensorCalibrationStatus;
- (id)getSensorInfo;
- (id)getSystemProtectedConfiguration;
- (id)getTemplateInfo:(id)arg1;
- (id)identities:(id)arg1;
- (bool)inUse;
- (id)init;
- (bool)isFingerOn;
- (bool)isIdentityEnrolled;
- (bool)isTouchIDAvailableWithInfo:(long long*)arg1;
- (bool)isTouchIDCapable;
- (void)logEventOrCode:(unsigned long long)arg1;
- (int)match:(id)arg1;
- (int)match:(id)arg1 withOptions:(id)arg2;
- (int)matchIdentities:(id)arg1;
- (id)pullCalibrationData;
- (id)pullCaptureBuffer;
- (id)pullDebugImage:(bool)arg1 rotated:(bool)arg2;
- (int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (int)registerStoreToken:(id)arg1;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (void)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2 withReply:(id /* block */)arg3;
- (int)removeIdentity:(id)arg1;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2;
- (void)removeIdentity:(id)arg1 withOptions:(id)arg2 withReply:(id /* block */)arg3;
- (int)resetAppleConnectCounter;
- (void)setDebugImages:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnrollProgressConfigRenderMode:(int)arg1;
- (void)setInUse:(bool)arg1;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (void)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withReply:(id /* block */)arg4;
- (int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2;
- (int)setProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (void)setProtectedConfiguration:(id)arg1 withOptions:(id)arg2 withReply:(id /* block */)arg3;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (void)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 withReply:(id /* block */)arg3;
- (int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (void)simulateFingerTouchMatching:(bool)arg1;
- (void)timestampEvent:(unsigned long long)arg1;
- (int)updateIdentity:(id)arg1;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2;
- (void)updateIdentity:(id)arg1 withOptions:(id)arg2 withReply:(id /* block */)arg3;

@end