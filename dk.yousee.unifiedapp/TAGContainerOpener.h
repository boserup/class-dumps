//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TAGContainer, TAGManager;

__attribute__((visibility("hidden")))
@interface TAGContainerOpener : NSObject
{
    BOOL _haveNotified;
    TAGManager *_tagManager;
    NSString *_containerId;
    id <TAGContainerOpenerNotifier> _notifier;
    TAGContainer *_container;
    double _timeout;
}

+ (void)openContainerWithId:(id)arg1 tagManager:(id)arg2 openType:(int)arg3 timeout:(double *)arg4 notifier:(id)arg5;
+ (id)openContainerWithId:(id)arg1 tagManager:(id)arg2 openType:(int)arg3 timeout:(double *)arg4;
+ (double)defaultTimeout;
+ (void)initialize;
@property(retain) TAGContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) id <TAGContainerOpenerNotifier> notifier; // @synthesize notifier=_notifier;
@property BOOL haveNotified; // @synthesize haveNotified=_haveNotified;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) TAGManager *tagManager; // @synthesize tagManager=_tagManager;
- (void).cxx_destruct;
- (void)handleTimer:(id)arg1;
- (void)callNotifiers:(id)arg1;
- (void)openWithRefreshType:(int)arg1;
- (id)initWithContainerId:(id)arg1 tagManager:(id)arg2 timeout:(double *)arg3 notifier:(id)arg4;

@end

