/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIPersistentUserSettings : NSObject {
    TRIKVStore * _keyValueStore;
}

@property (nonatomic, retain) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)arg1;

- (void).cxx_destruct;
- (id)initWithKeyValueStore:(id)arg1;
- (id)keyValueStore;
- (void)persistDiagnosticsUsageEnabled:(unsigned char)arg1;
- (void)persistIsSiriEnabled:(unsigned char)arg1;
- (void)persistOptOutStatus:(unsigned char)arg1;
- (void)persistSiriLocale:(id)arg1;
- (unsigned char)persistedDiagnosticsUsageEnabled;
- (unsigned char)persistedIsSiriEnabled;
- (unsigned char)persistedOptOutStatus;
- (id)persistedSiriLocale;
- (void)setKeyValueStore:(id)arg1;

@end