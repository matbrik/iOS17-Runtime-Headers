/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNParameterSubstitution : NSObject <NSSecureCoding> {
    NSString * _parameterIdentifier;
    NSArray * _substitutionValues;
}

@property (nonatomic, readonly, copy) NSString *parameterIdentifier;
@property (nonatomic, readonly, copy) NSArray *substitutionValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterIdentifier:(id)arg1 substitutionValues:(id)arg2;
- (id)parameterIdentifier;
- (id)substitutionValues;

@end