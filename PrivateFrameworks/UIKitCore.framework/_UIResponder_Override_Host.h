/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIResponder_Override_Host : NSObject {
    NSMutableArray * _overrides;
    UIResponder * _owner;
}

@property (nonatomic, readonly) UIResponder *owner;

+ (id)hostForResponder:(id)arg1;

- (void).cxx_destruct;
- (void)attachOverrider:(id)arg1 forTypes:(long long)arg2;
- (void)dealloc;
- (id)description;
- (void)detachOverrider:(id)arg1 forTypes:(long long)arg2;
- (id)init;
- (id)owner;
- (long long)typesForResponder:(id)arg1;

@end