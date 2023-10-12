/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSJSONSerialization : NSObject

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)JSONObjectWithStream:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)isValidJSONObject:(id)arg1;
+ (long long)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)init;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

// NSJSONSerialization (HealthKit)

+ (id)hk_JSONObjectFromFHIRData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)hk_JSONObjectSecureCodingClasses;
+ (id)hk_stringForDisplayFromFHIRData:(id)arg1;
+ (id)hk_stringForDisplayFromFHIRJSONObject:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

// NSJSONSerialization (BRAdditions)

+ (id)_jsonifyObject:(id)arg1;
+ (id)jsonStringFromDictionary:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

// NSJSONSerialization (BRAdditions)

+ (id)_jsonifyObject:(id)arg1;
+ (id)jsonStringFromDictionary:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

// NSJSONSerialization (RTExtensions)

+ (id)JSONStringFromNSDictionary:(id)arg1 error:(id*)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

// NSJSONSerialization (BRAdditions)

+ (id)_jsonifyObject:(id)arg1;
+ (id)jsonStringFromDictionary:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end