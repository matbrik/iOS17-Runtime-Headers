/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/WebContentRestrictions.framework/WebContentRestrictions
 */

@interface WCRAppleAllowList : NSObject {
    NSSet * _allowList;
    NSString * _localPath;
}

@property (retain) NSSet *allowList;
@property (nonatomic, readonly) NSString *localPath;

- (void).cxx_destruct;
- (id)allowList;
- (bool)contains:(id)arg1;
- (id)initFromFile:(id)arg1;
- (id)localPath;
- (void)setAllowList:(id)arg1;

@end