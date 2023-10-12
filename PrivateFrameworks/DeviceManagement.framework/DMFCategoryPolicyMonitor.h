/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFCategoryPolicyMonitor : NSObject {
    NSUUID * _identifier;
    NSArray * _policyTypes;
}

@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSArray *policyTypes;

- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (id)policyTypes;
- (void)requestPoliciesForCategoryIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;

@end