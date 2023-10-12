/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

@interface STReferenceCountedCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _referenceCounts;
}

- (void).cxx_destruct;
- (void)cacheObject:(id)arg1 forKey:(id)arg2;
- (id)cachedObjectForKey:(id)arg1;
- (void)clearObjectForKey:(id)arg1;
- (void)decrementReferenceCountForKey:(id)arg1;
- (void)incrementReferenceCountForKey:(id)arg1;
- (id)init;

@end