//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDXMainContentViewController.h"

#import "TDXFrontPageDelegate.h"
#import "TDXFrontPageSectionHeaderViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, TDXFrontPageNavigationBarLogoView, TDXFrontPageTopMenuView, TDXMenuItem, UIScrollView;

__attribute__((visibility("hidden")))
@interface TDXFrontPageContainerViewController : TDXMainContentViewController <UIScrollViewDelegate, TDXFrontPageDelegate, TDXFrontPageSectionHeaderViewDelegate>
{
    UIScrollView *_containerScrollView;
    NSMutableArray *_frontPages;
    TDXFrontPageNavigationBarLogoView *_titleLogo;
    TDXFrontPageTopMenuView *_topMenu;
    NSArray *_secondaryMenuItems;
    TDXMenuItem *_menuItem;
}

@property(retain, nonatomic) TDXMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(retain, nonatomic) NSArray *secondaryMenuItems; // @synthesize secondaryMenuItems=_secondaryMenuItems;
@property(retain, nonatomic) TDXFrontPageTopMenuView *topMenu; // @synthesize topMenu=_topMenu;
@property(retain, nonatomic) TDXFrontPageNavigationBarLogoView *titleLogo; // @synthesize titleLogo=_titleLogo;
@property(retain, nonatomic) NSMutableArray *frontPages; // @synthesize frontPages=_frontPages;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
- (void).cxx_destruct;
- (id)frontPageCellIdentifierForId:(unsigned int)arg1;
- (void)openGuide;
- (void)openSecondaryMenu;
- (void)didSelectExpandButtonWithExpandRequest:(id)arg1 andSectionRequest:(id)arg2 reloadEnabled:(BOOL)arg3;
- (int)frontPageIndex:(id)arg1;
- (void)setActiveFrontPageForViewControllerWithIndex:(int)arg1;
- (void)updateViewConstraints;
- (void)handleNetworkChanges;
- (struct CGRect)frameForContent;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)contentScreenTitleAtIndex:(unsigned int)arg1;
- (void)overlayWillClose:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMenuItem:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openOverlayWithRequest:(id)arg1 reloadEnabled:(BOOL)arg2;
- (void)openPlayerWithStreamable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

