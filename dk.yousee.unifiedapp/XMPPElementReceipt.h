//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XMPPElementReceipt : NSObject
{
    unsigned int atomicFlags;
    struct dispatch_semaphore_s *semaphore;
}

- (void)dealloc;
- (BOOL)wait:(double)arg1;
- (void)signalFailure;
- (void)signalSuccess;
- (id)init;

@end

