/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFAppleArchiveLogger : PFAppleArchiveStream

+ (bool)encodeFile:(id)arg1 destination:(id)arg2 error:(id*)arg3;

- (bool)encodeBuffer:(const void*)arg1 size:(unsigned long long)arg2 error:(id*)arg3;
- (bool)flush:(id*)arg1;
- (id)initWithArchiveURL:(id)arg1;

@end