/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
 */

@interface DCDeviceMetadataDaemonConnection : NSObject {
    NSXPCConnection * _conn;
    NSLock * _connLock;
}

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (id)remoteObjectProxy:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxy:(id /* block */)arg1;

@end