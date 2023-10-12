/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISceneProposalAction : BSAction

@property (nonatomic, readonly, copy) BSAction *action;
@property (nonatomic, readonly, copy) NSString *persistentIdentifier;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;

- (long long)UIActionType;
- (id)action;
- (id)initWithPersistentIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)persistentIdentifier;
- (id)sceneIdentifier;

@end