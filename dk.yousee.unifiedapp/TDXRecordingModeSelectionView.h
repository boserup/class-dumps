//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, TDXPickerModalView, UIPopoverController;

__attribute__((visibility("hidden")))
@interface TDXRecordingModeSelectionView : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _seriesEnabled;
    UIPopoverController *_popoverController;
    TDXPickerModalView *_pickerViewController;
    NSArray *_items;
    int _selectedIndex;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic) _Bool seriesEnabled; // @synthesize seriesEnabled=_seriesEnabled;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) TDXPickerModalView *pickerViewController; // @synthesize pickerViewController=_pickerViewController;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)intFor:(int)arg1;
- (void)showFromView:(id)arg1 withSeriesRecordingEnabled:(_Bool)arg2 withInitiallySelectedRecordingMode:(int)arg3 andCompletion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
