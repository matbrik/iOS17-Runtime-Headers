/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBBundleManager : NSObject {
    NSString * _overrideBundleSearchPath;
}

@property (nonatomic, retain) NSString *overrideBundleSearchPath;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_allPrivacyBundles;
- (id)_bundleSearchPath;
- (id)_providersByBundleNames;
- (id)allBundles;
- (id)bundleWithIdentifier:(id)arg1;
- (id)bundleWithIdentifier:(id)arg1 usingSearchPath:(id)arg2 includePlaceholder:(bool)arg3 isLinkBundle:(bool)arg4;
- (id)bundlesWithIdentifiers:(id)arg1;
- (id)orderedPrivacyBundles;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(bool)arg1;
- (id)overrideBundleSearchPath;
- (id)privacyLinkBundleForBundles:(id)arg1;
- (void)setOverrideBundleSearchPath:(id)arg1;

@end