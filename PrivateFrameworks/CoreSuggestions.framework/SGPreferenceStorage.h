/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPreferenceStorage : NSObject

+ (bool)allowAgeBasedPruning;
+ (bool)allowAnyDomainForMarkup;
+ (bool)allowGeocode;
+ (bool)allowUnverifiedSourceForMarkup;
+ (bool)alwaysShowCancelledEvents;
+ (id)cloudKitPersistedState;
+ (float)contactSharingNegativeSamplingRate;
+ (id)defaults;
+ (id)defaultsForTests;
+ (bool)detectContacts;
+ (bool)detectMessageEventsML;
+ (bool)detectNLEvents;
+ (bool)detectReminders;
+ (bool)detectRemindersInMail;
+ (id)detectSalientMails;
+ (bool)detectStructuredEvents;
+ (bool)detectStructuredEventsML;
+ (id)didKVSMigrationTokenForIdentifier:(id)arg1;
+ (id)disabledEventUpdateCategories;
+ (bool)enableDKIMEnforcement;
+ (id)followUpComputeCustomTimeRangeForLanguage:(id)arg1;
+ (id)followUpTimeRangeForDebugging;
+ (double)harvestBudgetCPUTimeSeconds;
+ (long long)harvestBudgetNumberOfOperations;
+ (long long)hashedSessionsLogging;
+ (bool)hidePastEventsForTests;
+ (bool)mailIntelligenceSPILogging;
+ (long long)messagesToProcessImmediately;
+ (bool)onlyShowSignificantNLEvents;
+ (bool)onlyShowSignificantPseudoContacts;
+ (id)parsecFlightCachingAPIBaseURL;
+ (int)registerBlockOnSuggestionsSettingsChange:(id /* block */)arg1;
+ (void)removeDeprecatedDefaults;
+ (void)resetAllPreferences;
+ (void)resumeNotificationQueue;
+ (void)setAllowAgeBasedPruning:(bool)arg1;
+ (void)setAllowAnyDomainForMarkup:(bool)arg1;
+ (void)setAllowGeocodeForTests:(bool)arg1;
+ (void)setAllowUnverifiedSourceForMarkup:(bool)arg1;
+ (void)setAlwaysShowCancelledEvents:(bool)arg1;
+ (void)setCloudKitPersistedState:(id)arg1;
+ (void)setContactSharingNegativeSamplingRate:(float)arg1;
+ (void)setContactsDetectionEnabledForTests:(bool)arg1;
+ (void)setDetectContacts:(bool)arg1;
+ (void)setDetectMessageEventsML:(bool)arg1;
+ (void)setDetectNLEvents:(bool)arg1;
+ (void)setDetectReminders:(bool)arg1;
+ (void)setDetectRemindersInMail:(bool)arg1;
+ (void)setDetectStructuredEvents:(bool)arg1;
+ (void)setDetectStructuredEventsML:(bool)arg1;
+ (void)setDidKVSMigrationToken:(id)arg1 forIdentifier:(id)arg2;
+ (void)setDisabledEventUpdateCategories:(id)arg1;
+ (void)setEnableDKIMEnforcement:(bool)arg1;
+ (void)setFirstPartyCalendarAppIsInstalled:(bool)arg1;
+ (void)setFirstPartyMailAppIsInstalled:(bool)arg1;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)arg1;
+ (void)setHarvestBudgetNumberOfOperations:(long long)arg1;
+ (void)setHashedSessionsLogging:(int)arg1;
+ (void)setHidePastEventsForTests:(bool)arg1;
+ (void)setMailSaliencyDetectionEnabledForTests:(bool)arg1;
+ (void)setMessageEventsMLDetectionEnabledForTests:(bool)arg1;
+ (void)setMessagesToProcessImmediately:(long long)arg1;
+ (void)setMessagesToProcessImmediatelyForTests:(long long)arg1;
+ (void)setNLEventsDetectionEnabledForTests:(bool)arg1;
+ (void)setOnlyShowSignificantNLEvents:(bool)arg1;
+ (void)setOnlyShowSignificantPseudoContacts:(bool)arg1;
+ (void)setOnlyShowSignificantPseudoContactsForTests:(bool)arg1;
+ (void)setParsecFlightCachingAPIBaseURL:(id)arg1;
+ (void)setRemindersDetectionEnabledForTests:(bool)arg1;
+ (void)setRemindersDetectionInMailEnabledForTests:(bool)arg1;
+ (void)setShowCancelledEventsForTests:(bool)arg1;
+ (void)setShowContactsFoundInMail:(bool)arg1;
+ (void)setShowEventsFoundInMail:(bool)arg1;
+ (void)setShowOperatingSystemVersionInSnippets:(bool)arg1;
+ (void)setShowPastEvents:(bool)arg1;
+ (void)setStructuredEventsDetectionEnabledForTests:(bool)arg1;
+ (void)setStructuredEventsMLDetectionEnabledForTests:(bool)arg1;
+ (void)setSyncHistoryToCloud:(bool)arg1;
+ (void)setSyncHistoryToCloudForTests:(bool)arg1;
+ (void)setUseMLModelForContactSharing:(bool)arg1;
+ (void)setUseMLModelForContacts:(bool)arg1;
+ (void)setUseMLModelForSelfId:(bool)arg1;
+ (void)setUseMLModelForSelfIdForTests:(bool)arg1;
+ (void)setUseManateeSaltForHistory:(bool)arg1;
+ (void)setUserAccountsPersistedState:(id)arg1;
+ (bool)shouldHarvestEvents;
+ (bool)showContactsFoundInMail;
+ (bool)showEventsFoundInMail;
+ (bool)showOperatingSystemVersionInSnippets;
+ (bool)showPastEvents;
+ (bool)showSuggestionsCalendar;
+ (long long)suggestionsLogLevel;
+ (void)suspendNotificationQueue;
+ (bool)syncHistoryToCloud;
+ (void)updateBoolSettingKey:(id)arg1 withValue:(bool)arg2;
+ (void)updateDetection:(bool)arg1 forKey:(id)arg2;
+ (void)updateIntSettingKey:(id)arg1 withValue:(int)arg2;
+ (bool)useMLModelForContactSharing;
+ (bool)useMLModelForContacts;
+ (bool)useMLModelForSelfId;
+ (bool)useManateeSaltForHistory;
+ (id)userAccountsPersistedState;

@end