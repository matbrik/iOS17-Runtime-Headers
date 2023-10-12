/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCConnectionManagerIDS : VCConnectionManager {
    bool  _enableCoreMotionDetection;
    bool  _isMultiwaySession;
    double  _lastTimestampForRemoteSendingFromNonPrimary;
    double  _lastTimestampPreferredRemoteInterfaceUpdated;
    VCSessionBitrateArbiter * _multiwayBitrateArbiter;
    VCBitrateArbiter * _oneToOneBitrateArbiter;
    bool  _optIntoExistingSubscribedStreams;
    unsigned int  _receivedByteCount;
    unsigned int  _receivedPacketCount;
    unsigned int  _sentByteCount;
    unsigned int  _sentPacketCount;
}

- (int)addConnection:(id)arg1;
- (bool)addConnectionToConnectionArray:(id)arg1;
- (void)addDuplicationConnectionUpdateTelemetryWithSuggestedLinkTypeCombo:(id)arg1 payload:(id)arg2;
- (bool)canOptOutAllStreamsForConnection:(id)arg1;
- (id)connectionForDuplication;
- (void)dealloc;
- (void)didLinkProbingLockdownEnd;
- (void)didReceiveStatsResponse:(bool)arg1;
- (void)didUpdateLinkPreferenceOrder:(id)arg1;
- (unsigned int)downlinkBitrateCapForConnection:(id)arg1;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(bool)arg2;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; }*)getConnectionSelectionPolicy;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(bool)arg2;
- (id)getPrimaryConnectionToBeCompared;
- (id)getSecondaryConnectionToBeCompared;
- (void)handlePrimaryConnectionRemoved;
- (void)handleSecondaryConnectionRemoved;
- (id)initWithMultiwayEnabled:(bool)arg1;
- (void)internalUpdateOneToOneBitrateCapsForConnection:(id)arg1;
- (id)lastPrimaryConnectionInUse;
- (unsigned int)oneToOneBitrateCapForConnectionWithType:(unsigned int)arg1;
- (bool)optIntoExistingSubscribedStreams;
- (void)optOutAllStreamsForNonPrimaryConnections;
- (void)queryProbingResultsWithOptions:(id)arg1;
- (int)removeConnection:(id)arg1;
- (void)removeFromConnectionArray:(id)arg1;
- (void)reportActiveConnectionOneToOne:(id)arg1 isAudioOnly:(bool)arg2;
- (void)reportConnection:(id)arg1 isInitialConnection:(bool)arg2;
- (void)reportCurrentPrimaryConnection;
- (void)reportFirstActiveConnectionOneToOne:(id)arg1 remoteOSVersion:(id)arg2 redState:(bool)arg3 isAudioOnly:(bool)arg4;
- (void)requestStatsWithOptions:(id)arg1;
- (void)reselectPrimaryConnection;
- (void)resetPacketCountAndByteCountWithConnection:(id)arg1;
- (void)resetParticipantGenerationCounter;
- (id)secondaryConnection;
- (void)setConnectionForDuplication:(id)arg1;
- (void)setLastPrimaryConnectionInUse:(id)arg1;
- (void)setOptIntoExistingSubscribedStreams:(bool)arg1;
- (void)setPreferredLocalInterfaceForDuplication:(unsigned char)arg1;
- (void)setPreferredRemoteInterfaceForDuplication:(unsigned char)arg1;
- (void)setSecondaryConnection:(id)arg1;
- (void)setUpVTable;
- (bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; int x_2_2_2; struct tagIPPORT { int x_3_3_1; BOOL x_3_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_3_3_3; unsigned short x_3_3_4; } x_2_2_3; int x_2_2_4; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned char x_2_3_3; unsigned short x_2_3_4; unsigned char x_2_3_5; } x_3_2_2; bool x_3_2_3; } x_2_1_3; struct { id x_4_2_1; } x_2_1_4; } x2; unsigned int x3; struct tagVCSourceDestinationInfo {} *x4; void *x5; }*)arg1;
- (bool)shouldDropCurrentPrimaryConnectionWithConnectionStats:(struct { double x1; double x2; double x3; double x4; double x5; bool x6; int x7; }*)arg1;
- (bool)shouldKeepAllConnections;
- (bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;
- (bool)shouldUpdateServerBasedConnection:(id)arg1;
- (void)startActiveProbingWithOptions:(id)arg1;
- (void)stopActiveProbingWithOptions:(id)arg1;
- (void)updateAllBitrateCapsForConnection:(id)arg1;
- (void)updateAllBitrateCapsForConnectionInternal:(id)arg1;
- (void)updateCellularMTU:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(bool)arg2;
- (void)updateConnectionSelectionPolicyWithPreferE2E:(bool)arg1;
- (void)updateDuplicationStateWithConnectionOperation:(int)arg1 isLocalOnWiFi:(bool)arg2 isRemoteOnWiFi:(bool)arg3;
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;
- (void)updateSessionStats:(unsigned short)arg1;
- (void)updateStatResponseResult:(id)arg1;
- (unsigned int)uplinkAudioOnlyBitrateCapOneToOne:(id)arg1;
- (unsigned int)uplinkBitrateCapForConnection:(id)arg1;
- (unsigned int)uplinkBitrateCapOneToOne:(id)arg1;
- (void)useConnectionAsPrimary:(id)arg1;

@end