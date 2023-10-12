/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Koa.framework/Koa
 */

@interface KVDonator : NSObject {
    NSString * _deviceId;
    long long  _itemType;
    NSString * _originAppId;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<KVDonateServiceProvider> * _serviceProvider;
    unsigned long long  _timeoutNanos;
    NSString * _userId;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

// KVDonator (null)

+ (id)donatorWithItemType:(long long)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 error:(id*)arg5;
+ (id)donatorWithItemType:(long long)arg1 originAppId:(id)arg2 error:(id*)arg3;
+ (id)donatorWithItemType:(long long)arg1 originAppId:(id)arg2 userId:(id)arg3 error:(id*)arg4;
+ (id)donatorWithServiceProvider:(id)arg1 itemType:(long long)arg2 originAppId:(id)arg3 deviceId:(id)arg4 userId:(id)arg5 error:(id*)arg6;
+ (id)donatorWithServiceProvider:(id)arg1 itemType:(long long)arg2 originAppId:(id)arg3 error:(id*)arg4;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_donateWithServiceOptions:(unsigned short)arg1 version:(unsigned long long)arg2 validity:(id)arg3 usingStream:(id /* block */)arg4;
- (void)donateWithOptions:(unsigned short)arg1 usingStream:(id /* block */)arg2;
- (void)donateWithOptions:(unsigned short)arg1 version:(unsigned long long)arg2 validity:(id)arg3 usingStream:(id /* block */)arg4;
- (id)init;
- (id)initWithQueue:(id)arg1 itemType:(long long)arg2 originAppId:(id)arg3 deviceId:(id)arg4 userId:(id)arg5 serviceProvider:(id)arg6 timeoutNanos:(unsigned long long)arg7;
- (id)queue;

@end