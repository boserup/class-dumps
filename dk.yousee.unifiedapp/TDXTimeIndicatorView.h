//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NSCopying.h"

@class TDXGuideViewModel, UIImageView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface TDXTimeIndicatorView : UIView <NSCopying>
{
    UIImageView *_timeIndicatorImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    TDXGuideViewModel *_viewModel;
    CDUnknownBlockType _tapHandler;
}

@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(retain, nonatomic) TDXGuideViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *timeIndicatorImageView; // @synthesize timeIndicatorImageView=_timeIndicatorImageView;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateAngleWithWidth:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)timeIndicatorImageViewTapped;
- (struct CGSize)intrinsicContentSize;
- (id)initWithViewModel:(id)arg1 andTapHandler:(CDUnknownBlockType)arg2;

@end

