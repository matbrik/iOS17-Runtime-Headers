/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface VOSubstitution : NSManagedObject

@property (nonatomic) bool appliesToAllApps;
@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) NSSet *iOSBundles;
@property (nonatomic) bool ignoreCase;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isUserSubstitution;
@property (nonatomic, retain) NSSet *languages;
@property (nonatomic, retain) NSSet *macOSBundles;
@property (nonatomic, copy) NSString *originalString;
@property (nonatomic, copy) NSString *phonemes;
@property (nonatomic) long long replacementLength;
@property (nonatomic) long long replacementLocation;
@property (nonatomic, copy) NSString *replacementString;
@property (nonatomic) short version;
@property (nonatomic, retain) NSSet *voices;

// VOSubstitution (CoreDataProperties)

+ (id)fetchRequest;

@end