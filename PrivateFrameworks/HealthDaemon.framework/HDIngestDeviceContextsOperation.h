/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIngestDeviceContextsOperation : HDJournalableOperation {
    HDAssertion * _assertion;
    NSString * _containerIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessibilityAssertion:(id)arg1 containerIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)transactionContext;

@end