/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriTTSService.framework/SiriTTSService
 */

@interface SiriTTSAudioRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol> {
    void audibleContext;
    void audio;
}

@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, readonly) SiriTTSAudioData *audio;
@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audibleContext;
- (id)audio;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAudio:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAudibleContext:(id)arg1;

// SiriTTSAudioRequest (SwiftProxy)

- (unsigned int)audioSessionId;
- (id /* block */)didStartSpeaking;
- (bool)immediate;
- (float)playbackVolume;
- (void)setAudioSessionId:(unsigned int)arg1;
- (void)setDidStartSpeaking:(id /* block */)arg1;
- (void)setImmediate:(bool)arg1;
- (void)setPlaybackVolume:(float)arg1;
- (void)setSiriRequestId:(id)arg1;
- (id)siriRequestId;

@end