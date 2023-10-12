/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalyticsRootClock : SiriAnalyticsLogicalClock <SiriAnalyticsSensitiveConditionsObserverDelegate> {
    NSMutableDictionary * _derivativeClocksByStreamUUID;
    SiriAnalyticsSensitiveConditionsLedger * _sensitiveConditionsLedger;
}

@property (nonatomic, readonly) SiriAnalyticsSensitiveConditionsLedger *sensitiveConditionsLedger;

- (void).cxx_destruct;
- (id)derivativeClockForStreamUUID:(id)arg1;
- (id)derivativeClocks;
- (id)initWithClockIdentifier:(id)arg1 timestampOffset:(unsigned long long)arg2 startedOn:(unsigned long long)arg3 metastore:(id)arg4;
- (bool)isTrackingDerivativeClockByStreamUUID:(id)arg1;
- (void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2;
- (void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2;
- (id)sensitiveConditionsLedger;

@end