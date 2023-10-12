/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubrangeData : NSData {
    NSData * _data;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

- (bool)_isCompact;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithData:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;

@end