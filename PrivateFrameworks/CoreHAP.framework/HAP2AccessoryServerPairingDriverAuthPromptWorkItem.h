/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem : HAP2AccessoryServerPairingDriverWorkItem {
    NSError * _cancelError;
    unsigned long long  _permissionType;
}

@property (nonatomic, retain) NSError *cancelError;
@property (nonatomic, readonly) unsigned long long permissionType;

+ (id)promptForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)cancelError;
- (void)cancelWithError:(id)arg1;
- (id)description;
- (id)initWithPermissionType:(unsigned long long)arg1;
- (unsigned long long)permissionType;
- (void)runForPairingDriver:(id)arg1;
- (void)setCancelError:(id)arg1;

@end