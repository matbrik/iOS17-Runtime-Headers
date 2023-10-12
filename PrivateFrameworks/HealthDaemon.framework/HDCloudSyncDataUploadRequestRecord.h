/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncDataUploadRequestRecord : HDCloudSyncSubscriptionRecord

+ (bool)isDataUploadRequestRecord:(id)arg1;
+ (id)recordForZoneID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordType;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;
+ (bool)requiresUnderlyingMessage;

- (id)description;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end