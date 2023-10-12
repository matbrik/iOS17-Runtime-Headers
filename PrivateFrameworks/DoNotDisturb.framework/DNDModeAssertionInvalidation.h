/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding> {
    DNDModeAssertion * _assertion;
    DNDModeAssertionInvalidationDetails * _details;
    NSDate * _invalidationDate;
    unsigned long long  _reason;
    unsigned long long  _reasonOverride;
    DNDModeAssertionSource * _source;
}

@property (nonatomic, readonly, copy) DNDModeAssertion *assertion;
@property (nonatomic, readonly, copy) DNDModeAssertionInvalidationDetails *details;
@property (nonatomic, readonly, copy) NSDate *invalidationDate;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) unsigned long long reasonOverride;
@property (nonatomic, readonly, copy) DNDModeAssertionSource *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assertion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 invalidationDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6;
- (id)initWithCoder:(id)arg1;
- (id)invalidationDate;
- (bool)isEqual:(id)arg1;
- (unsigned long long)reason;
- (unsigned long long)reasonOverride;
- (id)source;

@end