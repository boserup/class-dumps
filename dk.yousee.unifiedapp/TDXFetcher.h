//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RKObjectManager;

__attribute__((visibility("hidden")))
@interface TDXFetcher : NSObject
{
    RKObjectManager *_objectManager;
    id _activity;
}

+ (id)decodeProtocolError:(id)arg1 forPath:(id)arg2;
+ (id)addStandardAttributes:(id)arg1;
+ (void)setSessionId:(id)arg1;
+ (void)DELETE:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)GETWithoutMapping:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3;
+ (void)PUT:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)GET:(id)arg1 success:(CDUnknownBlockType)arg2;
+ (void)GET:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3;
+ (void)GET:(id)arg1 withParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)GET:(id)arg1 withParams:(id)arg2 timeOut:(double)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)GET:(id)arg1 withUrlParameters:(id)arg2 headerParameters:(id)arg3 timeOut:(double)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)GET:(id)arg1 withUrlParameters:(id)arg2 headerParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)GET:(id)arg1 timeOut:(int)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)addHeadersToAFNetworkRequest:(id)arg1 headerParameters:(id)arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) id activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)setupObjectMapping;
@property(readonly, nonatomic) RKObjectManager *objectManager;
- (id)init;

@end

