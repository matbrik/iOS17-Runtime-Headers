/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRemoteWebViewRequest : SSRequest {
    NSString * _URLString;
    NSString * _referrer;
}

@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, retain) NSString *referrer;

- (void).cxx_destruct;
- (id)URLString;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)referrer;
- (void)setReferrer:(id)arg1;
- (void)setURLString:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end