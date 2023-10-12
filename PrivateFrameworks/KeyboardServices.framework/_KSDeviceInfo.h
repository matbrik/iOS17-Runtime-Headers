/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSDeviceInfo : NSObject {
    NSString * _model;
    NSString * _modelDisplayName;
    NSString * _name;
    bool  _needsUpdate;
    NSString * _swVersion;
}

@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *modelDisplayName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, copy) NSString *swVersion;

+ (id)ksDecviceWithName:(id)arg1 swVersion:(id)arg2 model:(id)arg3 modelDisplayName:(id)arg4;
+ (id)ksDecviceWithiCloudDeviceInfo:(id)arg1;
+ (id)ksDeviceWithName:(id)arg1 needsUpgrade:(bool)arg2;
+ (id)ksDeviceWithName:(id)arg1 swVersion:(id)arg2;

- (void).cxx_destruct;
- (id)model;
- (id)modelDisplayName;
- (id)name;
- (bool)needsUpdate;
- (void)setModel:(id)arg1;
- (void)setModelDisplayName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setSwVersion:(id)arg1;
- (id)swVersion;

@end