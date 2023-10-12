/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAsyncCacheRetrievalInfo : NSObject {
    NSMutableArray * _deliveryBlocks;
    id  _item;
    bool  _itemFetched;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)addDeliveryBlock:(id /* block */)arg1;
- (void)deliverItem:(id)arg1;
- (id)init;
- (id)synchronouslyRetrieve:(id /* block */)arg1 outDeliveryBlocks:(id*)arg2;

@end