/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {
    SCNGeometry * _geometry;
    struct __C3DLOD { } * _lod;
    long long  _mode;
}

@property (readonly) SCNGeometry *geometry;
@property (readonly) double screenSpaceRadius;
@property (readonly) double worldSpaceDistance;

+ (id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(double)arg2;
+ (id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(double)arg2;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (void)_customEncodingOfSCNLevelOfDetail:(id)arg1;
- (void)_didDecodeSCNLevelOfDetail:(id)arg1;
- (void)_setupWithGeometry:(id)arg1 thresholdMode:(long long)arg2 value:(double)arg3;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geometry;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 lod:(struct __C3DLOD { }*)arg3;
- (id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 thresholdValue:(id)arg3;
- (double)screenSpaceRadius;
- (long long)thresholdMode;
- (id)thresholdValue;
- (double)worldSpaceDistance;

@end