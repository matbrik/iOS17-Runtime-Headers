/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Coordination.framework/Coordination
 */

@interface COMessageChannel : NSObject <COMessageChannelClientInterface> {
    bool  _activated;
    unsigned int  _baseRequestID;
    id  _cluster;
    NSString * _clusterLabel;
    COClusterRoleMonitor * _clusterRoleMonitor;
    NSXPCConnection * _lastConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _outstandingRequests;
    <COMessageChannelConnectionProvider> * _provider;
    unsigned long long  _receiveLimit;
    id /* block */  _recorder;
    NSMutableDictionary * _requestHandlers;
    <COClusterRoleMonitorConnectionProvider> * _roleMonitorConnectionProvider;
    NSMutableDictionary * _roleSnapshotsCache;
    unsigned long long  _sendLimit;
    NSMutableDictionary * _sessionConsumers;
    NSMutableDictionary * _sessionProducers;
    NSMutableDictionary * _sessionsInflight;
    NSString * _topic;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) id cluster;
@property (nonatomic, readonly, copy) NSString *clusterLabel;
@property (nonatomic, copy) COClusterRoleMonitor *clusterRoleMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSXPCConnection *lastConnection;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;
@property (nonatomic, readonly) <COMessageChannelConnectionProvider> *provider;
@property (nonatomic) unsigned long long receiveLimit;
@property (nonatomic, copy) id /* block */ recorder;
@property (nonatomic, retain) NSMutableDictionary *requestHandlers;
@property (nonatomic, readonly) <COClusterRoleMonitorConnectionProvider> *roleMonitorConnectionProvider;
@property (nonatomic, retain) NSMutableDictionary *roleSnapshotsCache;
@property (nonatomic) unsigned long long sendLimit;
@property (nonatomic, retain) NSMutableDictionary *sessionConsumers;
@property (nonatomic, retain) NSMutableDictionary *sessionProducers;
@property (nonatomic, retain) NSMutableDictionary *sessionsInflight;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *topic;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_broadcastRequest:(id)arg1 type:(id)arg2 recipientsCallback:(id /* block */)arg3 responseCompletionHandler:(id /* block */)arg4;
- (void)_callbackProducersAndConsumersAfterActivationWithError:(id)arg1;
- (void)_deliverDidEndDelegateForSession:(id)arg1 notice:(id)arg2 initiator:(id)arg3 error:(id)arg4;
- (void)_deliverDidFailToStartSessionWithMember:(id)arg1 producer:(id)arg2 error:(id)arg3;
- (void)_deliverFailedToStartSessionWithMember:(id)arg1 consumer:(id)arg2 error:(id)arg3;
- (void)_deliverSuccessfullyStartedSession:(id)arg1 withMember:(id)arg2 consumer:(id)arg3;
- (void)_deliverSuccessfullyStartedSession:(id)arg1 withResponse:(id)arg2 withMember:(id)arg3 producer:(id)arg4;
- (unsigned int)_generateRequestID;
- (void)_handleAddedMembers:(id)arg1;
- (void)_handleCapableCommand:(id)arg1 fromMember:(id)arg2 callback:(id /* block */)arg3;
- (void)_handleRemovedMembers:(id)arg1;
- (void)_handleStartCommand:(id)arg1 withMember:(id)arg2 callback:(id /* block */)arg3;
- (void)_handleStopCommand:(id)arg1 fromMember:(id)arg2 callback:(id /* block */)arg3;
- (void)_invokeResponseCallbackForInfo:(id)arg1 snapshot:(id)arg2 response:(id)arg3 error:(id)arg4;
- (void)_lostConnectionToService;
- (Class)_payloadClassFromType:(id)arg1;
- (id)_payloadTypeFromClass:(Class)arg1;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (void)_sendRequest:(id)arg1 type:(id)arg2 members:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_setupClusterMonitor;
- (void)_startSessionWithProducer:(id)arg1 member:(id)arg2;
- (void)_startSessionWithProducer:(id)arg1 member:(id)arg2 request:(id)arg3;
- (void)_submitMetricsForActivationCompletionWithError:(id)arg1;
- (void)_submitMetricsForRequest:(id)arg1 withRequestInfo:(id)arg2 withError:(id)arg3;
- (void)_submitMetricsForResponse:(id)arg1 size:(unsigned long long)arg2 withError:(id)arg3;
- (void)_submitMetricsForSession:(id)arg1 withError:(id)arg2;
- (void)_withLock:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)addSessionConsumerWithSubTopic:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;
- (void)addSessionProducerWithSubTopic:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;
- (void)broadcastRequest:(id)arg1 recipientsCallback:(id /* block */)arg2 responseCompletionHandler:(id /* block */)arg3;
- (void)broadcastRequest:(id)arg1 type:(id)arg2 recipientsCallback:(id /* block */)arg3 responseCompletionHandler:(id /* block */)arg4;
- (id)cluster;
- (id)clusterLabel;
- (id)clusterRoleMonitor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)failedToSendRequestWithID:(unsigned int)arg1 withError:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 roleMonitorConnectionProvider:(id)arg2 topic:(id)arg3 cluster:(id)arg4;
- (id)initWithTopic:(id)arg1 cluster:(id)arg2;
- (id)lastConnection;
- (id)outstandingRequests;
- (id)provider;
- (unsigned long long)receiveLimit;
- (void)receivedRecipientListForRequestID:(unsigned int)arg1 recipients:(id)arg2;
- (void)receivedRequestWithPayload:(id)arg1 payloadType:(id)arg2 requestID:(unsigned int)arg3 fromMember:(id)arg4 withCallback:(id /* block */)arg5;
- (void)receivedResponseForRequestID:(unsigned int)arg1 responsePayload:(id)arg2 responseType:(id)arg3 responseError:(id)arg4 fromMember:(id)arg5;
- (id /* block */)recorder;
- (void)registerHandler:(id /* block */)arg1 forRequestClass:(Class)arg2;
- (void)registerHandler:(id /* block */)arg1 forRequestClassType:(id)arg2;
- (id)requestHandlers;
- (id)roleMonitorConnectionProvider;
- (id)roleSnapshotsCache;
- (unsigned long long)sendLimit;
- (void)sendRequest:(id)arg1 members:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 type:(id)arg2 members:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)sendRequest:(id)arg1 type:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)sessionConsumers;
- (id)sessionProducers;
- (id)sessionsInflight;
- (void)setClusterRoleMonitor:(id)arg1;
- (void)setLastConnection:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setReceiveLimit:(unsigned long long)arg1;
- (void)setRecorder:(id /* block */)arg1;
- (void)setRequestHandlers:(id)arg1;
- (void)setRoleSnapshotsCache:(id)arg1;
- (void)setSendLimit:(unsigned long long)arg1;
- (void)setSessionConsumers:(id)arg1;
- (void)setSessionProducers:(id)arg1;
- (void)setSessionsInflight:(id)arg1;
- (void)startSessionWithProducer:(id)arg1 members:(id)arg2;
- (void)stopMessageSession:(id)arg1 withNotice:(id)arg2;
- (id)topic;
- (void)unregisterHandlerForRequestClass:(Class)arg1;
- (void)unregisterHandlerForRequestClassType:(id)arg1;

@end