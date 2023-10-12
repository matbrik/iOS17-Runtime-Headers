/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDTestManager : NSObject

@property (nonatomic, readonly) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;
@property (nonatomic, readonly) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;

+ (id)testServer;

- (id)remoteAccountStoreEndpoint;
- (id)remoteOAuthSignerEndpoint;
- (void)startTestServer;
- (void)stopTestServer;

@end