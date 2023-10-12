/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore
 */

@interface PLCoreAnalyticsEvent : NSObject {
    NSString * _event;
    NSMutableDictionary * _mutablePayload;
}

@property (readonly) NSDictionary *payload;

- (void).cxx_destruct;
- (void)addKey:(id)arg1 value:(id)arg2;
- (id)description;
- (id)initWithEvent:(id)arg1 payload:(id)arg2;
- (void)mergePayload:(id)arg1;
- (id)payload;
- (void)publish;
- (void)removeKey:(id)arg1;

@end