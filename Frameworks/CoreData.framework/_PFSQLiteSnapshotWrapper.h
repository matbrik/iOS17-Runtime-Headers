/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying, NSMutableCopying> {
    int  _externalReferences;
    int  _flags;
    struct sqlite3_snapshot { unsigned char x1[48]; } * _s;
}

@property (nonatomic, readonly) const void*bytes;

- (const void*)bytes;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end