//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDXOverlayViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, TDXCMSTextViewModel, TDXCollectionView, TDXModalActivityView;

__attribute__((visibility("hidden")))
@interface TDXCMSTextViewController : TDXOverlayViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    TDXCMSTextViewModel *_viewModel;
    TDXCollectionView *_collectionView;
    TDXModalActivityView *_activityView;
}

@property(retain, nonatomic) TDXModalActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) TDXCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TDXCMSTextViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

