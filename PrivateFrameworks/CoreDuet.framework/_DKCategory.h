/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasObjectType, _DKHasPrimaryValue> {
    _DKCategoryType * _categoryType;
    long long  _integerValue;
}

@property (retain) _DKCategoryType *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long integerValue;
@property (readonly) Class superclass;

+ (id)categoryWithInteger:(long long)arg1 type:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryType;
- (long long)compareValue:(id)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteger:(long long)arg1 type:(id)arg2 cache:(id)arg3;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (id)objectType;
- (id)primaryValue;
- (void)setCategoryType:(id)arg1;
- (void)setIntegerValue:(long long)arg1;
- (id)stringValue;

// _DKCategory (MOConversion)

+ (id)_categoryFromManagedObject:(id)arg1 readMetadata:(bool)arg2 cache:(id)arg3;
+ (id)entityName;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(bool)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;

- (bool)copyToManagedObject:(id)arg1;
- (long long)typeCode;

// _DKCategory (Protobuf)

+ (id)fromPBCodable:(id)arg1;

- (id)toPBCodable;

@end