//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TDXTeaserDelegate.h"

@class NSArray, NSString, TDXMenuItemRequest;

__attribute__((visibility("hidden")))
@interface TDXFrontPageViewModel : NSObject <TDXTeaserDelegate>
{
    BOOL _reloadEnabled;
    int _activityState;
    NSArray *_requests;
    TDXMenuItemRequest *_selectedFilterRequest;
    NSArray *_sortedStreamables;
    id <Streamable> _teaser;
    NSString *_onboardingHeading;
    NSString *_onboardingBodytext;
}

@property(retain, nonatomic) NSString *onboardingBodytext; // @synthesize onboardingBodytext=_onboardingBodytext;
@property(retain, nonatomic) NSString *onboardingHeading; // @synthesize onboardingHeading=_onboardingHeading;
@property(nonatomic) BOOL reloadEnabled; // @synthesize reloadEnabled=_reloadEnabled;
@property(retain, nonatomic) id <Streamable> teaser; // @synthesize teaser=_teaser;
@property(retain, nonatomic) NSArray *sortedStreamables; // @synthesize sortedStreamables=_sortedStreamables;
@property(retain, nonatomic) TDXMenuItemRequest *selectedFilterRequest; // @synthesize selectedFilterRequest=_selectedFilterRequest;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) int activityState; // @synthesize activityState=_activityState;
- (void).cxx_destruct;
- (id)streamableForIndexPath:(id)arg1;
- (BOOL)hasStreamables;
- (void)fetchStreamables;
- (void)configureForFrequentUpdates:(id)arg1;
- (void)configureForOnboarding:(id)arg1;
- (id)initWithMenuItem:(id)arg1;
- (id)initWithMenuItemRequests:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

