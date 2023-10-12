/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMDisplayAlwaysOn : BMEventBase <BMStoreData> {
    NSArray * _blockingPolicies;
    int  _resolvedState;
    int  _userSetState;
}

@property (nonatomic, readonly) NSArray *blockingPolicies;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int resolvedState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int userSetState;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_blockingPoliciesJSONArray;
- (id)blockingPolicies;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUserSetState:(int)arg1 resolvedState:(int)arg2 blockingPolicies:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)resolvedState;
- (id)serialize;
- (int)userSetState;
- (void)writeTo:(id)arg1;

@end