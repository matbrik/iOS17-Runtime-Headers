/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileProviderKernelMaterializationInfo : NSObject <NSSecureCoding> {
    NSFileProviderKernelFileMaterializationInfo * fileMaterializationInfo;
    unsigned int  operation;
    NSFileProviderKernelPartialFolderMaterializationInfo * partialFolderMaterializationInfo;
}

@property (readonly) NSFileProviderKernelFileMaterializationInfo *fileMaterializationInfo;
@property (readonly) unsigned int operation;
@property (readonly) NSFileProviderKernelPartialFolderMaterializationInfo *partialFolderMaterializationInfo;

+ (id)fileMaterializationInfoWithOperation:(unsigned int)arg1 size:(long long)arg2 offset:(long long)arg3;
+ (id)kernelMaterializationInfoWithOperation:(unsigned int)arg1;
+ (id)partialFolderMaterializationInfoWithOperation:(unsigned int)arg1 fileName:(const char *)arg2;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fileMaterializationInfo;
- (id)initWithCoder:(id)arg1;
- (unsigned int)operation;
- (id)partialFolderMaterializationInfo;

@end