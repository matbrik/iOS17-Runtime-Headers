/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyBadgeURLRequest : CKDURLRequest {
    unsigned long long  _badgeValue;
}

@property (nonatomic, readonly) unsigned long long badgeValue;

- (unsigned long long)badgeValue;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 badgeValue:(unsigned long long)arg2;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end