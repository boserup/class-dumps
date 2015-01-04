//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class DDXMLElement, NSMutableDictionary, NSMutableSet, NSString;

@interface XMPPCapabilities : XMPPModule
{
    id <XMPPCapabilitiesStorage> xmppCapabilitiesStorage;
    NSString *myCapabilitiesNode;
    DDXMLElement *myCapabilitiesQuery;
    DDXMLElement *myCapabilitiesC;
    BOOL collectingMyCapabilities;
    NSMutableSet *discoRequestJidSet;
    NSMutableDictionary *discoRequestHashDict;
    NSMutableDictionary *discoTimerJidDict;
    BOOL autoFetchHashedCapabilities;
    BOOL autoFetchNonHashedCapabilities;
    BOOL autoFetchMyServerCapabilities;
    double capabilitiesRequestTimeout;
    NSMutableSet *timers;
}

- (void).cxx_destruct;
- (void)processTimeoutWithJID:(id)arg1;
- (void)processTimeoutWithHashKey:(id)arg1;
- (void)cancelTimeoutForDiscoRequestFromJID:(id)arg1;
- (void)setupTimeoutForDiscoRequestFromJID:(id)arg1 withHashKey:(id)arg2;
- (void)setupTimeoutForDiscoRequestFromJID:(id)arg1;
- (id)xmppStream:(id)arg1 willSendPresence:(id)arg2;
- (BOOL)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStream:(id)arg1 didReceivePresence:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)xmppStreamDidConnect:(id)arg1;
- (void)maybeQueryNextJidWithHashKey:(id)arg1 dueToHashMismatch:(BOOL)arg2;
- (void)handleDiscoErrorResponse:(id)arg1 fromJID:(id)arg2;
- (void)handleDiscoResponse:(id)arg1 fromJID:(id)arg2;
- (void)handleDiscoRequest:(id)arg1;
- (void)handleLegacyPresenceCapabilities:(id)arg1 fromJID:(id)arg2;
- (void)handlePresenceCapabilities:(id)arg1 fromJID:(id)arg2;
- (void)fetchCapabilitiesForJID:(id)arg1;
- (void)sendDiscoInfoQueryTo:(id)arg1 withNode:(id)arg2 ver:(id)arg3;
- (void)recollectMyCapabilities;
- (void)continueCollectMyCapabilities:(id)arg1;
- (void)collectMyCapabilities;
- (BOOL)getHash:(id *)arg1 algorithm:(id *)arg2 fromKey:(id)arg3;
- (id)keyFromHash:(id)arg1 algorithm:(id)arg2;
- (id)hashCapabilitiesFromQuery:(id)arg1;
@property BOOL autoFetchMyServerCapabilities; // @dynamic autoFetchMyServerCapabilities;
@property BOOL autoFetchNonHashedCapabilities; // @dynamic autoFetchNonHashedCapabilities;
@property BOOL autoFetchHashedCapabilities; // @dynamic autoFetchHashedCapabilities;
@property(copy, nonatomic) NSString *myCapabilitiesNode;
@property(readonly, nonatomic) id <XMPPCapabilitiesStorage> xmppCapabilitiesStorage; // @dynamic xmppCapabilitiesStorage;
- (void)dealloc;
- (id)initWithCapabilitiesStorage:(id)arg1 dispatchQueue:(struct dispatch_queue_s *)arg2;
- (id)initWithCapabilitiesStorage:(id)arg1;
- (id)initWithDispatchQueue:(struct dispatch_queue_s *)arg1;
- (id)init;

@end

