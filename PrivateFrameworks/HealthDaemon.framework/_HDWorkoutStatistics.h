/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDWorkoutStatistics : NSObject {
    HKQuantity * _max;
    HKQuantity * _min;
    HKQuantity * _quantity;
    HKQuantityType * _quantityType;
}

@property (nonatomic, readonly, copy) HKQuantity *max;
@property (nonatomic, readonly, copy) HKQuantity *min;
@property (nonatomic, readonly, copy) HKQuantity *quantity;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)initWithQuantityType:(id)arg1 quantity:(id)arg2 min:(id)arg3 max:(id)arg4;
- (id)max;
- (id)min;
- (id)quantity;
- (id)quantityType;

@end