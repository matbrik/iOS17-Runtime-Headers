/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCountryMonitorControl : NSObject <HKCountryMonitorControlClient, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)checkCurrentCountry;
+ (void)checkCurrentCountryWithHealthStore:(id)arg1;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end