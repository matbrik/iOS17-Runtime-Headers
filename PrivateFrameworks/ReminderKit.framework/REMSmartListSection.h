/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMSmartListSection : REMBaseSection {
    REMSmartList * _smartList;
}

@property (nonatomic, readonly) REMSmartList *smartList;
@property (nonatomic, retain) REMObjectID *smartListID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStore:(id)arg1 smartList:(id)arg2 storage:(id)arg3;
- (id)smartList;

@end