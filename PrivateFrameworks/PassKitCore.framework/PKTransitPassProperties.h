/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransitPassProperties : PKStoredValuePassProperties

@property (getter=isBlacklisted, nonatomic, readonly) bool blacklisted;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) PKFelicaPassProperties *felicaProperties;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (nonatomic, readonly, copy) NSDecimalNumber *transitBalance;
@property (nonatomic, readonly, copy) NSString *transitBalanceCurrencyCode;

- (id)transitBalance;
- (id)transitBalanceCurrencyCode;

// PKTransitPassProperties (PKFelicaPassProperties)

- (id)felicaProperties;

@end