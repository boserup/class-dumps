//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIActivityIndicatorView, UIImageView, UITextView;

__attribute__((visibility("hidden")))
@interface TDXSplashScreenView : UIView
{
    _Bool _hasLogo;
    UIActivityIndicatorView *_loadingIndicator;
    NSTimer *_messageTimer;
    NSTimer *_activityTimer;
    UITextView *_messageView;
    float _messagePosY;
    float _savedTopMargin;
    UIImageView *_bgImage;
}

@property(retain, nonatomic) UIImageView *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) _Bool hasLogo; // @synthesize hasLogo=_hasLogo;
@property(nonatomic) float savedTopMargin; // @synthesize savedTopMargin=_savedTopMargin;
@property(nonatomic) float messagePosY; // @synthesize messagePosY=_messagePosY;
@property(retain, nonatomic) UITextView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) NSTimer *activityTimer; // @synthesize activityTimer=_activityTimer;
@property(retain, nonatomic) NSTimer *messageTimer; // @synthesize messageTimer=_messageTimer;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void).cxx_destruct;
- (void)orientationWillChangeTo:(int)arg1;
- (void)updateConstraints;
- (void)hideMessage;
- (void)showCurrentMessage;
- (void)showMessage:(id)arg1 afterSec:(float)arg2;
- (void)showActivityafterSec:(float)arg1;
- (void)showActivity;
- (id)init;
- (void)removeFromSuperview;
- (void)didChangePhysicalOrientation:(id)arg1;
- (id)initWithLaunchImage;
- (id)launchImageName;
- (id)initWithFrame:(struct CGRect)arg1;

@end

