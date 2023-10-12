/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailTextCell : EKEventDetailCell {
    bool  _isTruncatingText;
    UITextView * _sizingTextView;
    <EKEventDetailTextCellDelegate> * _textDelegate;
    id /* block */  _textFromEventBlock;
    UILabel * _textTitleView;
    UITextView * _textView;
    NSString * _title;
}

@property (nonatomic, readonly) bool isTruncatingText;
@property (nonatomic) <EKEventDetailTextCellDelegate> *textDelegate;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (void).cxx_destruct;
- (id)_createNewTextView;
- (double)_layoutForWidth:(double)arg1;
- (id)_sizingTextView;
- (id)_textTitleView;
- (id)_textView;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 title:(id)arg3 textFromEventBlock:(id /* block */)arg4;
- (bool)isTruncatingText;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (void)setIsTruncatingText:(bool)arg1;
- (void)setTextDelegate:(id)arg1;
- (id)textDelegate;
- (bool)update;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework

- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityChargedLineBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibilityInternalTextLinks;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)accessibilityCustomRotors;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

// EKEventDetailTextCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end