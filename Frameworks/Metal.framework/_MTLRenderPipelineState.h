/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {
    <MTLDevice> * _device;
    unsigned int  _explicitVisibilityGroupID;
    MTLDebugInstrumentationData * _fragmentDebugInstrumentationData;
    unsigned long long  _gpuAddress;
    unsigned long long  _imageBlockSampleLength;
    NSString * _label;
    unsigned long long  _maxTotalThreadgroupsPerMeshGrid;
    unsigned long long  _maxTotalThreadsPerMeshThreadgroup;
    unsigned long long  _maxTotalThreadsPerObjectThreadgroup;
    MTLDebugInstrumentationData * _meshDebugInstrumentationData;
    unsigned long long  _meshThreadExecutionWidth;
    MTLDebugInstrumentationData * _objectDebugInstrumentationData;
    unsigned long long  _objectThreadExecutionWidth;
    unsigned long long  _resourceIndex;
    bool  _supportIndirectCommandBuffers;
    long long  _textureWriteRoundingMode;
    bool  _threadgroupSizeMatchesTileSize;
    MTLDebugInstrumentationData * _tileDebugInstrumentationData;
    MTLDebugInstrumentationData * _vertexDebugInstrumentationData;
}

@property (nonatomic, readonly) unsigned long long allocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int explicitVisibilityGroupID;
@property (nonatomic, retain) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long imageBlockSampleLength;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadgroupsPerMeshGrid;
@property (readonly) unsigned long long maxTotalThreadsPerMeshThreadgroup;
@property (readonly) unsigned long long maxTotalThreadsPerObjectThreadgroup;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic, retain) MTLDebugInstrumentationData *meshDebugInstrumentationData;
@property (readonly) unsigned long long meshThreadExecutionWidth;
@property (nonatomic, retain) MTLDebugInstrumentationData *objectDebugInstrumentationData;
@property (readonly) unsigned long long objectThreadExecutionWidth;
@property (nonatomic, readonly) unsigned long long resourceIndex;
@property (readonly) Class superclass;
@property (readonly) bool supportIndirectCommandBuffers;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) bool threadgroupSizeMatchesTileSize;
@property (nonatomic, retain) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly) unsigned long long uniqueIdentifier;
@property (nonatomic, retain) MTLDebugInstrumentationData *vertexDebugInstrumentationData;

- (unsigned long long)allocatedSize;
- (void)dealloc;
- (id)device;
- (unsigned int)explicitVisibilityGroupID;
- (id)fragmentDebugInstrumentationData;
- (id)fragmentFunctionHandleWithFunction:(id)arg1;
- (id)functionHandleWithFunction:(id)arg1 stage:(unsigned long long)arg2;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (unsigned long long)imageBlockSampleLength;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (unsigned long long)imageblockSampleLength;
- (id)initWithDevice:(id)arg1 meshRenderPipelineStateDescriptor:(id)arg2 objectThreadExecutionWidth:(unsigned long long)arg3 meshThreadExecutionWidth:(unsigned long long)arg4;
- (id)initWithDevice:(id)arg1 meshRenderPipelineStateDescriptor:(id)arg2 objectThreadExecutionWidth:(unsigned long long)arg3 meshThreadExecutionWidth:(unsigned long long)arg4 maxTotalThreadgroupsPerMeshGrid:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2;
- (id)initWithParent:(id)arg1;
- (id)initWithTileParent:(id)arg1;
- (id)label;
- (unsigned long long)maxTotalThreadgroupsPerMeshGrid;
- (unsigned long long)maxTotalThreadsPerMeshThreadgroup;
- (unsigned long long)maxTotalThreadsPerObjectThreadgroup;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (id)meshDebugInstrumentationData;
- (id)meshFunctionHandleWithFunction:(id)arg1;
- (unsigned long long)meshThreadExecutionWidth;
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;
- (id)newMeshIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newObjectIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 fragmentAdditionalBinaryFunctions:(id)arg2 error:(id*)arg3;
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;
- (id)objectDebugInstrumentationData;
- (id)objectFunctionHandleWithFunction:(id)arg1;
- (unsigned long long)objectThreadExecutionWidth;
- (id)pipelineBinaries;
- (unsigned long long)resourceIndex;
- (void)setFragmentDebugInstrumentationData:(id)arg1;
- (void)setMeshDebugInstrumentationData:(id)arg1;
- (void)setObjectDebugInstrumentationData:(id)arg1;
- (void)setTileDebugInstrumentationData:(id)arg1;
- (void)setVertexDebugInstrumentationData:(id)arg1;
- (bool)supportIndirectCommandBuffers;
- (long long)textureWriteFPRoundingMode;
- (long long)textureWriteRoundingMode;
- (bool)threadgroupSizeMatchesTileSize;
- (id)tileDebugInstrumentationData;
- (id)tileFunctionHandleWithFunction:(id)arg1;
- (unsigned long long)uniqueIdentifier;
- (id)vertexDebugInstrumentationData;
- (id)vertexFunctionHandleWithFunction:(id)arg1;

@end