//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "XMPPRoomOccupant.h"

@class NSString, XMPPJID, XMPPPresence;

@interface XMPPRoomOccupantMemoryStorageObject : NSObject <XMPPRoomOccupant, NSCopying, NSCoding>
{
    XMPPPresence *presence;
    XMPPJID *jid;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (int)compare:(id)arg1;
@property(readonly) XMPPPresence *presence;
@property(readonly) XMPPJID *realJID;
@property(readonly) NSString *affiliation;
@property(readonly) NSString *role;
- (id)itemAttributeStringValueForName:(id)arg1;
@property(readonly) NSString *nickname;
@property(readonly) XMPPJID *jid;
@property(readonly) XMPPJID *roomJID;
- (void)updateWithPresence:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresence:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

