/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIStatisticChangeCache : NSObject {
    NSMutableDictionary * _cacheWithInputMode;
    NSMutableDictionary * _cacheWithoutInputMode;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addValue:(int)arg1 toStatisticWithName:(id)arg2 andInputMode:(id)arg3;
- (void)addValue:(int)arg1 toStatisticWithName:(id)arg2 inCache:(id)arg3;
- (id)flush;
- (id)init;

@end