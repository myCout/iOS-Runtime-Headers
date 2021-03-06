/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernLabelledAtomList : UIView <MFModernAddressAtomDelegate, MFPassthroughViewProvider> {
    NSMutableArray * _addressAtoms;
    void * _addressBook;
    NSArray * _addresses;
    <MFModernLabelledAtomListDelegate> * _delegate;
    UILabel * _label;
    UIColor * _labelTextColor;
    BOOL  _labelVisible;
    UILabel * _lastBaselineDeceptionLabel;
    float  _lineSpacing;
    unsigned int  _needsReflow;
    unsigned int  _numberOfRows;
    float  _previousWidth;
    BOOL  _primary;
    NSDictionary * _recipients;
    NSString * _title;
    NSArray * _viewsToDodge;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) UIColor *labelTextColor;
@property (getter=isLabelVisible, nonatomic) BOOL labelVisible;
@property (nonatomic) float lineSpacing;
@property (nonatomic, readonly) unsigned int numberOfRows;
@property (getter=isPrimary, nonatomic) BOOL primary;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewsToDodge;

+ (float)atomLineHeight;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
+ (id)primaryLabelFont;
+ (float)spaceBetweenColonAndFirstAtomNaturalEdge;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForAtomAtIndex:(unsigned int)arg1 withStartingPoint:(struct CGPoint { float x1; float x2; })arg2 row:(inout unsigned int*)arg3;
- (void)_reflow;
- (void)_reflowIfNeeded;
- (float)_remainingSpaceForRowAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setNeedsReflow;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (id)addressAtoms;
- (void)addressBookDidChange:(id)arg1;
- (id)atomDisplayStrings;
- (struct CGPoint { float x1; float x2; })baselinePointForRow:(unsigned int)arg1;
- (void)crossFadeLabelVisibility:(BOOL)arg1 atomSeparatorStyle:(int)arg2 withAnimationCoordinator:(id)arg3;
- (void)dealloc;
- (void)enumerateAddressAtomsUsingBlock:(id /* block */)arg1;
- (id)initWithLabel:(id)arg1 title:(id)arg2 addressBook:(void*)arg3;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isLabelVisible;
- (BOOL)isPrimary;
- (id)label;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelFrame;
- (id)labelText;
- (id)labelTextColor;
- (void)layoutSubviews;
- (float)lineSpacing;
- (unsigned int)numberOfRows;
- (id)passthroughViews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAddressAtomScale:(float)arg1;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setAddressAtomsArePrimary:(BOOL)arg1;
- (void)setAddresses:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAtomAlpha:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setLabelVisible:(BOOL)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setOverrideFont:(id)arg1;
- (void)setPrimary:(BOOL)arg1;
- (void)setViewsToDodge:(id)arg1;
- (id)title;
- (void)updateAtomsForVIP;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)viewsToDodge;

@end
