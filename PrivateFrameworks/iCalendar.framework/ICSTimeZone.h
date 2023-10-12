/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTimeZone : ICSComponent {
    id  _systemTimeZone;
}

@property (nonatomic, retain) NSString *tzid;

+ (id)name;

- (void).cxx_destruct;
- (id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3;
- (void)setTzid:(id)arg1;
- (id)systemTimeZoneForDate:(id)arg1;
- (id)tzid;

// ICSTimeZone (ICSTranslation)

- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;

// ICSTimeZone (Internal)

+ (long long)matchTypeForSubarray:(id)arg1 inTZChangeArray:(id)arg2;
+ (bool)perfectMatchForSubarray:(id)arg1 inTZChangeArray:(id)arg2;
+ (id)quickTimeZoneNames;
+ (id)slowTimeZoneNames;

- (id)getNSTimeZone:(id)arg1;
- (id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2;
- (bool)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2;

// ICSTimeZone (TimeZoneGeneration)

+ (bool)_isTimeZone:(id)arg1 pseudoDSTForDate:(id)arg2;
+ (id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3;
+ (id)timeZoneWithSystemTimeZoneName:(id)arg1;

- (id)_previousDSTTransitionForDate:(id)arg1 timezone:(id)arg2;
- (id)initWithSystemTimeZone:(id)arg1;
- (id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3;

@end