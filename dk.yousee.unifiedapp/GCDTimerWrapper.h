//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GCDTimerWrapper : NSObject
{
    struct dispatch_source_s *timer;
}

- (void)dealloc;
- (void)cancel;
- (id)initWithDispatchTimer:(struct dispatch_source_s *)arg1;

@end

