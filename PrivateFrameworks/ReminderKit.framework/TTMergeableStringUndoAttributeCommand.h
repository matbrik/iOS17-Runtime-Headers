/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface TTMergeableStringUndoAttributeCommand : NSObject <TTMergeableStringUndoCommand> {
    void * _attributeRanges;
}

@property (nonatomic, readonly) void*attributeRanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (void*)attributeRanges;
- (void)dealloc;
- (id)description;
- (bool)hasTopoIDsThatCanChange;
- (id)init;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;

@end