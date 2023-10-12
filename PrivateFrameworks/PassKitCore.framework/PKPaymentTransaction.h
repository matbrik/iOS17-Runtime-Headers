/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSString * _accountIdentifier;
    long long  _accountType;
    long long  _adjustmentType;
    long long  _adjustmentTypeReason;
    NSString * _administrativeArea;
    NSString * _altDSID;
    NSDecimalNumber * _amount;
    NSDecimalNumber * _amountAddedToAuth;
    NSArray * _amountModifiers;
    NSArray * _amounts;
    unsigned long long  _associatedFeatureIdentifier;
    PKPayLaterFinancingPlan * _associatedFinancingPlan;
    NSArray * _associatedStatementIdentifiers;
    NSString * _authNetworkData;
    PKTransactionAuthenticationContext * _authenticationContext;
    NSArray * _awards;
    NSString * _barcodeIdentifier;
    NSString * _cardIdentifier;
    NSString * _cardNumberSuffix;
    unsigned long long  _cardType;
    NSNumber * _cityCode;
    NSString * _clearingNetworkData;
    bool  _coarseLocation;
    NSString * _currencyCode;
    bool  _deviceScoreIdentifiersRequired;
    bool  _deviceScoreIdentifiersSubmitted;
    NSString * _dpanIdentifier;
    bool  _enRoute;
    NSString * _endStation;
    NSData * _endStationCode;
    double  _endStationLatitude;
    double  _endStationLongitude;
    NSDate * _expirationDate;
    PKPaymentTransactionFees * _fees;
    PKPaymentTransactionForeignExchangeInformation * _foreignExchangeInformation;
    bool  _fuzzyMatched;
    bool  _hasAdditionalOffers;
    bool  _hasAssociatedPaymentApplication;
    bool  _hasNotificationServiceData;
    NSString * _identifier;
    PKCreditInstallmentPlanPayment * _installmentPayment;
    PKCreditInstallmentPlan * _installmentPlan;
    bool  _interestReassessment;
    bool  _isCloudKitArchived;
    NSNumber * _isMerchantTokenTransaction;
    NSString * _issueReportIdentifier;
    NSDate * _lastMerchantReprocessingDate;
    NSString * _lifecycleIdentifier;
    NSString * _locality;
    double  _locationAltitude;
    NSDate * _locationDate;
    double  _locationHorizontalAccuracy;
    double  _locationLatitude;
    double  _locationLongitude;
    double  _locationVerticalAccuracy;
    PKMerchant * _merchant;
    NSString * _merchantProvidedDescription;
    NSString * _merchantProvidedTitle;
    NSDictionary * _metadata;
    NSDecimalNumber * _nominalAmount;
    bool  _originatedByDevice;
    NSString * _panIdentifier;
    NSString * _paymentHash;
    NSArray * _payments;
    NSString * _peerPaymentCounterpartHandle;
    NSString * _peerPaymentMemo;
    NSDate * _peerPaymentMessageReceivedDate;
    long long  _peerPaymentType;
    NSArray * _plans;
    NSDecimalNumber * _primaryFundingSourceAmount;
    NSString * _primaryFundingSourceCurrencyCode;
    NSString * _primaryFundingSourceDescription;
    bool  _processedForLocation;
    bool  _processedForMerchantCleanup;
    bool  _processedForStations;
    NSSet * _questions;
    NSString * _receiptIdentifier;
    NSString * _receiptProviderIdentifier;
    NSURL * _receiptProviderURL;
    bool  _recurring;
    PKPeerPaymentRecurringPayment * _recurringPeerPayment;
    PKAccountEvent * _redemptionEvent;
    unsigned long long  _redemptionType;
    NSString * _referenceIdentifier;
    PKTransactionReleasedData * _releasedData;
    NSUUID * _requestDeviceScoreIdentifier;
    bool  _requiresLocation;
    bool  _requiresMerchantReprocessing;
    PKPaymentTransactionRewards * _rewards;
    unsigned long long  _rewardsEligibilityReason;
    PKPaymentTransactionRewards * _rewardsInProgress;
    NSDecimalNumber * _rewardsTotalAmount;
    NSString * _rewardsTotalCurrencyCode;
    NSDecimalNumber * _secondaryFundingSourceAmount;
    NSString * _secondaryFundingSourceCurrencyCode;
    NSString * _secondaryFundingSourceDPANSuffix;
    NSString * _secondaryFundingSourceDescription;
    NSString * _secondaryFundingSourceFPANIdentifier;
    long long  _secondaryFundingSourceNetwork;
    long long  _secondaryFundingSourceType;
    NSUUID * _sendDeviceScoreIdentifier;
    NSString * _serviceIdentifier;
    NSOrderedSet * _servicingEvents;
    bool  _shouldSuppressDate;
    NSString * _startStation;
    NSData * _startStationCode;
    double  _startStationLatitude;
    double  _startStationLongitude;
    NSString * _stationCodeProvider;
    NSDecimalNumber * _subtotalAmount;
    unsigned long long  _suppressBehavior;
    bool  _suppressNotifications;
    long long  _technologyType;
    NSTimeZone * _timeZone;
    NSDate * _transactionDate;
    long long  _transactionDeclinedReason;
    unsigned long long  _transactionSource;
    NSString * _transactionSourceIdentifier;
    long long  _transactionStatus;
    NSDate * _transactionStatusChangedDate;
    long long  _transactionType;
    NSArray * _transfers;
    unsigned long long  _transitModifiers;
    long long  _transitType;
    unsigned long long  _updateReasons;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (nonatomic) long long adjustmentType;
@property (nonatomic) long long adjustmentTypeReason;
@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSDecimalNumber *amountAddedToAuth;
@property (nonatomic, retain) NSArray *amountModifiers;
@property (nonatomic, copy) NSArray *amounts;
@property (nonatomic, readonly) NSSet *answeredQuestionsOnThisDevice;
@property (nonatomic) unsigned long long associatedFeatureIdentifier;
@property (nonatomic, retain) PKPayLaterFinancingPlan *associatedFinancingPlan;
@property (nonatomic, readonly) NSString *associatedReceiptUniqueID;
@property (nonatomic, copy) NSArray *associatedStatementIdentifiers;
@property (nonatomic, copy) NSString *authNetworkData;
@property (nonatomic, retain) PKTransactionAuthenticationContext *authenticationContext;
@property (nonatomic, retain) NSArray *awards;
@property (nonatomic, copy) NSString *barcodeIdentifier;
@property (nonatomic, retain) NSString *cardIdentifier;
@property (nonatomic, retain) NSString *cardNumberSuffix;
@property (nonatomic) unsigned long long cardType;
@property (nonatomic, copy) NSNumber *cityCode;
@property (nonatomic, copy) NSString *clearingNetworkData;
@property (getter=isCoarseLocation, nonatomic) bool coarseLocation;
@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (nonatomic, copy) NSString *currencyCode;
@property (getter=isDeletable, nonatomic, readonly) bool deletable;
@property (nonatomic) bool deviceScoreIdentifiersRequired;
@property (nonatomic) bool deviceScoreIdentifiersSubmitted;
@property (nonatomic, readonly) NSString *displayLocation;
@property (nonatomic, readonly) NSDate *disputeLastUpdatedDate;
@property (nonatomic, readonly) NSDate *disputeOpenDate;
@property (nonatomic, readonly) unsigned long long disputeStatus;
@property (nonatomic, readonly) PKAccountServicingEventStatusDetails *disputeStatusDetails;
@property (nonatomic, readonly) unsigned long long disputeType;
@property (setter=setDPANIdentifier:, nonatomic, retain) NSString *dpanIdentifier;
@property (nonatomic, readonly) unsigned long long effectiveTransactionSource;
@property (nonatomic) bool enRoute;
@property (nonatomic, copy) NSString *endStation;
@property (nonatomic, copy) NSData *endStationCode;
@property (nonatomic) double endStationLatitude;
@property (nonatomic, retain) CLLocation *endStationLocation;
@property (nonatomic) double endStationLongitude;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) unsigned long long featureIdentifier;
@property (nonatomic, retain) PKPaymentTransactionFees *fees;
@property (nonatomic, readonly) FKPaymentTransaction *fkPaymentTransaction;
@property (nonatomic, retain) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation;
@property (nonatomic, readonly) NSString *formattedBalanceAdjustmentAbsoluteAmount;
@property (nonatomic, readonly) NSString *formattedBalanceAdjustmentAmount;
@property (nonatomic, readonly) NSString *formattedBalanceAdjustmentSubtotalAmount;
@property (nonatomic, readonly) bool fullyProcessed;
@property (getter=isFuzzyMatched, nonatomic) bool fuzzyMatched;
@property (nonatomic) bool hasAdditionalOffers;
@property (nonatomic) bool hasAssociatedPaymentApplication;
@property (nonatomic, readonly) bool hasBackingData;
@property (nonatomic, readonly) bool hasEffectiveTransactionSource;
@property (nonatomic) bool hasNotificationServiceData;
@property (nonatomic, readonly) bool hasTransactionSource;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool impactsPromotionProgress;
@property (nonatomic, retain) PKCreditInstallmentPlanPayment *installmentPayment;
@property (nonatomic, retain) PKCreditInstallmentPlan *installmentPlan;
@property (nonatomic) bool interestReassessment;
@property (nonatomic) bool isCloudKitArchived;
@property (setter=setIsMerchantTokenTransaction:, nonatomic, retain) NSNumber *isMerchantTokenTransaction;
@property (nonatomic, copy) NSString *issueReportIdentifier;
@property (nonatomic, retain) NSDate *lastMerchantReprocessingDate;
@property (nonatomic, copy) NSString *lifecycleIdentifier;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) double locationAltitude;
@property (nonatomic, retain) NSDate *locationDate;
@property (nonatomic) double locationHorizontalAccuracy;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) double locationVerticalAccuracy;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic, copy) NSString *merchantProvidedDescription;
@property (nonatomic, copy) NSString *merchantProvidedTitle;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSDecimalNumber *nominalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *nominalCurrencyAmount;
@property (nonatomic) bool originatedByDevice;
@property (setter=setPANIdentifier:, nonatomic, retain) NSString *panIdentifier;
@property (nonatomic, copy) NSString *paymentHash;
@property (nonatomic, retain) NSArray *payments;
@property (nonatomic, copy) NSString *peerPaymentCounterpartHandle;
@property (nonatomic, copy) NSString *peerPaymentMemo;
@property (nonatomic, copy) NSDate *peerPaymentMessageReceivedDate;
@property (nonatomic) long long peerPaymentStatus;
@property (nonatomic) long long peerPaymentType;
@property (getter=hasPendingAmounts, nonatomic, readonly) bool pendingAmounts;
@property (nonatomic, copy) NSArray *plans;
@property (nonatomic, readonly) CLLocation *preferredLocation;
@property (nonatomic, copy) NSDecimalNumber *primaryFundingSourceAmount;
@property (nonatomic, readonly) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property (nonatomic, copy) NSString *primaryFundingSourceCurrencyCode;
@property (nonatomic, copy) NSString *primaryFundingSourceDescription;
@property (nonatomic) bool processedForLocation;
@property (nonatomic) bool processedForMerchantCleanup;
@property (nonatomic) bool processedForStations;
@property (nonatomic, retain) NSSet *questions;
@property (nonatomic, copy) NSString *receiptIdentifier;
@property (nonatomic, copy) NSString *receiptProviderIdentifier;
@property (nonatomic, retain) NSURL *receiptProviderURL;
@property (getter=isRecurring, nonatomic) bool recurring;
@property (nonatomic, retain) PKPeerPaymentRecurringPayment *recurringPeerPayment;
@property (nonatomic, retain) PKAccountEvent *redemptionEvent;
@property (nonatomic) unsigned long long redemptionType;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, retain) PKTransactionReleasedData *releasedData;
@property (nonatomic, copy) NSUUID *requestDeviceScoreIdentifier;
@property (nonatomic) bool requiresLocation;
@property (nonatomic) bool requiresMerchantReprocessing;
@property (nonatomic, readonly) bool reviewed;
@property (nonatomic, retain) PKPaymentTransactionRewards *rewards;
@property (nonatomic) unsigned long long rewardsEligibilityReason;
@property (nonatomic, retain) PKPaymentTransactionRewards *rewardsInProgress;
@property (nonatomic, retain) NSDecimalNumber *rewardsTotalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *rewardsTotalCurrencyAmount;
@property (nonatomic, retain) NSString *rewardsTotalCurrencyCode;
@property (nonatomic, copy) NSDecimalNumber *secondaryFundingSourceAmount;
@property (nonatomic, readonly) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property (nonatomic, copy) NSString *secondaryFundingSourceCurrencyCode;
@property (nonatomic, copy) NSString *secondaryFundingSourceDPANSuffix;
@property (nonatomic, copy) NSString *secondaryFundingSourceDescription;
@property (nonatomic, copy) NSString *secondaryFundingSourceFPANIdentifier;
@property (nonatomic) long long secondaryFundingSourceNetwork;
@property (nonatomic) long long secondaryFundingSourceType;
@property (nonatomic, copy) NSUUID *sendDeviceScoreIdentifier;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, retain) NSOrderedSet *servicingEvents;
@property (nonatomic) bool shouldSuppressDate;
@property (nonatomic, copy) NSString *startStation;
@property (nonatomic, copy) NSData *startStationCode;
@property (nonatomic) double startStationLatitude;
@property (nonatomic, retain) CLLocation *startStationLocation;
@property (nonatomic) double startStationLongitude;
@property (nonatomic, copy) NSString *stationCodeProvider;
@property (nonatomic, copy) NSDecimalNumber *subtotalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *subtotalCurrencyAmount;
@property (nonatomic, readonly) bool supportsFuzzyMatching;
@property (nonatomic) unsigned long long suppressBehavior;
@property (nonatomic) bool suppressNotifications;
@property (nonatomic) long long technologyType;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSDate *transactionDate;
@property (nonatomic) long long transactionDeclinedReason;
@property (nonatomic) unsigned long long transactionSource;
@property (nonatomic, copy) NSString *transactionSourceIdentifier;
@property (nonatomic) long long transactionStatus;
@property (nonatomic, copy) NSDate *transactionStatusChangedDate;
@property (nonatomic) long long transactionType;
@property (nonatomic, retain) NSArray *transfers;
@property (nonatomic) unsigned long long transitModifiers;
@property (nonatomic) long long transitType;
@property (nonatomic, readonly) NSSet *unansweredQuestions;
@property (nonatomic, readonly) bool updateReasonIsInitialDownload;
@property (nonatomic, readonly) unsigned long long updateReasons;

+ (id)formattedBalanceAdjustmentForAmount:(id)arg1 transactionType:(long long)arg2 adjustmentType:(long long)arg3 peerPaymentType:(long long)arg4;
+ (id)formattedBalanceAdjustmentForCurrencyAmount:(id)arg1 transactionType:(long long)arg2 adjustmentType:(long long)arg3 peerPaymentType:(long long)arg4 featureIdentifier:(unsigned long long)arg5 pending:(bool)arg6;
+ (id)formattedBalanceAdjustmentForTransactionAmount:(id)arg1 transactionType:(long long)arg2 adjustmentType:(long long)arg3 peerPaymentType:(long long)arg4 featureIdentifier:(unsigned long long)arg5;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 unitDictionary:(id)arg3 balanceLabelDictionary:(id)arg4 planLabelDictionary:(id)arg5 hasNotificationServiceData:(bool)arg6;
+ (id)recordNamePrefix;
+ (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1 serviceIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)transactionNotificationStatusStringForTransaction:(id)arg1 personContact:(id)arg2;
+ (bool)updateReasonIsInitialDownload:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_commutePlanInformationForPass:(id)arg1;
- (void)_encodeDeviceDataWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)_encodeServerDataWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (id)_formatBalanceAdjustmentAmount:(id)arg1;
- (id)_formatBalanceAdjustmentTransactionAmount:(id)arg1;
- (id)_latestDisputeEvent;
- (id)_preformattedStringForMultipleAmounts;
- (id)_preformattedStringForMultiplePlans;
- (bool)_supportsServerFundingDescription;
- (id)_transactionSourceString;
- (id)_transactionTypeString;
- (id)_transitSubtypeString;
- (id)accountIdentifier;
- (long long)accountType;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (long long)adjustmentType;
- (long long)adjustmentTypeReason;
- (id)administrativeArea;
- (id)altDSID;
- (id)amount;
- (id)amountAddedToAuth;
- (id)amountModifiers;
- (id)amounts;
- (void)answeredQuestion:(unsigned long long)arg1;
- (id)answeredQuestionsOnThisDevice;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (unsigned long long)associatedFeatureIdentifier;
- (id)associatedFinancingPlan;
- (id)associatedReceiptUniqueID;
- (id)associatedStatementIdentifiers;
- (id)authNetworkData;
- (id)authenticationContext;
- (id)awards;
- (id)barcodeIdentifier;
- (id)cardIdentifier;
- (id)cardNumberSuffix;
- (unsigned long long)cardType;
- (id)cityCode;
- (id)clearingNetworkData;
- (id)currencyAmount;
- (id)currencyCode;
- (id)description;
- (bool)deviceScoreIdentifiersRequired;
- (bool)deviceScoreIdentifiersSubmitted;
- (id)dictionaryOfFormattedMultipleAmountTotalsByRealCurrency;
- (id)dictionaryRepresentation;
- (id)displayLocation;
- (id)disputeLastUpdatedDate;
- (id)disputeOpenDate;
- (unsigned long long)disputeStatus;
- (id)disputeStatusDetails;
- (unsigned long long)disputeType;
- (id)dpanIdentifier;
- (unsigned long long)effectiveTransactionSource;
- (bool)enRoute;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)endStation;
- (id)endStationCode;
- (double)endStationLatitude;
- (id)endStationLocation;
- (double)endStationLongitude;
- (id)expirationDate;
- (unsigned long long)featureIdentifier;
- (id)fees;
- (id)foreignExchangeInformation;
- (id)formattedAwards;
- (id)formattedBalanceAdjustmentAbsoluteAmount;
- (id)formattedBalanceAdjustmentAmount;
- (id)formattedBalanceAdjustmentSubtotalAmount;
- (id)formattedStringForMultipleAmountsForPass:(id)arg1;
- (id)formattedTransitTransactionMessageForPass:(id)arg1 suppressNoChargeAmount:(bool)arg2;
- (bool)fullyProcessed;
- (bool)hasAdditionalOffers;
- (bool)hasAssociatedPaymentApplication;
- (bool)hasBackingData;
- (bool)hasCloudArchivableDeviceData;
- (bool)hasEffectiveTransactionSource;
- (bool)hasNotificationServiceData;
- (bool)hasPendingAmounts;
- (bool)hasTransactionSource;
- (unsigned long long)hash;
- (id)identifier;
- (bool)impactsPromotionProgress;
- (id)init;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)installmentPayment;
- (id)installmentPlan;
- (bool)interestReassessment;
- (bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (bool)isCloudKitArchived;
- (bool)isCoarseLocation;
- (bool)isDeletable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentTransaction:(id)arg1;
- (bool)isFuzzyMatched;
- (id)isMerchantTokenTransaction;
- (bool)isRecurring;
- (bool)isZeroTransaction;
- (id)issueReportIdentifier;
- (unsigned long long)itemType;
- (id)lastMerchantReprocessingDate;
- (id)lifecycleIdentifier;
- (id)locality;
- (id)location;
- (double)locationAltitude;
- (id)locationDate;
- (double)locationHorizontalAccuracy;
- (double)locationLatitude;
- (double)locationLongitude;
- (double)locationVerticalAccuracy;
- (id)merchant;
- (id)merchantProvidedDescription;
- (id)merchantProvidedTitle;
- (id)metadata;
- (id)nominalAmount;
- (id)nominalCurrencyAmount;
- (bool)originatedByDevice;
- (id)panIdentifier;
- (id)paymentHash;
- (id)payments;
- (id)peerPaymentCounterpartHandle;
- (id)peerPaymentMemo;
- (id)peerPaymentMessageReceivedDate;
- (long long)peerPaymentStatus;
- (long long)peerPaymentType;
- (id)plans;
- (id)preferredLocation;
- (id)primaryFundingSourceAmount;
- (id)primaryFundingSourceCurrencyAmount;
- (id)primaryFundingSourceCurrencyCode;
- (id)primaryFundingSourceDescription;
- (id)primaryIdentifier;
- (bool)processedForLocation;
- (bool)processedForMerchantCleanup;
- (bool)processedForStations;
- (id)questions;
- (id)receiptIdentifier;
- (id)receiptProviderIdentifier;
- (id)receiptProviderURL;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (id)recurringPeerPayment;
- (id)redemptionEvent;
- (unsigned long long)redemptionType;
- (id)referenceIdentifier;
- (id)releasedData;
- (id)requestDeviceScoreIdentifier;
- (bool)requiresLocation;
- (bool)requiresMerchantReprocessing;
- (bool)reviewed;
- (id)rewards;
- (unsigned long long)rewardsEligibilityReason;
- (id)rewardsInProgress;
- (id)rewardsTotalAmount;
- (id)rewardsTotalCurrencyAmount;
- (id)rewardsTotalCurrencyCode;
- (id)secondaryFundingSourceAmount;
- (id)secondaryFundingSourceCurrencyAmount;
- (id)secondaryFundingSourceCurrencyCode;
- (id)secondaryFundingSourceDPANSuffix;
- (id)secondaryFundingSourceDescription;
- (id)secondaryFundingSourceFPANIdentifier;
- (long long)secondaryFundingSourceNetwork;
- (long long)secondaryFundingSourceType;
- (id)sendDeviceScoreIdentifier;
- (id)serviceIdentifier;
- (id)servicingEvents;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(long long)arg1;
- (void)setAdjustmentType:(long long)arg1;
- (void)setAdjustmentTypeReason:(long long)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setAmountAddedToAuth:(id)arg1;
- (void)setAmountModifiers:(id)arg1;
- (void)setAmounts:(id)arg1;
- (void)setAssociatedFeatureIdentifier:(unsigned long long)arg1;
- (void)setAssociatedFinancingPlan:(id)arg1;
- (void)setAssociatedStatementIdentifiers:(id)arg1;
- (void)setAuthNetworkData:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setAwards:(id)arg1;
- (void)setBarcodeIdentifier:(id)arg1;
- (void)setCardIdentifier:(id)arg1;
- (void)setCardNumberSuffix:(id)arg1;
- (void)setCardType:(unsigned long long)arg1;
- (void)setCityCode:(id)arg1;
- (void)setClearingNetworkData:(id)arg1;
- (void)setCoarseLocation:(bool)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDPANIdentifier:(id)arg1;
- (void)setDeviceScoreIdentifiersRequired:(bool)arg1;
- (void)setDeviceScoreIdentifiersSubmitted:(bool)arg1;
- (void)setEnRoute:(bool)arg1;
- (void)setEndStation:(id)arg1;
- (void)setEndStationCode:(id)arg1;
- (void)setEndStationLatitude:(double)arg1;
- (void)setEndStationLocation:(id)arg1;
- (void)setEndStationLongitude:(double)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFees:(id)arg1;
- (void)setForeignExchangeInformation:(id)arg1;
- (void)setFuzzyMatched:(bool)arg1;
- (void)setHasAdditionalOffers:(bool)arg1;
- (void)setHasAssociatedPaymentApplication:(bool)arg1;
- (void)setHasNotificationServiceData:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInstallmentPayment:(id)arg1;
- (void)setInstallmentPlan:(id)arg1;
- (void)setInterestReassessment:(bool)arg1;
- (void)setIsCloudKitArchived:(bool)arg1;
- (void)setIsMerchantTokenTransaction:(id)arg1;
- (void)setIssueReportIdentifier:(id)arg1;
- (void)setLastMerchantReprocessingDate:(id)arg1;
- (void)setLifecycleIdentifier:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationAltitude:(double)arg1;
- (void)setLocationDate:(id)arg1;
- (void)setLocationHorizontalAccuracy:(double)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setLocationVerticalAccuracy:(double)arg1;
- (void)setMerchant:(id)arg1;
- (void)setMerchantProvidedDescription:(id)arg1;
- (void)setMerchantProvidedTitle:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNominalAmount:(id)arg1;
- (void)setOriginatedByDevice:(bool)arg1;
- (void)setPANIdentifier:(id)arg1;
- (void)setPaymentHash:(id)arg1;
- (void)setPayments:(id)arg1;
- (void)setPeerPaymentCounterpartHandle:(id)arg1;
- (void)setPeerPaymentMemo:(id)arg1;
- (void)setPeerPaymentMessageReceivedDate:(id)arg1;
- (void)setPeerPaymentStatus:(long long)arg1;
- (void)setPeerPaymentType:(long long)arg1;
- (void)setPlans:(id)arg1;
- (void)setPrimaryFundingSourceAmount:(id)arg1;
- (void)setPrimaryFundingSourceCurrencyCode:(id)arg1;
- (void)setPrimaryFundingSourceDescription:(id)arg1;
- (void)setProcessedForLocation:(bool)arg1;
- (void)setProcessedForMerchantCleanup:(bool)arg1;
- (void)setProcessedForStations:(bool)arg1;
- (void)setQuestions:(id)arg1;
- (void)setReceiptIdentifier:(id)arg1;
- (void)setReceiptProviderIdentifier:(id)arg1;
- (void)setReceiptProviderURL:(id)arg1;
- (void)setRecurring:(bool)arg1;
- (void)setRecurringPeerPayment:(id)arg1;
- (void)setRedemptionEvent:(id)arg1;
- (void)setRedemptionType:(unsigned long long)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setReleasedData:(id)arg1;
- (void)setRequestDeviceScoreIdentifier:(id)arg1;
- (void)setRequiresLocation:(bool)arg1;
- (void)setRequiresMerchantReprocessing:(bool)arg1;
- (void)setRewards:(id)arg1;
- (void)setRewardsEligibilityReason:(unsigned long long)arg1;
- (void)setRewardsInProgress:(id)arg1;
- (void)setRewardsTotalAmount:(id)arg1;
- (void)setRewardsTotalCurrencyCode:(id)arg1;
- (void)setSecondaryFundingSourceAmount:(id)arg1;
- (void)setSecondaryFundingSourceCurrencyCode:(id)arg1;
- (void)setSecondaryFundingSourceDPANSuffix:(id)arg1;
- (void)setSecondaryFundingSourceDescription:(id)arg1;
- (void)setSecondaryFundingSourceFPANIdentifier:(id)arg1;
- (void)setSecondaryFundingSourceNetwork:(long long)arg1;
- (void)setSecondaryFundingSourceType:(long long)arg1;
- (void)setSendDeviceScoreIdentifier:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServicingEvents:(id)arg1;
- (void)setShouldSuppressDate:(bool)arg1;
- (void)setStartStation:(id)arg1;
- (void)setStartStationCode:(id)arg1;
- (void)setStartStationLatitude:(double)arg1;
- (void)setStartStationLocation:(id)arg1;
- (void)setStartStationLongitude:(double)arg1;
- (void)setStationCodeProvider:(id)arg1;
- (void)setSubtotalAmount:(id)arg1;
- (void)setSuppressBehavior:(unsigned long long)arg1;
- (void)setSuppressNotifications:(bool)arg1;
- (void)setTechnologyType:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionDeclinedReason:(long long)arg1;
- (void)setTransactionSource:(unsigned long long)arg1;
- (void)setTransactionSourceIdentifier:(id)arg1;
- (void)setTransactionStatus:(long long)arg1;
- (void)setTransactionStatusChangedDate:(id)arg1;
- (void)setTransactionType:(long long)arg1;
- (void)setTransfers:(id)arg1;
- (void)setTransitModifiers:(unsigned long long)arg1;
- (void)setTransitType:(long long)arg1;
- (bool)shouldSuppressDate;
- (id)startStation;
- (id)startStationCode;
- (double)startStationLatitude;
- (id)startStationLocation;
- (double)startStationLongitude;
- (id)stationCodeProvider;
- (id)subtotalAmount;
- (id)subtotalCurrencyAmount;
- (bool)supportsFuzzyMatching;
- (unsigned long long)suppressBehavior;
- (bool)suppressNotifications;
- (long long)technologyType;
- (id)timeZone;
- (id)transactionAmountsForMultipleAmounts;
- (id)transactionDate;
- (long long)transactionDeclinedReason;
- (unsigned long long)transactionSource;
- (id)transactionSourceIdentifier;
- (long long)transactionStatus;
- (id)transactionStatusChangedDate;
- (long long)transactionType;
- (id)transfers;
- (unsigned long long)transitModifiers;
- (long long)transitType;
- (id)unansweredQuestions;
- (bool)updateReasonIsInitialDownload;
- (unsigned long long)updateReasons;
- (id)updateReasonsDescription;

// PKPaymentTransaction (FinanceKit)

- (id)_encodeStylingInfo:(id)arg1;
- (id)_fkAmount;
- (id)_fkMapsTransactionInsight;
- (unsigned long long)_fkMerchantCategoryFromPKMerchantCategory:(long long)arg1;
- (long long)_fkPaymentTransactionStatus;
- (unsigned long long)_fkPaymentTransactionType;
- (id)fkPaymentTransaction;

// PKPaymentTransaction (PKDeprecatedAdditions)

+ (id)paymentTransactionFromSource:(unsigned long long)arg1;

@end