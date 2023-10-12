/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DeviceManagementTools.framework/DeviceManagementTools
 */

@interface DMTSharingDevice : CATSharingDevice {
    SFDevice * _sharingDevice;
}

@property (nonatomic, readonly) SFDevice *sharingDevice;

+ (bool)deviceIsPairedAccordingToFlags:(unsigned int)arg1;
+ (unsigned long long)devicePairingStateFromSFPairState:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (id)sharingDevice;
- (id)underlyingDevice;

@end