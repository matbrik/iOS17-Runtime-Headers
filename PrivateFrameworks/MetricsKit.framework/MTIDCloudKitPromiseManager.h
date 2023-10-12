/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTIDCloudKitPromiseManager : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _dict;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSMutableDictionary *dict;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)dict;
- (void)finishPromisesOfRecord:(id)arg1;
- (id)initWithCallbackQueue:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setDict:(id)arg1;
- (id)waitForRecordToSync:(id)arg1 timeout:(double)arg2;

@end