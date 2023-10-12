/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSQLiteTwoPropertyComparisonPredicate : HDSQLiteComparisonPredicate

@property (nonatomic, readonly, copy) NSString *otherProperty;

- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(int*)arg2;
- (id)description;
- (id)initWithProperty:(id)arg1 comparisonType:(long long)arg2 otherProperty:(id)arg3;
- (id)otherProperty;

@end