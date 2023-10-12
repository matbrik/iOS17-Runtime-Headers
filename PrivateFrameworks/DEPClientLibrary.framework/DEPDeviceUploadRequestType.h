/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DEPClientLibrary.framework/DEPClientLibrary
 */

@interface DEPDeviceUploadRequestType : NSObject <NSSecureCoding> {
    NSString * _code;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)code;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCode:(id)arg1 name:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)name;

@end