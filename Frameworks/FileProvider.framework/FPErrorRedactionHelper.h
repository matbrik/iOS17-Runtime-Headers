/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPErrorRedactionHelper : NSObject {
    unsigned long long  _depth;
    NSError * _error;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithError:(id)arg1 depth:(unsigned long long)arg2;
- (id)parseErrorIntoStringRedacted:(bool)arg1;
- (id)redactedDescription;

@end