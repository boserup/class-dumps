//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, NSTimer, TDXModalActivityView, UIButton, UIImageView, UILabel, UITextField, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface TDXLoginViewController : UIViewController <UITextFieldDelegate>
{
    BOOL _autoLoginInProgress;
    _Bool _hasShownGeoBlokAlert;
    NSMutableArray *_guestLoginConstraints;
    UIView *_loginView;
    UIImageView *_logoImageView;
    UITextView *_helpDescriptionTextView;
    UITextField *_userNameInputField;
    UITextField *_passwordInputField;
    UIButton *_loginButton;
    UIButton *_requestPasswordButton;
    UIButton *_createAccountButton;
    UIView *_lineImage1;
    UIView *_lineImage2;
    UILabel *_orLabel;
    UIButton *_guestLoginButton;
    UIButton *_readMoreButton;
    UIButton *_testLoginButton;
    TDXModalActivityView *_activityView;
    NSTimer *_timer;
    struct CGSize _inputFieldSize;
    struct CGSize _buttonSize;
}

@property(nonatomic) _Bool hasShownGeoBlokAlert; // @synthesize hasShownGeoBlokAlert=_hasShownGeoBlokAlert;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) struct CGSize inputFieldSize; // @synthesize inputFieldSize=_inputFieldSize;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) BOOL autoLoginInProgress; // @synthesize autoLoginInProgress=_autoLoginInProgress;
@property(retain, nonatomic) TDXModalActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIButton *testLoginButton; // @synthesize testLoginButton=_testLoginButton;
@property(retain, nonatomic) UIButton *readMoreButton; // @synthesize readMoreButton=_readMoreButton;
@property(retain, nonatomic) UIButton *guestLoginButton; // @synthesize guestLoginButton=_guestLoginButton;
@property(retain, nonatomic) UILabel *orLabel; // @synthesize orLabel=_orLabel;
@property(retain, nonatomic) UIView *lineImage2; // @synthesize lineImage2=_lineImage2;
@property(retain, nonatomic) UIView *lineImage1; // @synthesize lineImage1=_lineImage1;
@property(retain, nonatomic) UIButton *createAccountButton; // @synthesize createAccountButton=_createAccountButton;
@property(retain, nonatomic) UIButton *requestPasswordButton; // @synthesize requestPasswordButton=_requestPasswordButton;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UITextField *passwordInputField; // @synthesize passwordInputField=_passwordInputField;
@property(retain, nonatomic) UITextField *userNameInputField; // @synthesize userNameInputField=_userNameInputField;
@property(retain, nonatomic) UITextView *helpDescriptionTextView; // @synthesize helpDescriptionTextView=_helpDescriptionTextView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) NSMutableArray *guestLoginConstraints; // @synthesize guestLoginConstraints=_guestLoginConstraints;
- (void).cxx_destruct;
- (void)performUserInitiatedLogin;
- (void)userDidTapTestLoginButton:(id)arg1;
- (void)userDidTapReadMoreButton:(id)arg1;
- (void)userDidTapGuestLoginButton:(id)arg1;
- (void)userDidTapCreateAccountButton:(id)arg1;
- (void)userDidTapRequestPasswordButton:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)didUpdateGeoBlocking;
- (void)handleGuestNetworkChanges;
- (void)handleNetworkChanges;
- (void)setupGuestLogin;
- (void)updateViewConstraints;
- (id)topSubview;
- (void)didEnterBackground;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)readMoreURL;
- (id)createLoginURL;
- (id)forgottenPasswordURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

