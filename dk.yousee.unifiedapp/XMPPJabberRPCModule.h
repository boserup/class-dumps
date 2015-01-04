//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class NSMutableDictionary;

@interface XMPPJabberRPCModule : XMPPModule
{
    NSMutableDictionary *rpcIDs;
    double defaultTimeout;
}

- (void).cxx_destruct;
- (void)xmppCapabilities:(id)arg1 collectingMyCapabilities:(id)arg2;
- (BOOL)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)timeoutRemoveRpcID:(id)arg1;
- (id)sendRpcIQ:(id)arg1 withTimeout:(double)arg2;
- (id)sendRpcIQ:(id)arg1;
- (void)dealloc;
- (void)deactivate;
- (BOOL)activate:(id)arg1;
- (id)initWithDispatchQueue:(struct dispatch_queue_s *)arg1;
- (id)init;
@property(nonatomic) double defaultTimeout; // @dynamic defaultTimeout;

@end

