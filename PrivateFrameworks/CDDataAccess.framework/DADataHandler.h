/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DADataHandler : NSObject {
    NSString * _changeTrackingID;
    void * _container;
}

@property (nonatomic, copy) NSString *changeTrackingID;
@property (nonatomic) void*container;

+ (id)newDataHandlerForDataclass:(long long)arg1 container:(void*)arg2 changeTrackingID:(id)arg3;

- (void).cxx_destruct;
- (id)changeTrackingID;
- (bool)closeDBAndSave:(bool)arg1;
- (void*)container;
- (void*)copyLocalObjectFromId:(int)arg1;
- (id)copyOfAllLocalObjectsInContainer;
- (long long)dataclass;
- (void)dealloc;
- (void)drainContainer;
- (void)drainSuperfluousChanges;
- (id)getDAExceptionObjectWithLocalItem:(void*)arg1 originalEvent:(id)arg2 account:(id)arg3;
- (id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3;
- (int)getIdFromLocalObject:(void*)arg1;
- (id)initWithContainer:(void*)arg1 changeTrackingID:(id)arg2;
- (void)openDB;
- (bool)saveContainer;
- (void)setChangeTrackingID:(id)arg1;
- (void)setContainer:(void*)arg1;
- (bool)wipeServerIds;

@end