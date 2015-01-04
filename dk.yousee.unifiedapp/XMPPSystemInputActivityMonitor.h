//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class NSDate;

@interface XMPPSystemInputActivityMonitor : XMPPModule
{
    struct dispatch_source_s *timer;
    BOOL active;
    NSDate *lastActivityDate;
    double inactivityTimeInterval;
}

- (void).cxx_destruct;
@property double inactivityTimeInterval;
@property(readonly) NSDate *lastActivityDate;
@property(readonly, getter=isActive) BOOL active;
- (void)_setLastActivityDate:(id)arg1;
- (void)dealloc;
- (void)deactivate;
- (BOOL)activate:(id)arg1;
- (id)initWithDispatchQueue:(struct dispatch_queue_s *)arg1;
- (id)init;

@end

