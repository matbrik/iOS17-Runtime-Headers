/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoHardwareDumpWriter : NSObject {
    void * _dumpFile;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _registrationLock;
    struct __CFSet { } * _sources;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;

@end