/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTOptIOLogState : NSObject {
    bool  _optIn;
    NSDate * _smtTimestamp;
    NSString * _uri;
}

@property bool optIn;
@property (retain) NSDate *smtTimestamp;
@property (retain) NSString *uri;

- (void).cxx_destruct;
- (id)description;
- (id)initWithURI:(id)arg1 smtTimestamp:(id)arg2 optIn:(bool)arg3;
- (bool)optIn;
- (void)setOptIn:(bool)arg1;
- (void)setSmtTimestamp:(id)arg1;
- (void)setUri:(id)arg1;
- (id)smtTimestamp;
- (id)uri;

@end