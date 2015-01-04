//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

#import "UIAlertViewDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TDXAlertView : UIAlertView <UIAlertViewDelegate>
{
    CDUnknownBlockType completion;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
