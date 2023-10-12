/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceItemActionDataProvider : MKPlaceActionDataProvider {
    unsigned long long  _options;
    <_MKPlaceItem> * _placeItem;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;

- (void).cxx_destruct;
- (void)_placeItemDidUpdate;
- (bool)canShowCallAction;
- (id)contact;
- (id)mapItem;
- (id)messagesForBusinessURL;
- (unsigned long long)options;
- (id)placeItem;
- (bool)supportsMessagesForBusiness;
- (void)updateWithPlaceItem:(id)arg1 options:(unsigned long long)arg2;

@end