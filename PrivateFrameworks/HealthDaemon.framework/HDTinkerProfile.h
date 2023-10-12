/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTinkerProfile : HDProfile {
    HDAttachmentManager * _attachmentManager;
}

- (void).cxx_destruct;
- (id)attachmentManager;
- (void)awakeFromDisk;
- (id)dsidWithError:(id*)arg1;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 profileIdentifier:(id)arg4;
- (id)pairedNRDeviceUUIDWithError:(id*)arg1;
- (bool)setDSID:(id)arg1 error:(id*)arg2;
- (bool)setPairedNRDeviceUUID:(id)arg1 error:(id*)arg2;

@end