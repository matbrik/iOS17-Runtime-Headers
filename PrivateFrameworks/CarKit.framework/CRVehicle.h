/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicle : NSObject <NSSecureCoding> {
    NSString * _PPID;
    NSSet * _accessoryProtocols;
    long long  _albumArtUserPreference;
    long long  _appearanceModePreference;
    NSString * _bluetoothAddress;
    NSString * _carplayWiFiUUID;
    NSData * _certificateSerialNumber;
    unsigned long long  _enhancedIntegrationStatus;
    NSUUID * _identifier;
    NSString * _internalNotes;
    NSDate * _lastConnectedDate;
    long long  _mapsAppearancePreference;
    unsigned long long  _pairingStatus;
    NSString * _previousWallpaperIdentifier;
    bool  _supportsEnhancedIntegration;
    NSNumber * _supportsStartSessionRequest;
    bool  _supportsUSBCarPlay;
    bool  _supportsWirelessCarPlay;
    NSString * _vehicleModelName;
    NSString * _vehicleName;
    NSString * _wallpaperIdentifier;
}

@property (nonatomic, retain) NSString *PPID;
@property (nonatomic, retain) NSSet *accessoryProtocols;
@property (nonatomic) long long albumArtUserPreference;
@property (nonatomic) long long appearanceModePreference;
@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSString *carplayWiFiUUID;
@property (nonatomic, retain) NSData *certificateSerialNumber;
@property (nonatomic) unsigned long long enhancedIntegrationStatus;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSString *internalNotes;
@property (nonatomic, readonly) bool isEnhancedIntegrationEnabled;
@property (nonatomic, readonly) bool isPaired;
@property (nonatomic, retain) NSDate *lastConnectedDate;
@property (nonatomic) long long mapsAppearancePreference;
@property (nonatomic) unsigned long long pairingStatus;
@property (nonatomic, retain) NSString *previousWallpaperIdentifier;
@property (nonatomic, readonly) bool requiresBonjour;
@property (nonatomic) bool supportsEnhancedIntegration;
@property (nonatomic) NSNumber *supportsStartSessionRequest;
@property (nonatomic) bool supportsUSBCarPlay;
@property (nonatomic) bool supportsWirelessCarPlay;
@property (nonatomic, retain) NSString *vehicleModelName;
@property (nonatomic, retain) NSString *vehicleName;
@property (nonatomic, retain) NSString *wallpaperIdentifier;

+ (bool)supportsSecureCoding;
+ (id)vehicleForMessagingVehicle:(id)arg1;

- (void).cxx_destruct;
- (id)PPID;
- (id)_enhancedIntegrationDebugDescription;
- (id)_pairingDebugDescription;
- (id)accessoryProtocols;
- (long long)albumArtUserPreference;
- (long long)appearanceModePreference;
- (id)bluetoothAddress;
- (id)carplayWiFiUUID;
- (id)certificateSerialNumber;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)enhancedIntegrationStatus;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
- (id)internalNotes;
- (bool)isEnhancedIntegrationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (id)lastConnectedDate;
- (long long)mapsAppearancePreference;
- (void)mergeAttributesFromVehicle:(id)arg1;
- (unsigned long long)pairingStatus;
- (id)previousWallpaperIdentifier;
- (bool)requiresBonjour;
- (void)setAccessoryProtocols:(id)arg1;
- (void)setAlbumArtUserPreference:(long long)arg1;
- (void)setAppearanceModePreference:(long long)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCarplayWiFiUUID:(id)arg1;
- (void)setCertificateSerialNumber:(id)arg1;
- (void)setEnhancedIntegrationStatus:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalNotes:(id)arg1;
- (void)setLastConnectedDate:(id)arg1;
- (void)setMapsAppearancePreference:(long long)arg1;
- (void)setPPID:(id)arg1;
- (void)setPairingStatus:(unsigned long long)arg1;
- (void)setPreviousWallpaperIdentifier:(id)arg1;
- (void)setSupportsEnhancedIntegration:(bool)arg1;
- (void)setSupportsStartSessionRequest:(id)arg1;
- (void)setSupportsUSBCarPlay:(bool)arg1;
- (void)setSupportsWirelessCarPlay:(bool)arg1;
- (void)setVehicleModelName:(id)arg1;
- (void)setVehicleName:(id)arg1;
- (void)setWallpaperIdentifier:(id)arg1;
- (bool)supportsEnhancedIntegration;
- (id)supportsStartSessionRequest;
- (bool)supportsUSBCarPlay;
- (bool)supportsWirelessCarPlay;
- (id)vehicleModelName;
- (id)vehicleName;
- (id)wallpaperIdentifier;

@end