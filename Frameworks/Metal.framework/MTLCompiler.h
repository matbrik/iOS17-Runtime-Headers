/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompiler : NSObject {
    struct MTLCompilerConnectionManager { int (**x1)(); bool x2; int x3; } * _compilerConnectionManager;
    unsigned long long  _compilerFlags;
    unsigned int  _compilerId;
    NSObject<OS_dispatch_queue> * _compilerQueue;
    _MTLDevice * _device;
    NSString * _pluginPath;
    struct shared_ptr<MTLCompilerCache> { 
        struct MTLCompilerCache {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _shaderCache;
    bool  _useOfflinePath;
}

@property (readonly) struct MTLCompilerConnectionManager { int (**x1)(); bool x2; int x3; }*compilerConnectionManager;
@property (readonly) unsigned long long compilerFlags;
@property (readonly) unsigned int compilerId;
@property (readonly) NSObject<OS_dispatch_queue> *compilerQueue;
@property (readonly, copy) NSString *pluginPath;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addComputePipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)addFunctionKeys:(struct RequiredFunctionKeys { id x1[8]; id x2[8]; }*)arg1 function:(id)arg2 driverData:(id)arg3 frameworkData:(id)arg4 compilerOptions:(int)arg5;
- (void)addLegacyCompiledOutput:(id)arg1 cachedCompiledOutput:(id)arg2 importedSymbols:(id)arg3 importedLibraries:(id)arg4 hashKey:(id)arg5 type:(BOOL)arg6 functionCache:(struct shared_ptr<MultiLevelPipelineCache> { struct MultiLevelPipelineCache {} *x1; struct __shared_weak_count {} *x2; })arg7;
- (void)addLegacyCompiledOutput:(id)arg1 importedSymbols:(id)arg2 importedLibraries:(id)arg3 hashKey:(id)arg4 type:(BOOL)arg5 functionCache:(struct shared_ptr<MultiLevelPipelineCache> { struct MultiLevelPipelineCache {} *x1; struct __shared_weak_count {} *x2; })arg6;
- (bool)addMeshRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)addRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)addTileRenderPipelineStateWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)allowLibrariesFromOtherPlatforms;
- (void)cacheLegacyCompilerData:(void*)arg1 cachedData:(void*)arg2 hashMap:(void*)arg3 libraryData:(struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*)arg4 functionCache:(struct shared_ptr<MultiLevelPipelineCache> { struct MultiLevelPipelineCache {} *x1; struct __shared_weak_count {} *x2; })arg5;
- (void)compileDynamicLibraryWithDescriptor:(id)arg1 computePipelineDescriptor:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)compileDynamicLibraryWithDescriptor:(id)arg1 computePipelineDescriptor:(id)arg2 error:(id*)arg3;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 sync:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(bool)arg5 options:(unsigned int)arg6 pipelineCache:(id)arg7 sync:(bool)arg8 completionHandler:(id /* block */)arg9;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(bool)arg5 options:(unsigned int)arg6 sync:(bool)arg7 completionHandler:(id /* block */)arg8;
- (void)compileFunction:(id)arg1 visibleFunctions:(id)arg2 privateVisibleFunctions:(id)arg3 visibleFunctionGroups:(id)arg4 frameworkData:(id)arg5 driverKeyData:(id)arg6 options:(unsigned long long)arg7 pipelineCache:(id)arg8 sync:(bool)arg9 completionHandler:(id /* block */)arg10;
- (void)compileFunction:(id)arg1 visibleFunctions:(id)arg2 visibleFunctionGroups:(id)arg3 frameworkData:(id)arg4 driverKeyData:(id)arg5 options:(unsigned long long)arg6 pipelineCache:(id)arg7 sync:(bool)arg8 completionHandler:(id /* block */)arg9;
- (void)compileFunctionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)compileFunctionRequestInternal:(id)arg1 frameworkLinking:(bool)arg2 linkDataSize:(unsigned long long)arg3 reflectionOnly:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)compileLibraryRequest:(struct MTLCompileLibraryRequestData { bool x1; id x2; unsigned int x3; id x4; id x5; })arg1 completionHandler:(id /* block */)arg2;
- (void)compileRequest:(id)arg1 binaryArchives:(id)arg2 sync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)compileRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 sync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)compileRequestInternal:(id)arg1 binaryArchives:(id)arg2 pipelineCache:(id)arg3 sync:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)compileStatelessFunctionRequest:(id)arg1 reflectionOnly:(bool)arg2 completionHandler:(id /* block */)arg3;
- (struct MTLCompilerConnectionManager { int (**x1)(); bool x2; int x3; }*)compilerConnectionManager;
- (unsigned long long)compilerFlags;
- (unsigned int)compilerId;
- (id)compilerQueue;
- (struct VariantEntry { char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; id x5; id x6; unsigned long long x7; id x8; id x9; }*)computeVariantEntryWithDescriptor:(id)arg1 airDescriptor:(id)arg2 options:(unsigned long long)arg3 serializedComputeDataDescriptor:(id)arg4 asyncCompile:(bool)arg5 pipelineCache:(id)arg6 destinationBinaryArchive:(id)arg7 computeProgram:(struct MTLProgramObject {}**)arg8 kernelDriverCompileTimeData:(id*)arg9 compileTimeStatistics:(id)arg10;
- (bool)copyShaderCacheToPath:(id)arg1;
- (void)createBinaryArchiveWithCompletionHanlder:(id /* block */)arg1;
- (id)createMeshStageAndLinkPipelineWithFragment:(void*)arg1 fragmentVariant:(id)arg2 objectFunction:(id)arg3 serializedObjectDescriptor:(id)arg4 meshFunction:(id)arg5 serializedMeshDescriptor:(id)arg6 descriptor:(id)arg7 airDescriptor:(id)arg8 destinationArchive:(id)arg9 options:(unsigned long long)arg10 reflection:(id*)arg11 compileStatistics:(id)arg12 fragmentCompileTimeData:(id)arg13 pipelineArchiverId:(id)arg14 error:(id*)arg15 completionHandler:(id /* block */)arg16;
- (id)createVertexStageAndLinkPipelineWithFragment:(void*)arg1 fragmentVariant:(id)arg2 vertexFunction:(id)arg3 serializedVertexDescriptor:(id)arg4 descriptor:(id)arg5 airDescriptor:(id)arg6 destinationArchive:(id)arg7 options:(unsigned long long)arg8 reflection:(id*)arg9 compileStatistics:(id)arg10 fragmentCompileTimeData:(id)arg11 pipelineArchiverId:(id)arg12 error:(id*)arg13 completionHandler:(id /* block */)arg14;
- (void)dealloc;
- (void)generateMachOWithID:(const char *)arg1 binaryEntries:(struct machOEntry { unsigned long long x1; struct MTLFunctionId {} *x2; id x3; id x4; id x5; id x6; }*)arg2 numEntries:(unsigned long long)arg3 machOSpecializedData:(const void*)arg4 machOType:(int)arg5 Path:(id)arg6 platform:(unsigned long long)arg7 completionHandler:(id /* block */)arg8;
- (void*)getDataForScript:(const void*)arg1 device:(id)arg2 function:(id)arg3 functionType:(unsigned long long)arg4 compilerOptions:(char **)arg5 compilerOptionsSize:(unsigned long long)arg6 compiledNextStageVariant:(id)arg7 dataSize:(unsigned long long*)arg8;
- (struct MTLFunctionId { struct { unsigned char x_1_1_1[32]; } x1; struct { unsigned char x_2_1_1[32]; } x2[4]; unsigned int x3; })getFunctionId:(id)arg1;
- (struct MTLFunctionId { struct { unsigned char x_1_1_1[32]; } x1; struct { unsigned char x_2_1_1[32]; } x2[4]; unsigned int x3; })getFunctionId:(id)arg1 airScript:(const void*)arg2 vendorPluginFunctionId:(struct { unsigned char x1[32]; }*)arg3;
- (void*)getFunctionKeyWithComputePipelineState:(id)arg1 options:(unsigned long long)arg2 unfilteredOptions:(unsigned long long)arg3 airScript:(const void*)arg4 keySize:(unsigned long long*)arg5;
- (void*)getFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 unfilteredOptions:(unsigned long long)arg3 airScript:(const void*)arg4 function:(id)arg5 functionType:(unsigned long long)arg6 compiledNextStageVariant:(id)arg7 keySize:(unsigned long long*)arg8;
- (void*)getFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 unfilteredOptions:(unsigned long long)arg3 airScript:(const void*)arg4 function:(id)arg5 functionType:(unsigned long long)arg6 compiledNextStageVariant:(id)arg7 keySize:(unsigned long long*)arg8 functionDriverData:(void**)arg9 functionDriverSize:(unsigned long long*)arg10;
- (void*)getFunctionKeyWithTileRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 unfilteredOptions:(unsigned long long)arg3 function:(id)arg4 functionType:(unsigned long long)arg5 airScript:(const void*)arg6 keySize:(unsigned long long*)arg7;
- (struct { unsigned char x1[32]; })getGPUCompilerHashForScript:(const void*)arg1 type:(unsigned long long)arg2;
- (void*)getHashForScript:(const void*)arg1 device:(id)arg2 function:(id)arg3 functionType:(unsigned long long)arg4 compilerOptions:(char **)arg5 compilerOptionsSize:(unsigned long long)arg6 compiledNextStageVariant:(id)arg7;
- (void*)getProgramObject:(id)arg1 destinationArchive:(id)arg2 sourceBinaryArchives:(id)arg3 variantKey:(const struct VariantKey { void *x1; void *x2; unsigned long long x3; unsigned long long x4; id x5; void *x6; unsigned long long x7; }*)arg4 requiredKeys:(const struct RequiredFunctionKeys { id x1[8]; id x2[8]; }*)arg5 failOnMiss:(bool)arg6;
- (void*)getProgramObjectForFunction:(id)arg1 variantKey:(const struct VariantKey { void *x1; void *x2; unsigned long long x3; unsigned long long x4; id x5; void *x6; unsigned long long x7; }*)arg2 requiredKeys:(const struct RequiredFunctionKeys { id x1[8]; id x2[8]; }*)arg3 sourceBinaryArchives:(id)arg4;
- (void*)getShaderCacheKeys;
- (struct { unsigned char x1[32]; })hashKeyForLibraryRequest:(struct MTLCompileLibraryRequestData { bool x1; id x2; unsigned int x3; id x4; id x5; }*)arg1;
- (struct { unsigned char x1[32]; })hashKeyForStatelessCompilationRequest:(id)arg1;
- (id)initWithTargetData:(id)arg1 cacheUUID:(struct { unsigned char x1[32]; }*)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5;
- (void)initializeFunctionRequestScriptAndFunctionId:(id)arg1 script:(const void*)arg2 driverCompilerOptions:(id)arg3 compiledNextStageVariant:(id)arg4;
- (bool)initializeVendorPluginFunctionId:(id)arg1 airScript:(const void*)arg2 driverCompilerOptions:(id)arg3 compiledNextStageVariant:(id)arg4 vendorPlugin:(struct { unsigned char x1[32]; }*)arg5;
- (struct { unsigned int x1; unsigned int x2; })libraryCacheStats;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 completionHandler:(id /* block */)arg5;
- (id)newComputePipelineStateWithDescriptorInternal:(id)arg1 options:(unsigned long long)arg2 pipelineCache:(id)arg3 destinationBinaryArchive:(id)arg4 reflection:(id*)arg5 error:(id*)arg6 completionHandler:(id /* block */)arg7;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 completionHandler:(id /* block */)arg5;
- (id)newRenderPipelineStateWithDescriptorInternal:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 destinationBinaryArchive:(id)arg4 error:(id*)arg5 completionHandler:(id /* block */)arg6;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 completionHandler:(id /* block */)arg5;
- (id)newRenderPipelineStateWithTileDescriptorInternal:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 destinationBinaryArchive:(id)arg4 error:(id*)arg5 completionHandler:(id /* block */)arg6;
- (struct { unsigned int x1; unsigned int x2; })pipelineCacheStats;
- (id)pipelineStateWithVariant:(struct VariantEntry { char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; id x5; id x6; unsigned long long x7; id x8; id x9; }*)arg1 descriptor:(id)arg2 options:(unsigned long long)arg3 computeProgram:(void*)arg4 kernelDriverCompileTimeData:(id)arg5 serializedComputeDataDescriptor:(id)arg6 compileTimeStatistics:(id)arg7 reflection:(id*)arg8 error:(id*)arg9 completionHandler:(id /* block */)arg10;
- (id)pluginPath;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(bool)arg3 binaryArchives:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(bool)arg3 pipelineLibrary:(id)arg4 binaryArchives:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 sync:(bool)arg3 pipelineLibrary:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)releaseCompilerOutputBlocks:(void*)arg1;
- (void)releaseCompilerOutputBlocks:(void*)arg1 hashMap:(void*)arg2;
- (void)releaseHashMaps:(void*)arg1;
- (id)renderPipelineStateWithTileVariant:(struct VariantEntry { char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; id x5; id x6; unsigned long long x7; id x8; id x9; }*)arg1 descriptor:(id)arg2 options:(unsigned long long)arg3 tileProgram:(void*)arg4 kernelDriverCompileTimeData:(id)arg5 serializedTileDataDescriptor:(id)arg6 compileTimeStatistics:(id)arg7 reflection:(id*)arg8 error:(id*)arg9 completionHandler:(id /* block */)arg10;
- (struct RequiredFunctionKeys { id x1[8]; id x2[8]; })requiredKeysForFunction:(id)arg1 variantKey:(const struct VariantKey { void *x1; void *x2; unsigned long long x3; unsigned long long x4; id x5; void *x6; unsigned long long x7; }*)arg2 frameworkData:(id)arg3 compilerOptions:(int)arg4 driverCompilerOptions:(id)arg5 airScript:(const void*)arg6 archives:(id)arg7 compiledNextStageVariant:(id)arg8;
- (void)statelessBackendCompileRequestInternal:(struct MTLCompilerFunctionRequest { int (**x1)(); int x2; id x3; unsigned int x4; id x5; id x6; unsigned int x7; unsigned int x8; unsigned int x9; id x10; id x11; unsigned long long x12; id x13; id x14; id x15; id x16; int x17; bool x18; unsigned int x19; bool x20; char *x21; void *x22; id x23; unsigned long long x24; id x25; id x26; }*)arg1 sync:(bool)arg2 compilerHash:(const struct { unsigned char x1[32]; }*)arg3 reflectionOnly:(bool)arg4 completionHandler:(id /* block */)arg5;
- (struct VariantEntry { char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; id x5; id x6; unsigned long long x7; id x8; id x9; }*)tileVariantEntryWithDescriptor:(id)arg1 airDescriptor:(id)arg2 options:(unsigned long long)arg3 serializedTileDataDescriptor:(id)arg4 asyncCompile:(bool)arg5 destinationBinaryArchive:(id)arg6 tileProgram:(struct MTLProgramObject {}**)arg7 kernelDriverCompileTimeData:(id*)arg8 compileTimeStatistics:(id)arg9;
- (void)unloadShaderCaches;
- (bool)validateLanguageAndAIRVersionForFunction:(id)arg1 completionHandler:(id /* block */)arg2;

@end