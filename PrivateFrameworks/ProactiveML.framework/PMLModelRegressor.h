/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelRegressor : NSObject <PMLPlistAndChunksSerializableProtocol> {
    PMLDenseVector * _data;
}

@property (nonatomic, readonly) int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modelRegressorFromFloat:(float)arg1;
+ (id)modelRegressorFromFloats:(id)arg1;
+ (id)regressorVectorFrom:(id)arg1;

- (void).cxx_destruct;
- (int)count;
- (id)denseVector;
- (id)init;
- (id)initModelRegressorFromFloats:(id)arg1;
- (id)initWithRegressorFromFloat:(float)arg1;
- (const float*)inverseValues;
- (id)regressorFor:(int)arg1;
- (const float*)values;

// PMLModelRegressor (PMLMobileAssetParameterGetStrategy)

- (id)initFromDictionary:(id)arg1;
- (id)toDictionary;

// PMLModelRegressor (PMLPlistAndChunksSerialization)

- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end