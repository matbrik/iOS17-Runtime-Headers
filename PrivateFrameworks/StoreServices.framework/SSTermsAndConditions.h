/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSTermsAndConditions : NSObject <NSCopying> {
    bool  _requiresAuthentication;
    NSString * _text;
    bool  _userAccepted;
    long long  _versionID;
}

@property (nonatomic) NSString *currentText;
@property (nonatomic) long long currentVersionIdentifier;
@property (nonatomic, readonly) bool requiresAuthentication;
@property (getter=isUserAccepted, nonatomic) bool userAccepted;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentText;
- (long long)currentVersionIdentifier;
- (void)dealloc;
- (id)initWithResponseData:(id)arg1 error:(id*)arg2;
- (bool)isUserAccepted;
- (bool)requiresAuthentication;
- (void)setCurrentText:(id)arg1;
- (void)setCurrentVersionIdentifier:(long long)arg1;
- (void)setUserAccepted:(bool)arg1;

@end