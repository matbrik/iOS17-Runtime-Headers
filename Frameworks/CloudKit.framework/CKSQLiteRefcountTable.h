/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteRefcountTable : CKSQLiteTable {
    CKSQLiteReferencedObjectTable * _referentDBTable;
    NSString * _referentPrimaryKey;
}

+ (id)dbProperties;
+ (Class)entryClass;

- (void).cxx_destruct;
- (id)createTableSQL;
- (id)deleteUnreferenced;
- (id)finishInitializing;
- (id)initWithLogicalTableName:(id)arg1 referentTable:(id)arg2;
- (unsigned long long)refcountForObjectID:(id)arg1;

@end