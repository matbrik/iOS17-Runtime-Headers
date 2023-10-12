/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSDgPTPUnicastUDPv6EtEPort : TSDgPTPFDEtEPort {
    NSData * _destinationIPv6Address;
}

@property (nonatomic, readonly, copy) NSData *destinationIPv6Address;

+ (id)diagnosticInfoForService:(id)arg1;

- (void).cxx_destruct;
- (id)_destinationAddressString;
- (id)_destinationIPv6Address;
- (id)_sourceAddressString;
- (id)destinationIPv6Address;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (int)portType;
- (id)propertiesForXPC;

@end