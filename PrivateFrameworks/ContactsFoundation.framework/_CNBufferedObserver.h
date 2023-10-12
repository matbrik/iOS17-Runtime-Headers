/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNBufferedObserver : NSObject <CNObserver> {
    <CNObserver> * _observer;
    CNSuspendableSchedulerDecorator * _observerScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bufferObserver:(id)arg1 schedulerProvider:(id)arg2;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 scheduler:(id)arg2;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (void)resume;

@end