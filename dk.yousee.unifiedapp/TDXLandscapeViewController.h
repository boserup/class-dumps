//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class TDXServiceMessageViewController;

__attribute__((visibility("hidden")))
@interface TDXLandscapeViewController : UIViewController
{
    TDXServiceMessageViewController *_serviceMessageViewController;
}

@property(retain, nonatomic) TDXServiceMessageViewController *serviceMessageViewController; // @synthesize serviceMessageViewController=_serviceMessageViewController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)serviceMessageReceived:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

