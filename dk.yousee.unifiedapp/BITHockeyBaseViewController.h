//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@interface BITHockeyBaseViewController : UITableViewController
{
    BOOL _modal;
    int _statusBarStyle;
    BOOL _modalAnimated;
}

@property(nonatomic) BOOL modalAnimated; // @synthesize modalAnimated=_modalAnimated;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onDismissModal:(id)arg1;
- (id)initWithModalStyle:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 modal:(BOOL)arg2;
- (id)initWithStyle:(int)arg1;

@end

