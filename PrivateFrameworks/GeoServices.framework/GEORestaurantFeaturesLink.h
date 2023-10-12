/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORestaurantFeaturesLink : NSObject {
    NSMapTable * _attributionMap;
    GEOPDRestaurantReservationLink * _restaurantReservationLink;
}

@property (nonatomic, readonly) NSArray *featureProviders;
@property (nonatomic, readonly) NSArray *featureTypes;
@property (nonatomic, readonly) bool hasFeatures;
@property (nonatomic, retain) GEOPDRestaurantReservationLink *restaurantReservationLink;

- (void).cxx_destruct;
- (id)applicationsForVendorID:(id)arg1;
- (id)displayNameForVendorID:(id)arg1;
- (unsigned long long)extensionModeForVendorID:(id)arg1;
- (id)featureProviders;
- (id)featureTypes;
- (bool)hasFeatures;
- (id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2;
- (id)restaurantReservationLink;
- (void)setRestaurantReservationLink:(id)arg1;

@end