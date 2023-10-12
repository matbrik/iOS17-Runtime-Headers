/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNGuidanceJunctionViewInfo : NSObject <NSSecureCoding> {
    NSArray * _images;
    NSUUID * _uniqueID;
}

@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) NSUUID *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)images;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 images:(id)arg2;
- (id)uniqueID;

@end