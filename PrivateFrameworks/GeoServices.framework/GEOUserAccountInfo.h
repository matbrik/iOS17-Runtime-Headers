/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserAccountInfo : NSObject {
    ACAccountStore * _accountStore;
    bool  _hasCheckedPrimaryAccount;
    bool  _hasCheckedPrimaryAuthKitAccount;
    geo_isolater * _isolation;
    ACAccount * _primaryAuthKitAccount;
    ACAccount * _primaryICloudAccount;
}

+ (bool)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (bool)isAccountInfoAvailable;
+ (bool)isCurrentICloudAccountChinaBased;
+ (bool)isCurrentICloudAccountManaged;
+ (bool)isCurrentICloudAccountUnderage;
+ (id)primaryICloudAccount;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_primaryICloudAccountIsolated;
- (id)init;
- (bool)isCurrentICloudAccountChinaBased;
- (bool)isCurrentICloudAccountManaged;
- (bool)isCurrentICloudAccountUnderage;
- (id)primaryICloudAccount;

@end