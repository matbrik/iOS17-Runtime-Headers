/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitServices.framework/PassKitServices
 */

@interface PKPassKitServicesXPCService : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (id)_createConnection;
- (void)_invalidate;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)imageDataForRecurringPaymentMemo:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)imageDataForTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)snapshotDataForPassUniqueIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;

@end