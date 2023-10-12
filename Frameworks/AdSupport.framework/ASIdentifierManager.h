/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AdSupport.framework/AdSupport
 */

@interface ASIdentifierManager : NSObject

@property (nonatomic, readonly) NSUUID *advertisingIdentifier;
@property (getter=isAdvertisingTrackingEnabled, nonatomic, readonly) bool advertisingTrackingEnabled;

+ (id)sharedManager;

- (id)advertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (bool)isAdvertisingTrackingEnabled;
- (bool)isUserOptedIn;

@end