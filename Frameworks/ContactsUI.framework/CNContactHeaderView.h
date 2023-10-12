/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView> {
    NSArray * _activatedConstraints;
    bool  _alwaysShowsMonogram;
    NSObject<OS_dispatch_queue> * _backgroundColorCacheQueue;
    CIContext * _colorExtractionContext;
    CNUIBackgroundColors * _colorsMiniCache;
    double  _constrainedMaxHeight;
    CNContact * _contactMiniCache;
    NSArray * _contacts;
    <CNContactHeaderViewDelegate> * _delegate;
    double  _lastViewWidth;
    UILabel * _nameLabel;
    NSDictionary * _nameTextAttributes;
    bool  _needsLabelSizeCalculation;
    bool  _needsReload;
    NSLayoutConstraint * _photoHeightConstraint;
    NSLayoutConstraint * _photoTopConstraint;
    CNContactPhotoView * _photoView;
    UIImageView * _posterView;
    <CNPresenterDelegate> * _presenterDelegate;
    bool  _shouldShowBelowNavigationTitle;
    bool  _shouldUseConstrainedMaxHeight;
    bool  _showMonogramsOnly;
    CNContactHeaderViewSizeAttributes * _sizeAttributes;
    bool  _visibleToScrollViews;
}

@property (nonatomic, retain) NSArray *activatedConstraints;
@property (nonatomic) bool alwaysShowsMonogram;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundColorCacheQueue;
@property (nonatomic, retain) CNUIBackgroundColors *colorsMiniCache;
@property (nonatomic) double constrainedMaxHeight;
@property (nonatomic, retain) CNContact *contactMiniCache;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastViewWidth;
@property (nonatomic, readonly) double maxHeight;
@property (nonatomic, readonly) double minHeight;
@property (nonatomic, readonly) double minTitleOffset;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic) bool needsLabelSizeCalculation;
@property (retain) NSLayoutConstraint *photoHeightConstraint;
@property (retain) NSLayoutConstraint *photoTopConstraint;
@property (nonatomic, readonly) CNContactPhotoView *photoView;
@property (nonatomic, retain) UIImageView *posterView;
@property (nonatomic) <CNPresenterDelegate> *presenterDelegate;
@property (nonatomic) bool shouldShowBelowNavigationTitle;
@property (nonatomic) bool shouldUseConstrainedMaxHeight;
@property (nonatomic) bool showMonogramsOnly;
@property (nonatomic, retain) CNContactHeaderViewSizeAttributes *sizeAttributes;
@property (readonly) Class superclass;
@property (nonatomic) bool visibleToScrollViews;

+ (struct CGSize { double x1; double x2; })defaultPhotoSize;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(bool)arg1;
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(bool)arg1 shouldAllowImageDrops:(bool)arg2 monogramOnly:(bool)arg3;
+ (bool)requiresConstraintBasedLayout;
+ (id)sizeAttributesShowingNavBar:(bool)arg1;

- (void).cxx_destruct;
- (id)activatedConstraints;
- (bool)alwaysShowsMonogram;
- (id)backgroundColorCacheQueue;
- (void)calculateLabelSizesIfNeeded;
- (bool)canBecomeFirstResponder;
- (id)colorExtractionContext;
- (id)colorsMiniCache;
- (double)constrainedMaxHeight;
- (id)contactMiniCache;
- (id)contactStyle;
- (id)contactViewCache;
- (id)contacts;
- (double)currentHeightPercentMaximized;
- (double)currentHeightPercentMaximizedForMaxHeight:(double)arg1;
- (double)currentHeightPercentMaximizedForPhoto;
- (void)dealloc;
- (double)defaultMaxBaseHeight;
- (double)defaultMaxHeight;
- (id)delegate;
- (id)descriptorForRequiredKeys;
- (void)didFinishUsing;
- (void)fetchAndCacheColorsForContactImage:(id)arg1 isPoster:(bool)arg2 forContact:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 shouldAllowTakePhotoAction:(bool)arg3 shouldAllowImageDrops:(bool)arg4 showingNavBar:(bool)arg5 monogramOnly:(bool)arg6 delegate:(id)arg7;
- (bool)isOrientationPhoneLandscape;
- (bool)isPad;
- (bool)isPadCompactHorizontalSize;
- (bool)isPadRegularHorizontalSize;
- (bool)isPhotoLowQuality;
- (double)lastViewWidth;
- (void)layoutSubviews;
- (double)maxHeight;
- (double)minHeight;
- (double)minTitleOffset;
- (id)nameLabel;
- (id)nameTextAttributes;
- (bool)needsLabelSizeCalculation;
- (id)photoHeightConstraint;
- (id)photoTopConstraint;
- (id)photoView;
- (void)photoView:(id)arg1 didAcceptDropOfImageData:(id)arg2;
- (void)photoViewDidUpdate:(id)arg1;
- (id)posterView;
- (void)prepareForReuse;
- (id)presenterDelegate;
- (void)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (double)safeAreaPhotoOffset;
- (double)safeAreaTop;
- (void)setActivatedConstraints:(id)arg1;
- (void)setAlwaysShowsMonogram:(bool)arg1;
- (void)setBackgroundColorCacheQueue:(id)arg1;
- (void)setColorsMiniCache:(id)arg1;
- (void)setConstrainedMaxHeight:(double)arg1;
- (void)setConstrainedMaxHeight:(double)arg1 enabled:(bool)arg2;
- (void)setContactMiniCache:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastViewWidth:(double)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNeedsLabelSizeCalculation:(bool)arg1;
- (void)setNeedsReload;
- (void)setPhotoHeightConstraint:(id)arg1;
- (void)setPhotoTopConstraint:(id)arg1;
- (void)setPosterView:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setShouldShowBelowNavigationTitle:(bool)arg1;
- (void)setShouldUseConstrainedMaxHeight:(bool)arg1;
- (void)setShowMonogramsOnly:(bool)arg1;
- (void)setSizeAttributes:(id)arg1;
- (void)setVisibleToScrollViews:(bool)arg1;
- (bool)shouldShowBelowNavigationTitle;
- (bool)shouldUseConstrainedMaxHeight;
- (bool)showMonogramsOnly;
- (id)sizeAttributes;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateForShowingNavBar:(bool)arg1;
- (void)updateSizeDependentAttributes;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (id)viewControllerForPhotoView:(id)arg1;
- (bool)visibleToScrollViews;

@end