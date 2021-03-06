//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRPreferences, CRRateAppAlert, CritterImpl;

@interface CRAppRater : NSObject
{
    unsigned int _appLoadCount;
    CRRateAppAlert *_rateMeAlert;
    CritterImpl *_critterDelegate;
    CRPreferences *_storedState;
}

@property(retain) CRPreferences *storedState; // @synthesize storedState=_storedState;
@property CritterImpl *critterDelegate; // @synthesize critterDelegate=_critterDelegate;
@property(retain, nonatomic) CRRateAppAlert *rateMeAlert; // @synthesize rateMeAlert=_rateMeAlert;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)openAppStore;
- (void)incrementAppLoadCount;
- (void)resetRateMeSettings;
- (BOOL)shouldResetRateMeSettings;
- (BOOL)shouldDisplayRateMeAlertWithDict:(id)arg1;
- (void)persistItunesIdIfPresent:(id)arg1;
- (void)handleRateMeSettings:(id)arg1;
- (void)appLoadedWithLaunch:(BOOL)arg1;
- (void)dealloc;
- (id)initWithStoredState:(id)arg1 andCritterDelegate:(id)arg2;

@end

