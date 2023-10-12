/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISHandleCloudKitShareAction : BSAction {
    CKShareMetadata * _cachedMetadata;
}

@property (nonatomic, readonly) CKShareMetadata *shareMetadata;

+ (id)cloudKitShareActionWithShareMetadata:(id)arg1;
+ (void)loadCloudKitFramework;

- (void).cxx_destruct;
- (long long)UIActionType;
- (id)data;
- (id)initWithShareMetadata:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)shareMetadata;

@end