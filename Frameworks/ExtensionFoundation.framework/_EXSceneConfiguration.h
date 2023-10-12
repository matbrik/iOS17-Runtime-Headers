/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _EXSceneConfiguration : NSObject <NSCopying> {
    _EXSceneSessionParameters * _parameters;
    Class  _sceneClass;
    Class  _sceneDelegateClass;
    NSString * _sceneDelegateClassName;
}

@property (readonly) _EXPromise *initializationPromise;
@property (readonly) _EXSceneSessionParameters *parameters;
@property (readonly, copy) NSString *role;
@property (nonatomic, retain) Class sceneClass;
@property (nonatomic, retain) Class sceneDelegateClass;
@property (copy) NSString *sceneDelegateClassName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithParameters:(id)arg1;
- (id)initializationParametersOfClass:(Class)arg1 error:(id*)arg2;
- (id)initializationPromise;
- (id)parameters;
- (id)role;
- (Class)sceneClass;
- (Class)sceneDelegateClass;
- (id)sceneDelegateClassName;
- (void)setSceneClass:(Class)arg1;
- (void)setSceneDelegateClass:(Class)arg1;
- (void)setSceneDelegateClassName:(id)arg1;

@end