//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface TDXPopUpMessageView : UIView
{
    UILabel *_titleLabel;
    struct CGPoint _position;
}

@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)hidePopUp;
- (void)layoutSubviews;
- (id)initWithPosition:(struct CGPoint)arg1 andMessage:(id)arg2;

@end

