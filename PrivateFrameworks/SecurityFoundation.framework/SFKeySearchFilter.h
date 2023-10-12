/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFKeySearchFilter : NSObject <NSCopying, NSSecureCoding> {
    id  _keySearchFilterInternal;
}

@property (nonatomic, copy) NSArray *domains;
@property (nonatomic, copy) NSArray *specifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDomains:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end