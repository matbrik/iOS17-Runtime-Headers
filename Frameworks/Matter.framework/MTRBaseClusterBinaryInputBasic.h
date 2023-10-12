/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRBaseClusterBinaryInputBasic : MTRCluster {
    MTRBaseDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRBaseDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

// MTRBaseClusterBinaryInputBasic (null)

+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeActiveTextWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeActiveTextWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeApplicationTypeWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeApplicationTypeWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeDescriptionWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeDescriptionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeInactiveTextWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeInactiveTextWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeOutOfServiceWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeOutOfServiceWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributePolarityWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributePolarityWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributePresentValueWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributePresentValueWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeReliabilityWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeReliabilityWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeStatusFlagsWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeStatusFlagsWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeActiveTextWithCompletion:(id /* block */)arg1;
- (void)readAttributeActiveTextWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeApplicationTypeWithCompletion:(id /* block */)arg1;
- (void)readAttributeApplicationTypeWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeDescriptionWithCompletion:(id /* block */)arg1;
- (void)readAttributeDescriptionWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeInactiveTextWithCompletion:(id /* block */)arg1;
- (void)readAttributeInactiveTextWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeOutOfServiceWithCompletion:(id /* block */)arg1;
- (void)readAttributeOutOfServiceWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributePolarityWithCompletion:(id /* block */)arg1;
- (void)readAttributePolarityWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributePresentValueWithCompletion:(id /* block */)arg1;
- (void)readAttributePresentValueWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeReliabilityWithCompletion:(id /* block */)arg1;
- (void)readAttributeReliabilityWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeStatusFlagsWithCompletion:(id /* block */)arg1;
- (void)readAttributeStatusFlagsWithCompletionHandler:(id /* block */)arg1;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeActiveTextWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeActiveTextWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeApplicationTypeWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeApplicationTypeWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeAttributeListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeClusterRevisionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeDescriptionWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeDescriptionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeFeatureMapWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeInactiveTextWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeInactiveTextWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeOutOfServiceWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeOutOfServiceWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributePolarityWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributePolarityWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributePresentValueWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributePresentValueWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeReliabilityWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeReliabilityWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeStatusFlagsWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeStatusFlagsWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)writeAttributeActiveTextWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeActiveTextWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeActiveTextWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)writeAttributeActiveTextWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeAttributeDescriptionWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeDescriptionWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeDescriptionWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)writeAttributeDescriptionWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeAttributeInactiveTextWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeInactiveTextWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeInactiveTextWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)writeAttributeInactiveTextWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeAttributeOutOfServiceWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeOutOfServiceWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeOutOfServiceWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)writeAttributeOutOfServiceWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeAttributePresentValueWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributePresentValueWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributePresentValueWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)writeAttributePresentValueWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeAttributeReliabilityWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)writeAttributeReliabilityWithValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeAttributeReliabilityWithValue:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)writeAttributeReliabilityWithValue:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;

@end