/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
    unsigned long long  _position;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 position:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (unsigned long long)position;
- (SEL)selector;
- (id)symbol;

@end