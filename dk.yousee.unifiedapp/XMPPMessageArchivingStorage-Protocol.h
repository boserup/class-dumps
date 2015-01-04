//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDXMLElement, XMPPJID, XMPPMessage, XMPPMessageArchiving, XMPPStream;

@protocol XMPPMessageArchivingStorage <NSObject>
- (void)archiveMessage:(XMPPMessage *)arg1 outgoing:(BOOL)arg2 xmppStream:(XMPPStream *)arg3;
- (BOOL)configureWithParent:(XMPPMessageArchiving *)arg1 queue:(struct dispatch_queue_s *)arg2;

@optional
- (DDXMLElement *)preferencesForUser:(XMPPJID *)arg1;
- (void)setPreferences:(DDXMLElement *)arg1 forUser:(XMPPJID *)arg2;
@end

