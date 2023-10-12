/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCDADocumentSample : HKDocumentSample <HDCoding> {
    HKCDADocument * _document;
    long long  _omittedContentFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HKCDADocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)CDADocumentSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 validationError:(id*)arg5;
+ (id)_comparisonExpressionForValue:(id)arg1 operatorType:(unsigned long long)arg2;
+ (id)_globStringToRegexString:(id)arg1;
+ (bool)_isConcreteObjectClass;
+ (bool)_isValidCDAKeyPath:(id)arg1;
+ (bool)_isValidOperatorType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyPropertiesWithOmittedFlags:(long long)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6;
- (id)_fieldValueForKeyPath:(id)arg1;
- (long long)_omittedContentFlags;
- (bool)_predicateMatchForKeyPath:(id)arg1 pattern:(id)arg2;
- (void)_processDocumentData:(id)arg1 extractedFields:(id)arg2;
- (bool)_validateDocumentContentWithError:(id*)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)description;
- (id)document;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)prepareForDelivery:(id*)arg1;
- (bool)prepareForSaving:(id*)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// HKCDADocumentSample (HDCodingSupport)

+ (id)createWithCodable:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// HKCDADocumentSample (HDExtensions)

+ (Class)hd_dataEntityClass;

@end