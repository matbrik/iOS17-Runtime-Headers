/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSContentTypeAttribute : NSObject <MSCMSAttributeCoder> {
    MSOID * _contentType;
}

@property (readonly, retain) MSOID *attributeType;
@property (retain) MSOID *contentType;

+ (id)contentTypeAttributeWithOID:(id)arg1;

- (void).cxx_destruct;
- (id)attributeType;
- (id)contentType;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithOID:(id)arg1;
- (void)setContentType:(id)arg1;

@end