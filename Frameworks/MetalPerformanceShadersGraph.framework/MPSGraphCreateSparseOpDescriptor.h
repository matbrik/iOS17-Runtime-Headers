/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphCreateSparseOpDescriptor : MPSGraphObject <NSCopying> {
    unsigned int  _dataType;
    unsigned long long  _sparseStorageType;
}

@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long sparseStorageType;

// MPSGraphCreateSparseOpDescriptor (null)

+ (id)descriptorWithStorageType:(unsigned long long)arg1 dataType:(unsigned int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (void)setDataType:(unsigned int)arg1;
- (void)setSparseStorageType:(unsigned long long)arg1;
- (unsigned long long)sparseStorageType;

@end