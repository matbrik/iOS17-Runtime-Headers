/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKWalrusConfigProvider : NSObject {
    AKWalrusConfig * _cachedConfig;
}

@property (nonatomic, readonly) AKWalrusConfig *cachedConfig;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_extractWalrusConfigWithAccountCountry:(id)arg1 fromGlobalConfig:(id)arg2;
- (id)cachedConfig;
- (void)getWalrusConfigWithCompletion:(id /* block */)arg1;

@end