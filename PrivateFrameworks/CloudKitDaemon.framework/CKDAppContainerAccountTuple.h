/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAppContainerAccountTuple : NSObject <NSCopying> {
    NSString * _accountID;
    CKDAppContainerTuple * _appContainerTuple;
}

@property (nonatomic, readonly, copy) NSString *accountID;
@property (nonatomic, readonly, copy) CKDAppContainerTuple *appContainerTuple;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)accountID;
- (id)appContainerTuple;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAppContainerTuple:(id)arg1 accountID:(id)arg2;
- (bool)isEqual:(id)arg1;

@end