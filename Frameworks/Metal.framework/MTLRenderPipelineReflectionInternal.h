/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {
    NSArray * _constantSamplerDescriptors;
    NSArray * _constantSamplerUniqueIdentifiers;
    struct { 
        unsigned int fragmentUsesDiscard : 1; 
        unsigned int fragmentWritesSampleMask : 1; 
        unsigned int fragmentWritesDepth : 1; 
        unsigned int vertexRegisterSpill : 1; 
        unsigned int fragmentRegisterSpill : 1; 
        unsigned int fragmentReadsFramebufferValues : 1; 
        unsigned int fragmentPunchThrough : 1; 
        unsigned int vertexWritesPointSize : 1; 
        unsigned int private2 : 1; 
        unsigned int vertexThreadInvariantRegisterSpill : 1; 
        unsigned int fragmentThreadInvariantRegisterSpill : 1; 
        unsigned int reserved : 53; 
    }  _flags;
    NSArray * _fragmentArguments;
    NSArray * _fragmentBindings;
    NSData * _fragmentPluginReturnData;
    <MTLBinding> * _imageBlockDataReturn;
    NSArray * _inferredInputs;
    NSArray * _meshArguments;
    NSArray * _meshBindings;
    NSArray * _meshBuiltInArguments;
    NSData * _meshPluginReturnData;
    NSArray * _objectArguments;
    NSArray * _objectBindings;
    NSArray * _objectBuiltInArguments;
    NSData * _objectPluginReturnData;
    NSDictionary * _performanceStatistics;
    NSArray * _postVertexDumpOutputs;
    unsigned long long  _postVertexDumpStride;
    unsigned long long  _printStyle;
    NSArray * _tileArguments;
    NSArray * _tileBindings;
    NSArray * _tileBuiltInArguments;
    unsigned int  _traceBufferIndex;
    NSArray * _vertexArguments;
    NSArray * _vertexBindings;
    NSArray * _vertexBuiltInArguments;
    NSData * _vertexPluginReturnData;
}

- (id)constantSamplerDescriptors;
- (id)constantSamplerUniqueIdentifiers;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)fragmentArguments;
- (id)fragmentBindings;
- (id)fragmentPluginReturnData;
- (id)imageBlockDataReturn;
- (id)inferredInputs;
- (id)initWithObjectData:(id)arg1 meshData:(id)arg2 fragmentData:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 53; })arg6;
- (id)initWithTileData:(id)arg1 functionType:(unsigned long long)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 53; })arg5;
- (id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 53; })arg6;
- (id)meshArguments;
- (id)meshBindings;
- (id)meshBuiltInArguments;
- (id)meshPluginReturnData;
- (id)objectArguments;
- (id)objectBindings;
- (id)objectBuiltInArguments;
- (id)objectPluginReturnData;
- (id)performanceStatistics;
- (id)postVertexDumpOutputs;
- (unsigned long long)postVertexDumpStride;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 stride:(unsigned int)arg2 count:(unsigned long long)arg3;
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;
- (void)setPerformanceStatistics:(id)arg1;
- (id)tileArguments;
- (id)tileBindings;
- (unsigned int)traceBufferIndex;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 53; })usageFlags;
- (id)vertexArguments;
- (id)vertexBindings;
- (id)vertexBuiltInArguments;
- (id)vertexPluginReturnData;

@end