/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLCircularRegion : CLRegion {
    bool  _allowMonitoringWhileNearby;
    double  _desiredAccuracy;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _geoCenter;
    double  _geoRadius;
    int  _geoReferenceFrame;
    bool  _isLowPower;
}

@property (nonatomic, readonly) bool allowMonitoringWhileNearby;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } center;
@property (nonatomic) double clsHorizontalAccuracy;
@property (nonatomic, readonly) double desiredAccuracy;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } geoCenter;
@property (nonatomic, readonly) double geoRadius;
@property (nonatomic) int geoReferenceFrame;
@property (nonatomic, readonly) bool isLowPower;
@property (readonly) double radius;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (bool)allowMonitoringWhileNearby;
- (struct CLLocationCoordinate2D { double x1; double x2; })center;
- (bool)containsCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)desiredAccuracy;
- (void)encodeWithCoder:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })geoCenter;
- (double)geoRadius;
- (int)geoReferenceFrame;
- (unsigned long long)hash;
- (id)initForLowPowerWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initLegacyObjectWithCoder:(id)arg1;
- (id)initNearbyAllowedWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3 nearbyAllowed:(bool)arg4;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3 onBehalfOfBundleId:(id)arg4;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 referenceFrame:(int)arg3 allowMonitoringWhenNearby:(bool)arg4 lowPower:(bool)arg5 identifier:(id)arg6 onBehalfOfBundleId:(id)arg7 notifyOnEntry:(bool)arg8 notifyOnExit:(bool)arg9 conservativeEntry:(bool)arg10 emergency:(bool)arg11;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 referenceFrame:(int)arg3 allowMonitoringWhenNearby:(bool)arg4 lowPower:(bool)arg5 identifier:(id)arg6 onBehalfOfBundleId:(id)arg7 notifyOnEntry:(bool)arg8 notifyOnExit:(bool)arg9 conservativeEntry:(bool)arg10 emergency:(bool)arg11 deviceId:(id)arg12 handoffTag:(id)arg13;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLowPower;
- (double)radius;
- (int)referenceFrame;
- (void)setGeoReferenceFrame:(int)arg1;
- (void)setReferenceFrame:(int)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit

// CLCircularRegion (MKMapItemAdditions)

+ (id)circularRegionFromMapRegion:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

// CLCircularRegion (CLSExtensions)

- (double)clsHorizontalAccuracy;
- (void)setClsHorizontalAccuracy:(double)arg1;

@end