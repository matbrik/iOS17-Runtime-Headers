/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFUpdateAlarmRequest : AFSiriRequest {
    NSArray * _alarms;
}

@property (nonatomic, copy) NSArray *alarms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarm;
- (id)alarms;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarms:(id)arg1;

@end