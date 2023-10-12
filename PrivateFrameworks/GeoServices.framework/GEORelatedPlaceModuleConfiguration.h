/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORelatedPlaceModuleConfiguration : NSObject {
    GEOPDTemplatePlaceModuleConfiguration * _relatedPlaceConfig;
}

@property (nonatomic, readonly) int componentIdentifier;
@property (nonatomic, readonly) int layoutVariant;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) NSString *sectionTitle;
@property (getter=isVertical, nonatomic, readonly) bool vertical;

- (void).cxx_destruct;
- (int)componentIdentifier;
- (id)description;
- (id)initWithPlaceTemplateModuleConfiguration:(id)arg1;
- (bool)isVertical;
- (int)layoutVariant;
- (unsigned long long)numberOfRows;
- (id)sectionTitle;

@end