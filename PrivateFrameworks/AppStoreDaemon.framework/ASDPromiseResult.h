/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPromiseResult : NSObject {
    NSError * _error;
    id  _value;
}

@property (readonly) NSError *error;
@property (readonly) id value;

+ (id)resultWithError:(id)arg1;
+ (id)resultWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (id)value;

@end