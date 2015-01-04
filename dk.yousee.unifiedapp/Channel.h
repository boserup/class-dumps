//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "Streamable.h"

@class NSArray, NSNumber, NSString, Program, TDXMenuItemRequest;

__attribute__((visibility("hidden")))
@interface Channel : NSObject <Streamable, NSCopying>
{
    BOOL _tvEverywhere;
    NSArray *_programs;
    NSString *_name;
    NSString *_largeSeAppLogoUrl;
    NSString *_niceName;
    NSNumber *_id;
    Program *_nowProgram;
    Program *_nextProgram;
    TDXMenuItemRequest *_relatedRequest;
}

@property(readonly, nonatomic) BOOL tvEverywhere; // @synthesize tvEverywhere=_tvEverywhere;
@property(retain, nonatomic) TDXMenuItemRequest *relatedRequest; // @synthesize relatedRequest=_relatedRequest;
@property(retain, nonatomic) Program *nextProgram; // @synthesize nextProgram=_nextProgram;
@property(retain, nonatomic) Program *nowProgram; // @synthesize nowProgram=_nowProgram;
@property(copy, nonatomic) NSNumber *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *niceName; // @synthesize niceName=_niceName;
@property(copy, nonatomic) NSString *largeSeAppLogoUrl; // @synthesize largeSeAppLogoUrl=_largeSeAppLogoUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *programs; // @synthesize programs=_programs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetScaleId;
- (int)assetScaleType;
- (id)decorations;
- (id)lengthInMinutes;
- (id)epgId;
- (id)tvShowId;
- (id)releaseYear;
- (id)genresString;
- (id)castString;
- (id)directorsString;
- (id)availableTo;
- (BOOL)soonNotAvailable;
- (id)cast;
- (id)directors;
- (id)summary;
- (id)largeCoverUrl;
- (id)title;
- (BOOL)favoriteSupport;
- (id)favoriteId;
- (int)favoriteType;
- (id)currentProgram;
- (int)area;
- (double)duration;
- (void)replacePrograms:(id)arg1;
- (void)sortPrograms;
- (void)addPrograms:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)changeNextProgram:(id)arg1;
- (void)changeNowProgram:(id)arg1;
- (BOOL)isEqualExceptForCurrentProgram:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)initForCopyingWithChannel:(id)arg1 andZone:(struct _NSZone *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

