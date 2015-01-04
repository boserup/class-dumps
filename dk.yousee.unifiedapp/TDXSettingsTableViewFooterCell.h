//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface TDXSettingsTableViewFooterCell : UITableViewCell
{
    UIView *_topHalfView;
    UIView *_bottomHalfView;
    UIImageView *_companyLogo;
    UILabel *_versionLabel;
    UIButton *_logoutBtn;
    UILabel *_labelUserName;
    UIButton *_resetOnboardingBtn;
}

+ (id)identifier;
@property(retain, nonatomic) UIButton *resetOnboardingBtn; // @synthesize resetOnboardingBtn=_resetOnboardingBtn;
@property(retain, nonatomic) UILabel *labelUserName; // @synthesize labelUserName=_labelUserName;
@property(retain, nonatomic) UIButton *logoutBtn; // @synthesize logoutBtn=_logoutBtn;
@property(retain, nonatomic) UILabel *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(retain, nonatomic) UIImageView *companyLogo; // @synthesize companyLogo=_companyLogo;
@property(retain, nonatomic) UIView *bottomHalfView; // @synthesize bottomHalfView=_bottomHalfView;
@property(retain, nonatomic) UIView *topHalfView; // @synthesize topHalfView=_topHalfView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)logoutBtnWasPressed;
- (void)didTapLogoALot;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

