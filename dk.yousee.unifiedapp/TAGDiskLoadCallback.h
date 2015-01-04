//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGLoadCallback.h"

@class TAGContainer;

__attribute__((visibility("hidden")))
@interface TAGDiskLoadCallback : NSObject <TAGLoadCallback>
{
    id <TAGContainerCallback> _callback;
    TAGContainer *_container;
}

@property(retain) TAGContainer *container; // @synthesize container=_container;
@property(retain) id <TAGContainerCallback> callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)close;
- (int)failureToRefreshFailure:(int)arg1;
- (void)onFailure:(int)arg1;
- (void)onSuccess:(id)arg1;
- (void)startLoad;
- (id)initWithCallback:(id)arg1 container:(id)arg2;

@end

