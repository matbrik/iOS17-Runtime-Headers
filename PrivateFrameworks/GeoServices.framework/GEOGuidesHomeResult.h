/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGuidesHomeResult : NSObject {
    NSArray * _mapsResults;
    GEOPDGuidesHomeResult * _pdGuideHomeResult;
}

@property (nonatomic, readonly) GEOGuidesHomeFixedSection *featuredGuidesSection;
@property (nonatomic, readonly) GEOGuidesHomeFixedSection *filteredGuidesSection;
@property (nonatomic, readonly) GEOGuidesHomeFixedSection *filtersSection;
@property (nonatomic, readonly) NSArray *repeatableSections;

- (void).cxx_destruct;
- (id)featuredGuidesSection;
- (id)filteredGuidesSection;
- (id)filtersSection;
- (id)guideLocationName:(id)arg1;
- (id)initWithGuidesHomeFixedSection:(id)arg1 mapsResults:(id)arg2;
- (id)repeatableSections;

@end