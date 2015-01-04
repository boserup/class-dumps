//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TDXFrontPageSectionHeaderViewDelegate.h"
#import "TDXGridLayoutDataSource.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, NSTimer, TDXCollectionView, TDXFrontPageViewModel, TDXModalActivityView, UIImageView;

__attribute__((visibility("hidden")))
@interface TDXFrontPageContentViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, TDXGridLayoutDataSource, TDXFrontPageSectionHeaderViewDelegate>
{
    TDXFrontPageViewModel *_viewModel;
    int _pageIndex;
    id <TDXFrontPageDelegate> _frontPageDelegate;
    id <TDXFrontPageSectionHeaderViewDelegate> _headerDelegate;
    TDXCollectionView *_contentCollectionView;
    TDXModalActivityView *_activityView;
    UIImageView *_snapshotBeforeRotation;
    NSTimer *_streamablesUpdateTimer;
    struct CGRect _frameBeforeRotation;
}

@property(retain, nonatomic) NSTimer *streamablesUpdateTimer; // @synthesize streamablesUpdateTimer=_streamablesUpdateTimer;
@property(nonatomic) struct CGRect frameBeforeRotation; // @synthesize frameBeforeRotation=_frameBeforeRotation;
@property(retain, nonatomic) UIImageView *snapshotBeforeRotation; // @synthesize snapshotBeforeRotation=_snapshotBeforeRotation;
@property(retain, nonatomic) TDXModalActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) TDXCollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
@property(nonatomic) __weak id <TDXFrontPageSectionHeaderViewDelegate> headerDelegate; // @synthesize headerDelegate=_headerDelegate;
@property(nonatomic) __weak id <TDXFrontPageDelegate> frontPageDelegate; // @synthesize frontPageDelegate=_frontPageDelegate;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) TDXFrontPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didSelectExpandButtonWithExpandRequest:(id)arg1 andSectionRequest:(id)arg2;
- (void)didSelectFilterButtonRequest:(id)arg1 withBaseRequest:(id)arg2;
- (BOOL)hasSectionInfo:(unsigned int)arg1;
- (id)streamableItemForElementWithIndexPath:(id)arg1;
- (id)titleOfSectionWithIndex:(unsigned int)arg1;
- (unsigned int)numberOfSections;
- (unsigned int)numberOfItemsInSection:(int)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)forceHideSectionTitle;
- (BOOL)forceHideShowAllButtonForSection:(int)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)identifierFor:(id)arg1 withTemplateName:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)itemColumnsForSection:(int)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)setActiveFrontPage:(BOOL)arg1;
- (void)handleNetworkChanges;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didFetchUserInfo;
- (void)didUpdateLocalProgress;
- (void)reloadStreamables;
- (void)updateViewConstraints;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)scheduleStreamablesReload;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 andFrontPageDelegate:(id)arg2 andSectionHeaderDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
