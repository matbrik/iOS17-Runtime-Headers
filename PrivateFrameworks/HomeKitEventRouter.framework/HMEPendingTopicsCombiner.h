/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitEventRouter.framework/HomeKitEventRouter
 */

@interface HMEPendingTopicsCombiner : NSObject {
    NSMutableSet * _addTopicFilters;
    NSMutableSet * _removeTopicFilters;
}

@property (retain) NSMutableSet *addTopicFilters;
@property (retain) NSMutableSet *removeTopicFilters;
@property (readonly) NSArray *topicFiltersToAdd;
@property (readonly) NSArray *topicFiltersToRemove;

- (void).cxx_destruct;
- (id)addTopicFilters;
- (void)combineOntoPreviousAdditions:(id)arg1 removals:(id)arg2;
- (void)combineWithAdditions:(id)arg1 removals:(id)arg2;
- (id)init;
- (id)removeTopicFilters;
- (void)reset;
- (void)setAddTopicFilters:(id)arg1;
- (void)setRemoveTopicFilters:(id)arg1;
- (id)topicFiltersToAdd;
- (id)topicFiltersToRemove;

@end