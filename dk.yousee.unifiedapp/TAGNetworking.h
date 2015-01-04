//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@class TAGNetReachability;

__attribute__((visibility("hidden")))
@interface TAGNetworking : NSOperationQueue
{
    BOOL _isReachable;
    TAGNetReachability *_reachability;
}

@property(retain, nonatomic) TAGNetReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) BOOL isReachable; // @synthesize isReachable=_isReachable;
- (void).cxx_destruct;
- (id)requestWithURL:(id)arg1;
- (id)sendURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

