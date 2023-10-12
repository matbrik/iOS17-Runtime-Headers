/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLGPUDebugResource> {
    <MTLBuffer> * _argumentStorage;
    unsigned short  _commandByteStride;
    <MTLBuffer> * _fragmentDrawIDBuffer;
    bool  _hasCompute;
    bool  _hasRender;
    bool  _inheritsBuffers;
    bool  _inheritsPipelineState;
    unsigned short  _maxCommands;
    unsigned char  _maxFragmentBindings;
    unsigned char  _maxKernelBindings;
    unsigned char  _maxMeshBindings;
    unsigned char  _maxObjectBindings;
    unsigned char  _maxThreadgroupBindings;
    unsigned char  _maxVertexBindings;
    bool  _mayContainDrawMeshes;
    <MTLBuffer> * _meshDrawIDBuffer;
    <MTLBuffer> * _objectDrawIDBuffer;
    unsigned long long  _originalResourceOptions;
    <MTLBuffer> * _vertexKernelDrawOrDispatchIDBuffer;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (nonatomic, retain) <MTLIndirectCommandBufferSPI> *baseObject;
@property (nonatomic, readonly) unsigned long long commandByteStride;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (nonatomic, readonly) bool inheritsBuffers;
@property (nonatomic, readonly) bool inheritsPipelineState;
@property (nonatomic, readonly) <MTLBuffer> *internalDispatchIDBuffer;
@property (nonatomic, readonly) <MTLBuffer> *internalFragmentDrawIDBuffer;
@property (nonatomic, readonly) <MTLBuffer> *internalICBBuffer;
@property (nonatomic, readonly) <MTLBuffer> *internalMeshDrawIDBuffer;
@property (nonatomic, readonly) <MTLBuffer> *internalObjectDrawIDBuffer;
@property (nonatomic, readonly) <MTLBuffer> *internalVertexDrawIDBuffer;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) unsigned long long maxCommands;
@property (nonatomic, readonly) unsigned long long maxFragmentBindings;
@property (nonatomic, readonly) unsigned long long maxKernelBindings;
@property (nonatomic, readonly) unsigned long long maxMeshBindings;
@property (nonatomic, readonly) unsigned long long maxObjectBindings;
@property (nonatomic, readonly) unsigned long long maxVertexBindings;
@property (nonatomic, readonly) bool mayContainDrawMeshes;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long underlyingGPUAddress;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (unsigned long long)commandByteStride;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (unsigned long long)gpuAddress;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;
- (unsigned long long)hazardTrackingMode;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (bool)inheritsBuffers;
- (bool)inheritsPipelineState;
- (id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3 resourceOptions:(unsigned long long)arg4 device:(id)arg5;
- (id)internalDispatchIDBuffer;
- (id)internalFragmentDrawIDBuffer;
- (id)internalICBBuffer;
- (id)internalMeshDrawIDBuffer;
- (id)internalObjectDrawIDBuffer;
- (id)internalVertexDrawIDBuffer;
- (unsigned long long)length;
- (unsigned long long)maxCommands;
- (unsigned long long)maxFragmentBindings;
- (unsigned long long)maxKernelBindings;
- (unsigned long long)maxMeshBindings;
- (unsigned long long)maxObjectBindings;
- (unsigned long long)maxVertexBindings;
- (bool)mayContainDrawMeshes;
- (void)onExecuteWithComputeEncoder:(id)arg1;
- (void)onExecuteWithRenderEncoder:(id)arg1;
- (void)resetAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourceOptions;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 forStage:(unsigned long long)arg4 commandIndex:(unsigned long long)arg5;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4 forStage:(unsigned long long)arg5 commandIndex:(unsigned long long)arg6;
- (void)setComputePipelineStateBuffers:(id)arg1 commandIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStateBuffers:(id)arg1 commandIndex:(unsigned long long)arg2;
- (void)setTessellationControlPointIndexBuffer:(id)arg1 offset:(unsigned long long)arg2 commandIndex:(unsigned long long)arg3;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 commandIndex:(unsigned long long)arg3;
- (unsigned long long)storageMode;
- (unsigned long long)underlyingGPUAddress;
- (void)useWithComputeEncoder:(id)arg1 usage:(unsigned long long)arg2;
- (void)useWithRenderEncoder:(id)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;

@end