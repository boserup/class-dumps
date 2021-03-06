//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class Program, TDXBrowseChannelComponentViewController, TDXDecorationsView, TDXRestrictionView, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface TDXZoomedProgramCell : UICollectionViewCell
{
    UIView *_containerView;
    TDXBrowseChannelComponentViewController *_parent;
    UILabel *_airTimeAndTitleLabel;
    UILabel *_programDescriptionLabel;
    UIImageView *_thumbnail;
    UIImageView *_playButton;
    TDXRestrictionView *_restrictionView;
    Program *_program;
    TDXDecorationsView *_decorationsView;
}

@property(retain, nonatomic) TDXDecorationsView *decorationsView; // @synthesize decorationsView=_decorationsView;
@property(retain, nonatomic) Program *program; // @synthesize program=_program;
@property(retain, nonatomic) TDXRestrictionView *restrictionView; // @synthesize restrictionView=_restrictionView;
@property(retain, nonatomic) UIImageView *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) UILabel *programDescriptionLabel; // @synthesize programDescriptionLabel=_programDescriptionLabel;
@property(retain, nonatomic) UILabel *airTimeAndTitleLabel; // @synthesize airTimeAndTitleLabel=_airTimeAndTitleLabel;
@property(nonatomic) __weak TDXBrowseChannelComponentViewController *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)configureForProgram:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

