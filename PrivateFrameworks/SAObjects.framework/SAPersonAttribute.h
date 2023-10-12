/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *data;
@property (nonatomic, copy) NSString *dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAPerson *object;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SAAceComparable> *typedData;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)personAttribute;
+ (id)personAttributeWithDictionary:(id)arg1 context:(id)arg2;

- (id)data;
- (id)dataType;
- (id)displayText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (void)setData:(id)arg1;
- (void)setDataType:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setTypedData:(id)arg1;
- (id)typedData;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

// SAPersonAttribute (STContactAddress)

- (id)st_contactAddressValue;

@end