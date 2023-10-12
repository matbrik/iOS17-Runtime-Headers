/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBluetoothMonitorer : NSObject <CBCentralManagerDelegate> {
    CBCentralManager * _bluetoothManager;
    <PKBluetoothMonitorerDelegate> * _delegate;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKBluetoothMonitorerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)delegate;
- (id)initWithManagerOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end