//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface TAGDataProvider : NSObject
{
    BOOL _hasHits;
    unsigned int _maxHitCount;
    NSManagedObjectContext *_context;
    double _maxHitAge;
}

@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) double maxHitAge; // @synthesize maxHitAge=_maxHitAge;
@property(nonatomic) unsigned int maxHitCount; // @synthesize maxHitCount=_maxHitCount;
@property(nonatomic) BOOL hasHits; // @synthesize hasHits=_hasHits;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)save;
- (unsigned int)context:(id)arg1 hitCount:(id *)arg2;
- (BOOL)deleteExcessHits:(id *)arg1;
- (BOOL)context:(id)arg1 deleteRequest:(id)arg2 error:(id *)arg3;
- (void)onExit:(id)arg1;
- (oneway void)deleteHits:(id)arg1;
- (oneway void)fetchHitsWithLimit:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)addHitWithURLString:(id)arg1;
- (oneway void)updateFailedHits:(id)arg1;

@end

