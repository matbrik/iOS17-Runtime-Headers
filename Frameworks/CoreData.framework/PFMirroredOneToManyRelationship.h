/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {
    NSRelationshipDescription * _inverseRelationshipDescription;
    CKRecordID * _recordID;
    CKRecordID * _relatedRecordID;
    NSRelationshipDescription * _relationshipDescription;
}

- (void)dealloc;
- (id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4;
- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end