/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventStatsCounterInternal : NSObject {
    unsigned long long * _counters;
    NSString * _domain;
    NSString * _eventName;
    NSString * _eventType;
    bool  _hasResult;
    bool  _hasType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _numCounters;
    NSArray * _typeValues;
}

- (void).cxx_destruct;
- (void)dealloc;

@end