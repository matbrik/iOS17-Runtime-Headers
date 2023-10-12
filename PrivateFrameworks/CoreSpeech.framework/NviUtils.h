/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface NviUtils : NSObject

+ (bool)_createDirAtPath:(id)arg1;
+ (bool)createDirAtPath:(id)arg1;
+ (id)getValueFromDictionaryOfDictionaries:(id)arg1 keypath:(id)arg2;
+ (long long)getVoiceTriggerEndSampleCountFromVTEI:(id)arg1;
+ (double)getVoiceTriggerEndSecsFromVTEI:(id)arg1;
+ (bool)isNviEnabled;
+ (unsigned long long)nviDataSourceTypeForStr:(id)arg1;
+ (unsigned long long)nviSignalTypeForStr:(id)arg1;
+ (id)readJsonDictionaryAt:(id)arg1;
+ (id)strRepForNviDataSourceType:(unsigned long long)arg1;
+ (id)strRepForNviSignalMask:(unsigned long long)arg1;
+ (id)strRepForNviSignalType:(unsigned long long)arg1;
+ (id)timeStampString;

@end