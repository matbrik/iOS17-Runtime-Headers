/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLQueryItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _value;
}

@property (readonly) NSString *name;
@property (readonly) NSString *value;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)queryItemWithName:(id)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)value;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

// NSURLQueryItem (AppleMediaServices)

+ (id)queryItemsFromDictionary:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

// NSURLQueryItem (GEOMapURLParser)

- (id)_geo_unescapedValue;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

// NSURLQueryItem (TelephonyUtilities)

+ (id)queryItemForHandleType:(long long)arg1;
+ (id)queryItemValueForHandleType:(long long)arg1;

@end