/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLUTIAnalyzer : NSObject <NSSecureCoding> {
    NSString * _contentType;
}

@property (readonly) NSString *contentType;

+ (id)UTIForURL:(id)arg1;
+ (id)contentTypeForURL:(id)arg1;
+ (bool)isContentTypeAudioOnly:(id)arg1;
+ (bool)isTypeAudioOnly:(id)arg1;
+ (id)knownExtensions;
+ (id)privateContentTypeFromFileName:(id)arg1;
+ (id)removeSpacesFromString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentType:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isAudioOnly;

@end