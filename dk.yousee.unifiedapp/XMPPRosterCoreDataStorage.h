//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPCoreDataStorage.h"

#import "XMPPRosterStorage.h"

@class NSMutableSet, NSString, XMPPRoster;

@interface XMPPRosterCoreDataStorage : XMPPCoreDataStorage <XMPPRosterStorage>
{
    XMPPRoster *parent;
    struct dispatch_queue_s *parentQueue;
    void *parentQueueTag;
    NSMutableSet *rosterPopulationSet;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)jidsForXMPPStream:(id)arg1;
- (void)clearAllUsersAndResourcesForXMPPStream:(id)arg1;
- (void)clearAllResourcesForXMPPStream:(id)arg1;
- (void)setPhoto:(id)arg1 forUserWithJID:(id)arg2 xmppStream:(id)arg3;
- (BOOL)userExistsWithJID:(id)arg1 xmppStream:(id)arg2;
- (void)handlePresence:(id)arg1 xmppStream:(id)arg2;
- (void)handleRosterItem:(id)arg1 xmppStream:(id)arg2;
- (void)endRosterPopulationForXMPPStream:(id)arg1;
- (void)beginRosterPopulationForXMPPStream:(id)arg1;
- (id)resourceForJID:(id)arg1 xmppStream:(id)arg2 managedObjectContext:(id)arg3;
- (id)userForJID:(id)arg1 xmppStream:(id)arg2 managedObjectContext:(id)arg3;
- (id)myResourceForXMPPStream:(id)arg1 managedObjectContext:(id)arg2;
- (id)myUserForXMPPStream:(id)arg1 managedObjectContext:(id)arg2;
- (void)didCreateManagedObjectContext;
- (void)_clearAllResourcesForXMPPStream:(id)arg1;
- (void)dealloc;
- (BOOL)configureWithParent:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

