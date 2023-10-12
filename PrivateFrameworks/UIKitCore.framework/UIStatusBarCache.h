/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarCache : NSObject {
    CPBitmapStore * _store;
    bool  _writeable;
}

@property (getter=isWriteable, nonatomic, readonly) bool writeable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3;
- (id)init;
- (bool)isWriteable;
- (void)removeImagesInGroup:(id)arg1;

@end