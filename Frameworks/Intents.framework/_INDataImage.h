/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INDataImage : INImage {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _hashLock;
    NSData * _imageData;
    NSUUID * _sha256HashUUID;
}

@property (nonatomic, readonly, copy) NSData *imageData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_imageData;
- (bool)_isEligibleForProxying;
- (bool)_requiresRetrieval;
- (void)_retrieveImageDataWithReply:(id /* block */)arg1;
- (void)_setImageData:(id)arg1;
- (id)_sha256HashUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (bool)isEqual:(id)arg1;

// _INDataImage (INPortableImageLoader)

- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;

@end