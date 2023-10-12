/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPatternMetrics : NSObject {
    SGMSelfIdPatternMatched * _selfIdPatternMatched;
}

@property (nonatomic, retain) SGMSelfIdPatternMatched *selfIdPatternMatched;

+ (id)instance;
+ (void)recordSelfIdMatchWithPatternType:(struct SGMSIPatternType_ { unsigned long long x1; })arg1 patternHash:(id)arg2 nameTokenCount:(unsigned long long)arg3 nameClassification:(struct SGMSINameClassification_ { unsigned long long x1; })arg4 messageIndex:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)init;
- (id)selfIdPatternMatched;
- (void)setSelfIdPatternMatched:(id)arg1;

@end