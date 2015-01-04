//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (ClassyLayoutProperties)
+ (struct CGSize)sizeFromStylesheet;
+ (void)load;
+ (void)recursivelyUpdateStylingImmediately:(id)arg1;
- (id)mas_updateConstraintsCenterY;
- (id)mas_updateConstraintsCenterX;
- (id)mas_updateConstraintsWidthFromStylesheet;
- (id)mas_updateConstraintsHeightFromStylesheet;
- (id)mas_updateConstraintsWithRightMarginRelativeTo:(id)arg1;
- (id)mas_updateConstraintsWithBottomMarginRelativeTo:(id)arg1;
- (id)mas_updateConstraintsWithLeftMarginRelativeTo:(id)arg1;
- (id)mas_updateConstraintsWithTopMarginRelativeTo:(id)arg1;
- (id)mas_updateConstraintsWithRightMarginRelativeToSuperview;
- (id)mas_updateConstraintsWithBottomMarginRelativeToSuperview;
- (id)mas_updateConstraintsWithLeftMarginRelativeToSuperview;
- (id)mas_updateConstraintsWithTopMarginRelativeToSuperview;
@property(nonatomic) float cas_marginRight;
@property(nonatomic) float cas_marginBottom;
@property(nonatomic) float cas_marginLeft;
@property(nonatomic) float cas_marginTop;
@property(nonatomic) float cas_sizeHeight;
@property(nonatomic) float cas_sizeWidth;
@property(nonatomic) struct CGSize cas_size;
@property(nonatomic) struct UIEdgeInsets cas_margin;
- (void)updateSuperviewsConstraints;
@end
