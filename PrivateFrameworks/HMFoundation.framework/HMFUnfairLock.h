/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFUnfairLock : HMFObject <HMFLocking> {
    unsigned long long  _options;
}

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)arg1;

- (void)assertNotOwner;
- (void)assertOwner;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (unsigned long long)options;
- (void)performBlock:(id /* block */)arg1;
- (void)unlock;

@end