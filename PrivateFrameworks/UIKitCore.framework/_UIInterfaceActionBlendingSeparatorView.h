/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView <UIInterfaceActionVisualSectionSeparatorDisplaying, UIInterfaceActionVisualSeparatorDisplaying> {
    double  _horizontalLineLeadingInset;
    _UIInterfaceActionSeparatorConstraintController * _separatorViewConstraints;
}

@property (nonatomic) double constantAxisDimension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalLineLeadingInset;
@property (nonatomic, readonly, retain) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateContentDirectionalInsets;
- (double)constantAxisDimension;
- (long long)constantSizedAxis;
- (double)horizontalLineLeadingInset;
- (id)init;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;
- (id)separatorViewConstraints;
- (void)setConstantAxisDimension:(double)arg1;
- (void)setConstantSizedAxis:(long long)arg1;
- (void)setHorizontalLineLeadingInset:(double)arg1;
- (void)updateConstraints;

@end