//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSString;

__attribute__((visibility("hidden")))
@interface GAIDataStore : NSObject
{
    BOOL _setUpCoreData;
    NSString *_clientId;
    unsigned int _maxHitCount;
    NSManagedObjectContext *_oldContext;
    NSManagedObjectContext *_context;
    NSManagedObjectContext *_currentContext;
}

+ (id)dataStore;
+ (id)thread;
+ (id)databaseFullURL:(id)arg1;
+ (id)databaseFullPath:(id)arg1;
@property(retain, nonatomic) NSManagedObjectContext *currentContext; // @synthesize currentContext=_currentContext;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSManagedObjectContext *oldContext; // @synthesize oldContext=_oldContext;
@property(nonatomic) unsigned int maxHitCount; // @synthesize maxHitCount=_maxHitCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onExit:(id)arg1;
- (BOOL)setUpCoreData;
- (id)init;
- (BOOL)save:(id *)arg1;
- (BOOL)deleteAllHits:(id *)arg1;
- (BOOL)deleteHitsWithIds:(id)arg1 error:(id *)arg2;
- (id)fetchHitsWithLimit:(unsigned int)arg1 error:(id *)arg2;
- (void)addHit:(id)arg1;
- (int)hitCount:(id *)arg1;
@property(retain, nonatomic) NSString *clientId;
- (id)fetchClientId;
- (id)contextWithModel:(id)arg1 URL:(id)arg2;
- (id)coordinatorWithModel:(id)arg1 URL:(id)arg2;
- (id)performBlockAndWait:(CDUnknownBlockType)arg1 withError:(id *)arg2;
- (void)gai_performBlockHelper:(id)arg1;
- (BOOL)context:(id)arg1 removeStaleHits:(id *)arg2;
- (int)context:(id)arg1 hitCount:(id *)arg2;
- (BOOL)deleteExcessHits:(id *)arg1;
- (id)oldHitDescription:(id)arg1;
- (id)requestPropertyWithName:(id)arg1;
- (id)requestHitsWithLimit:(unsigned int)arg1;
- (id)requestEntityName:(id)arg1;

@end
