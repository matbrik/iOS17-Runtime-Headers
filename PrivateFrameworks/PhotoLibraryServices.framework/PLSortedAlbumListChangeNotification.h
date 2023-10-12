/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLSortedAlbumList * _albumList;
    PLAssetContainerListChangeNotification * _backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (void).cxx_destruct;
- (id)_changedObjects;
- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)albumList;
- (bool)countDidChange;
- (id)description;
- (id)init;
- (id)initWithSortedAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;
- (id)object;
- (bool)shouldReload;

@end