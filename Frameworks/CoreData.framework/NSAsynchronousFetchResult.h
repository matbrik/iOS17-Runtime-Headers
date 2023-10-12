/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult {
    NSAsynchronousFetchRequest * _fetchRequest;
    NSArray * _finalResult;
    id  _intermediateResultCallback;
}

@property (readonly) NSAsynchronousFetchRequest *fetchRequest;
@property (readonly) NSArray *finalResult;

- (void)dealloc;
- (id)fetchRequest;
- (id)finalResult;
- (id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(id /* block */)arg4;
- (void)setOperationError:(id)arg1;

@end