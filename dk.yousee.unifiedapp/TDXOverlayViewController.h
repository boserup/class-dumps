//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDXMainContentViewController.h"

@class UISwipeGestureRecognizer;

__attribute__((visibility("hidden")))
@interface TDXOverlayViewController : TDXMainContentViewController
{
    UISwipeGestureRecognizer *_swipeGesture;
}

@property(retain, nonatomic) UISwipeGestureRecognizer *swipeGesture; // @synthesize swipeGesture=_swipeGesture;
- (void).cxx_destruct;
- (void)handleEnterForeground;
- (void)handleNetworkChanges;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didSwipeRight;
- (void)viewDidLoad;
- (id)init;

@end
