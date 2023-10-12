/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStreamConfig : VCMediaStreamConfig {
    unsigned int  _audioIOSampleRate;
    long long  _captureSourceID;
    unsigned long long  _customHeight;
    unsigned long long  _customWidth;
    unsigned long long  _cvoExtensionID;
    bool  _enableCVO;
    int  _encoderUsage;
    int  _encodingMode;
    bool  _fecEnabled;
    bool  _forceZeroRegionOfInterestOrigin;
    unsigned long long  _framerate;
    int  _hdrMode;
    bool  _isVariableSliceModeEnabled;
    bool  _isVideoProtected;
    unsigned long long  _keyFrameInterval;
    bool  _ltrpEnabled;
    unsigned long long  _maxEncoderPixels;
    double  _minPlaybackInterval;
    unsigned int  _parameterSets;
    unsigned int  _pixelFormat;
    NSString * _profileLevel;
    NSString * _remoteDeviceName;
    int  _remoteVideoInitialOrientation;
    bool  _resetSendRTPTimestampOnStop;
    bool  _rtcpPSFB_FIREnabled;
    bool  _rtxEnabled;
    NSMutableDictionary * _rxCodecFeatureListStrings;
    unsigned long long  _rxMaxBitrate;
    unsigned long long  _rxMinBitrate;
    unsigned int  _screenDisplayID;
    bool  _shouldEnableMLEnhance;
    unsigned long long  _sourceFramerate;
    <VCMediaStreamSyncSource> * _syncSource;
    bool  _temporalScalingEnabled;
    unsigned long long  _tilesPerFrame;
    int  _transportProtocolType;
    NSMutableDictionary * _txCodecFeatureListStrings;
    unsigned long long  _txInitialBitrate;
    unsigned long long  _txMaxBitrate;
    unsigned long long  _txMinBitrate;
    long long  _type;
    bool  _useInBandFEC;
    bool  _useVideoJitterForVideoPlayout;
    _Atomic unsigned char * _videoPriorityPointer;
    long long  _videoResolution;
}

@property (nonatomic) unsigned int audioIOSampleRate;
@property (nonatomic) long long captureSourceID;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) bool enableCVO;
@property (nonatomic) int encoderUsage;
@property (nonatomic) int encodingMode;
@property (nonatomic) bool fecEnabled;
@property (nonatomic) bool forceZeroRegionOfInterestOrigin;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) int hdrMode;
@property (nonatomic) bool isVariableSliceModeEnabled;
@property (nonatomic) bool isVideoProtected;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) bool ltrpEnabled;
@property (nonatomic) unsigned long long maxEncoderPixels;
@property (nonatomic) double minPlaybackInterval;
@property (nonatomic) unsigned int parameterSets;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic, retain) NSString *profileLevel;
@property (nonatomic, retain) NSString *remoteDeviceName;
@property (nonatomic) int remoteVideoInitialOrientation;
@property (nonatomic) bool resetSendRTPTimestampOnStop;
@property (nonatomic) bool rtcpPSFB_FIREnabled;
@property (nonatomic) bool rtxEnabled;
@property (nonatomic, readonly) NSDictionary *rxCodecFeatureListStrings;
@property (nonatomic) unsigned long long rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate;
@property (nonatomic) unsigned int screenDisplayID;
@property (nonatomic) bool shouldEnableMLEnhance;
@property (nonatomic) unsigned long long sourceFramerate;
@property (nonatomic) <VCMediaStreamSyncSource> *syncSource;
@property (nonatomic) bool temporalScalingEnabled;
@property (nonatomic) unsigned long long tilesPerFrame;
@property (nonatomic) int transportProtocolType;
@property (nonatomic, readonly) NSDictionary *txCodecFeatureListStrings;
@property (nonatomic) unsigned long long txInitialBitrate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) long long type;
@property (nonatomic) bool useInBandFEC;
@property (nonatomic) bool useVideoJitterForVideoPlayout;
@property (nonatomic) _Atomic unsigned char*videoPriorityPointer;
@property (nonatomic) long long videoResolution;

+ (unsigned int)profileLevelIdForString:(id)arg1;
+ (id)profileLevelStringForId:(unsigned int)arg1;
+ (bool)validateClientDictionary:(id)arg1;

- (void)addRxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;
- (void)addTxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;
- (bool)applyVideoStreamClientDictionary:(id)arg1;
- (unsigned int)audioIOSampleRate;
- (long long)captureSourceID;
- (unsigned long long)customHeight;
- (unsigned long long)customWidth;
- (unsigned long long)cvoExtensionID;
- (void)dealloc;
- (bool)enableCVO;
- (int)encoderUsage;
- (int)encodingMode;
- (bool)fecEnabled;
- (bool)forceZeroRegionOfInterestOrigin;
- (unsigned long long)framerate;
- (int)hdrMode;
- (id)init;
- (id)initWithClientDictionary:(id)arg1;
- (void)initializeParameterSets;
- (bool)isVariableSliceModeEnabled;
- (bool)isVideoProtected;
- (unsigned long long)keyFrameInterval;
- (bool)ltrpEnabled;
- (unsigned long long)maxEncoderPixels;
- (double)minPlaybackInterval;
- (unsigned int)parameterSets;
- (unsigned int)pixelFormat;
- (id)profileLevel;
- (id)remoteDeviceName;
- (int)remoteVideoInitialOrientation;
- (bool)resetSendRTPTimestampOnStop;
- (bool)rtcpPSFB_FIREnabled;
- (bool)rtxEnabled;
- (id)rxCodecFeatureListStrings;
- (unsigned long long)rxMaxBitrate;
- (unsigned long long)rxMinBitrate;
- (unsigned int)screenDisplayID;
- (void)setAudioIOSampleRate:(unsigned int)arg1;
- (void)setCaptureSourceID:(long long)arg1;
- (void)setCustomHeight:(unsigned long long)arg1;
- (void)setCustomWidth:(unsigned long long)arg1;
- (void)setCvoExtensionID:(unsigned long long)arg1;
- (void)setEnableCVO:(bool)arg1;
- (void)setEncoderUsage:(int)arg1;
- (void)setEncodingMode:(int)arg1;
- (void)setFecEnabled:(bool)arg1;
- (void)setForceZeroRegionOfInterestOrigin:(bool)arg1;
- (void)setFramerate:(unsigned long long)arg1;
- (void)setHdrMode:(int)arg1;
- (void)setIsVariableSliceModeEnabled:(bool)arg1;
- (void)setIsVideoProtected:(bool)arg1;
- (void)setKeyFrameInterval:(unsigned long long)arg1;
- (void)setLtrpEnabled:(bool)arg1;
- (void)setMaxEncoderPixels:(unsigned long long)arg1;
- (void)setMinPlaybackInterval:(double)arg1;
- (void)setParameterSets:(unsigned int)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setProfileLevel:(id)arg1;
- (void)setRemoteDeviceName:(id)arg1;
- (void)setRemoteVideoInitialOrientation:(int)arg1;
- (void)setResetSendRTPTimestampOnStop:(bool)arg1;
- (void)setRtcpPSFB_FIREnabled:(bool)arg1;
- (void)setRtxEnabled:(bool)arg1;
- (void)setRxMaxBitrate:(unsigned long long)arg1;
- (void)setRxMinBitrate:(unsigned long long)arg1;
- (void)setScreenDisplayID:(unsigned int)arg1;
- (void)setShouldEnableMLEnhance:(bool)arg1;
- (void)setSourceFramerate:(unsigned long long)arg1;
- (void)setSyncSource:(id)arg1;
- (void)setTemporalScalingEnabled:(bool)arg1;
- (void)setTilesPerFrame:(unsigned long long)arg1;
- (void)setTransportProtocolType:(int)arg1;
- (void)setTxInitialBitrate:(unsigned long long)arg1;
- (void)setTxMaxBitrate:(unsigned long long)arg1;
- (void)setTxMinBitrate:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUseInBandFEC:(bool)arg1;
- (void)setUseVideoJitterForVideoPlayout:(bool)arg1;
- (void)setVideoPriorityPointer:(void *)arg1; // needs 1 arg types, found 2: _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**, unsigned char
- (void)setVideoResolution:(long long)arg1;
- (bool)shouldEnableMLEnhance;
- (unsigned long long)sourceFramerate;
- (id)syncSource;
- (bool)temporalScalingEnabled;
- (unsigned long long)tilesPerFrame;
- (int)transportProtocolType;
- (id)txCodecFeatureListStrings;
- (unsigned long long)txInitialBitrate;
- (unsigned long long)txMaxBitrate;
- (unsigned long long)txMinBitrate;
- (long long)type;
- (bool)updateWithClientDictionary:(id)arg1;
- (bool)useInBandFEC;
- (bool)useVideoJitterForVideoPlayout;
- (_Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**)videoPriorityPointer:(SEL)arg1;
- (long long)videoResolution;

@end