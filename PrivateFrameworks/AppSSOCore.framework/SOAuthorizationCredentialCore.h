/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

@interface SOAuthorizationCredentialCore : NSObject <NSSecureCoding> {
    NSDictionary * _httpAuthorizationHeaders;
    NSData * _httpBody;
    NSHTTPURLResponse * _httpResponse;
    NSArray * _secKeyProxyEndpoints;
}

@property (nonatomic, retain) NSDictionary *httpAuthorizationHeaders;
@property (nonatomic, retain) NSData *httpBody;
@property (nonatomic, copy) NSHTTPURLResponse *httpResponse;
@property (nonatomic, retain) NSArray *secKeyProxyEndpoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)httpAuthorizationHeaders;
- (id)httpBody;
- (id)httpResponse;
- (id)initWithAuthorizationCredential:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)secKeyProxyEndpoints;
- (void)setHttpAuthorizationHeaders:(id)arg1;
- (void)setHttpBody:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setSecKeyProxyEndpoints:(id)arg1;

@end