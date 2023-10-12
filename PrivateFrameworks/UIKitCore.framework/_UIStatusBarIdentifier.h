/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarIdentifier : NSObject <NSCopying> {
    id  _object;
    NSString * _string;
}

@property (nonatomic, copy) id object;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

+ (id)identifierForObject:(id)arg1 string:(id)arg2;
+ (id)uninternedIdentifierForObject:(id)arg1 string:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)object;
- (void)setObject:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

// _UIStatusBarIdentifier (StringConversion)

+ (id)displayIdentifierFromStringRepresentation:(id)arg1;

- (id)stringRepresentation;

@end