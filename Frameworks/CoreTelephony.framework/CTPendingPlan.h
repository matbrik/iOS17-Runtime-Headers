/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTPendingPlan : CTPlan {
    NSString * _matchingID;
    NSString * _smdpURL;
}

@property (nonatomic, readonly) NSString *matchingID;
@property (nonatomic, readonly) NSString *smdpURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSmdpURL:(id)arg1 matchingID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)matchingID;
- (id)smdpURL;

@end