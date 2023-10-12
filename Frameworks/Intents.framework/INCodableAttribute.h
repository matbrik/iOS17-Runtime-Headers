/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableAttribute : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSCopying, NSSecureCoding> {
    Class  __relationshipValueTransformerClass;
    NSDictionary * _arraySizesBySizeClass;
    bool  _configurable;
    bool  _defaultAttribute;
    NSString * _displayName;
    NSString * _displayNameID;
    NSNumber * _displayPriorityRank;
    NSString * _entityKeypath;
    bool  _fixedSizeArray;
    INCodableDescription * _internalCodableDescription;
    NSString * _languageCode;
    INCodableAttributeMetadata * _metadata;
    long long  _modifier;
    NSArray * _promptDialogs;
    NSMutableDictionary * _promptDialogsByType;
    NSString * _propertyName;
    INCodableAttributeRelationship * _relationship;
    bool  _supportsDynamicEnumeration;
    bool  _supportsResolution;
    bool  _supportsSearch;
    NSString * _typeString;
    NSArray * _unsupportedReasons;
    long long  _windowSize;
}

@property (nonatomic, readonly) NSString *_attributeDisplayPriorityKey;
@property (nonatomic, readonly) NSString *_attributeTagKey;
@property (nonatomic, readonly) long long _attributeType;
@property (setter=_setCodableDescription:, nonatomic) INCodableDescription *_codableDescription;
@property (nonatomic, readonly) Class _relationshipValueTransformerClass;
@property (setter=_setTypeString:, nonatomic, copy) NSString *_typeString;
@property (nonatomic, readonly) Class _unsafeObjectClass;
@property (getter=isConfigurable, nonatomic) bool configurable;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultAttribute, nonatomic) bool defaultAttribute;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameID;
@property (nonatomic, copy) NSNumber *displayPriorityRank;
@property (nonatomic, copy) NSString *entityKeypath;
@property (getter=isFixedSizeArray, nonatomic) bool fixedSizeArray;
@property (nonatomic, readonly) SEL getter;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, retain) INCodableAttributeMetadata *metadata;
@property (nonatomic) long long modifier;
@property (nonatomic, readonly) Class objectClass;
@property (setter=_setPromptDialogs:, nonatomic, copy) NSArray *promptDialogs;
@property (nonatomic, copy) NSString *propertyName;
@property (nonatomic, retain) INCodableAttributeRelationship *relationship;
@property (nonatomic, readonly) Class resolutionResultClass;
@property (nonatomic, readonly) SEL setter;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDynamicEnumeration;
@property (nonatomic) bool supportsResolution;
@property (nonatomic) bool supportsSearch;
@property (setter=_setUnsupportedReasons:, nonatomic, copy) NSArray *unsupportedReasons;
@property (nonatomic, readonly) long long valueType;
@property (nonatomic) long long windowSize;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributeDisplayPriorityKey;
- (id)_attributeTagKey;
- (long long)_attributeType;
- (id)_codableDescription;
- (Class)_relationshipValueTransformerClass;
- (void)_setCodableDescription:(id)arg1;
- (void)_setPromptDialogs:(id)arg1;
- (void)_setTypeString:(id)arg1;
- (void)_setUnsupportedReasons:(id)arg1;
- (id)_typeString;
- (Class)_unsafeObjectClass;
- (long long)arraySizeForSizeClass:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)displayName;
- (id)displayNameID;
- (id)displayPriorityRank;
- (void)encodeWithCoder:(id)arg1;
- (id)entityKeypath;
- (SEL)getter;
- (unsigned long long)hash;
- (unsigned long long)indexForUnsupportedReason:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isConfigurable;
- (bool)isDefaultAttribute;
- (bool)isEqual:(id)arg1;
- (bool)isFixedSizeArray;
- (id)languageCode;
- (id)localizedDisplayName;
- (id)localizedDisplayNameWithLocalizer:(id)arg1;
- (id)metadata;
- (long long)modifier;
- (Class)objectClass;
- (id)promptDialogWithType:(unsigned long long)arg1;
- (id)promptDialogs;
- (id)propertyName;
- (id)relationship;
- (Class)resolutionResultClass;
- (void)setConfigurable:(bool)arg1;
- (void)setDefaultAttribute:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameID:(id)arg1;
- (void)setDisplayPriorityRank:(id)arg1;
- (void)setEntityKeypath:(id)arg1;
- (void)setFixedSizeArray:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModifier:(long long)arg1;
- (void)setPropertyName:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setSupportsDynamicEnumeration:(bool)arg1;
- (void)setSupportsResolution:(bool)arg1;
- (void)setSupportsSearch:(bool)arg1;
- (void)setWindowSize:(long long)arg1;
- (SEL)setter;
- (bool)supportsDynamicEnumeration;
- (bool)supportsResolution;
- (bool)supportsSearch;
- (id)unsupportedReasonWithIndex:(unsigned long long)arg1;
- (id)unsupportedReasons;
- (void)updateWithDictionary:(id)arg1;
- (long long)valueType;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;
- (long long)windowSize;

// INCodableAttribute (__INCodableAttributeINIntentParameterArraySizeSize)

- (id)__INCodableDescriptionArraySizeSizeKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterArraySizeSizeClass)

- (id)__INCodableDescriptionArraySizeSizeClassKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterArraySizes)

- (id)__INCodableDescriptionArraySizesKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterConfigurable)

- (id)__INCodableDescriptionConfigurableKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterDefault)

- (id)__INCodableDescriptionDefaultKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterDisplayName)

- (id)__INCodableDescriptionDisplayNameKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterDisplayNameID)

- (id)__INCodableDescriptionDisplayNameIDKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterDisplayPriority)

- (id)__INCodableDescriptionDisplayPriorityKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterEntityKeypath)

- (id)__INCodableDescriptionEntityKeypathKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterEnumType)

- (id)__INCodableDescriptionEnumTypeKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterFixedSizeArray)

- (id)__INCodableDescriptionFixedSizeArrayKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterMetadata)

- (id)__INCodableDescriptionMetadataKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterName)

- (id)__INCodableDescriptionNameKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterPromptDialogs)

- (id)__INCodableDescriptionPromptDialogsKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterRelationship)

- (id)__INCodableDescriptionRelationshipKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterSupportsDynamicEnumeration)

- (id)__INCodableDescriptionSupportsDynamicEnumerationKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterSupportsMultipleValues)

- (id)__INCodableDescriptionSupportsMultipleValuesKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterSupportsResolution)

- (id)__INCodableDescriptionSupportsResolutionKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterSupportsSearch)

- (id)__INCodableDescriptionSupportsSearchKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterTag)

- (id)__INCodableDescriptionTagKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterType)

- (id)__INCodableDescriptionTypeKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterUnsupportedReasons)

- (id)__INCodableDescriptionUnsupportedReasonsKey;

// INCodableAttribute (__INCodableAttributeINIntentParameterWindowSize)

- (id)__INCodableDescriptionWindowSizeKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterArraySizeSize)

- (id)__INIntentResponseCodableDescriptionArraySizeSizeKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterArraySizeSizeClass)

- (id)__INIntentResponseCodableDescriptionArraySizeSizeClassKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterArraySizes)

- (id)__INIntentResponseCodableDescriptionArraySizesKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterConfigurable)

- (id)__INIntentResponseCodableDescriptionConfigurableKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterDefault)

- (id)__INIntentResponseCodableDescriptionDefaultKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterDisplayName)

- (id)__INIntentResponseCodableDescriptionDisplayNameKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterDisplayNameID)

- (id)__INIntentResponseCodableDescriptionDisplayNameIDKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterDisplayPriority)

- (id)__INIntentResponseCodableDescriptionDisplayPriorityKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterEntityKeypath)

- (id)__INIntentResponseCodableDescriptionEntityKeypathKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterEnumType)

- (id)__INIntentResponseCodableDescriptionEnumTypeKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterFixedSizeArray)

- (id)__INIntentResponseCodableDescriptionFixedSizeArrayKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterMetadata)

- (id)__INIntentResponseCodableDescriptionMetadataKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterName)

- (id)__INIntentResponseCodableDescriptionNameKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterPromptDialogs)

- (id)__INIntentResponseCodableDescriptionPromptDialogsKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterRelationship)

- (id)__INIntentResponseCodableDescriptionRelationshipKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterSupportsDynamicEnumeration)

- (id)__INIntentResponseCodableDescriptionSupportsDynamicEnumerationKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterSupportsMultipleValues)

- (id)__INIntentResponseCodableDescriptionSupportsMultipleValuesKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterSupportsResolution)

- (id)__INIntentResponseCodableDescriptionSupportsResolutionKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterSupportsSearch)

- (id)__INIntentResponseCodableDescriptionSupportsSearchKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterTag)

- (id)__INIntentResponseCodableDescriptionTagKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterType)

- (id)__INIntentResponseCodableDescriptionTypeKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterUnsupportedReasons)

- (id)__INIntentResponseCodableDescriptionUnsupportedReasonsKey;

// INCodableAttribute (__INCodableAttributeINIntentResponseParameterWindowSize)

- (id)__INIntentResponseCodableDescriptionWindowSizeKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyArraySizeSize)

- (id)__INTypeCodableDescriptionArraySizeSizeKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyArraySizeSizeClass)

- (id)__INTypeCodableDescriptionArraySizeSizeClassKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyArraySizes)

- (id)__INTypeCodableDescriptionArraySizesKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyConfigurable)

- (id)__INTypeCodableDescriptionConfigurableKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyDefault)

- (id)__INTypeCodableDescriptionDefaultKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyDisplayName)

- (id)__INTypeCodableDescriptionDisplayNameKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyDisplayNameID)

- (id)__INTypeCodableDescriptionDisplayNameIDKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyDisplayPriority)

- (id)__INTypeCodableDescriptionDisplayPriorityKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyEntityKeypath)

- (id)__INTypeCodableDescriptionEntityKeypathKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyEnumType)

- (id)__INTypeCodableDescriptionEnumTypeKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyFixedSizeArray)

- (id)__INTypeCodableDescriptionFixedSizeArrayKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyMetadata)

- (id)__INTypeCodableDescriptionMetadataKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyName)

- (id)__INTypeCodableDescriptionNameKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyPromptDialogs)

- (id)__INTypeCodableDescriptionPromptDialogsKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyRelationship)

- (id)__INTypeCodableDescriptionRelationshipKey;

// INCodableAttribute (__INCodableAttributeINTypePropertySupportsDynamicEnumeration)

- (id)__INTypeCodableDescriptionSupportsDynamicEnumerationKey;

// INCodableAttribute (__INCodableAttributeINTypePropertySupportsMultipleValues)

- (id)__INTypeCodableDescriptionSupportsMultipleValuesKey;

// INCodableAttribute (__INCodableAttributeINTypePropertySupportsResolution)

- (id)__INTypeCodableDescriptionSupportsResolutionKey;

// INCodableAttribute (__INCodableAttributeINTypePropertySupportsSearch)

- (id)__INTypeCodableDescriptionSupportsSearchKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyTag)

- (id)__INTypeCodableDescriptionTagKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyType)

- (id)__INTypeCodableDescriptionTypeKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyUnsupportedReasons)

- (id)__INTypeCodableDescriptionUnsupportedReasonsKey;

// INCodableAttribute (__INCodableAttributeINTypePropertyWindowSize)

- (id)__INTypeCodableDescriptionWindowSizeKey;

@end