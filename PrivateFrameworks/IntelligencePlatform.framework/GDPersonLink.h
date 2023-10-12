/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDPersonLink : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer> {
    GDEntityIdentifier * _linkedPersonEntityIdentifier;
    GDRelationshipIdentifier * _relationshipIdentifier;
    NSString * _relationshipLabel;
}

@property (nonatomic, readonly) GDEntityIdentifier *linkedPersonEntityIdentifier;
@property (nonatomic, readonly) GDRelationshipIdentifier *relationshipIdentifier;
@property (nonatomic, readonly) NSString *relationshipLabel;

- (void).cxx_destruct;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)linkedPersonEntityIdentifier;
- (id)relationshipIdentifier;
- (id)relationshipLabel;

@end