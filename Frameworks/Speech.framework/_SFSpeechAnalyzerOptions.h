/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Speech.framework/Speech
 */

@interface _SFSpeechAnalyzerOptions : NSObject <NSCopying> {
    bool  _highPriority;
    _SFSpeechAnalyzerOptionsLoggingInfo * _loggingInfo;
    _SFSpeechAnalyzerOptionsPowerContext * _powerContext;
}

@property (nonatomic, readonly) bool highPriority;
@property (nonatomic, readonly, copy) _SFSpeechAnalyzerOptionsLoggingInfo *loggingInfo;
@property (nonatomic, readonly, copy) _SFSpeechAnalyzerOptionsPowerContext *powerContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)highPriority;
- (id)initWithHighPriority:(bool)arg1 loggingInfo:(id)arg2 powerContext:(id)arg3;
- (id)loggingInfo;
- (id)powerContext;

@end