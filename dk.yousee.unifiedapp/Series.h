//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Streamable.h"
#import "TDXImageScaleAsset.h"

@class NSNumber, NSString, Program;

__attribute__((visibility("hidden")))
@interface Series : NSObject <Streamable, TDXImageScaleAsset>
{
    NSString *_title;
    NSString *_imagePrefix;
    NSString *_image169Large;
    NSString *_image169Medium;
    NSString *_seriesId;
    NSString *_epgId;
    NSNumber *_channelId;
    NSNumber *_id;
    Program *_program;
}

@property(readonly, copy, nonatomic) Program *program; // @synthesize program=_program;
@property(readonly, copy, nonatomic) NSNumber *id; // @synthesize id=_id;
@property(readonly, copy, nonatomic) NSNumber *channelId; // @synthesize channelId=_channelId;
@property(readonly, copy, nonatomic) NSString *epgId; // @synthesize epgId=_epgId;
@property(readonly, copy, nonatomic) NSString *seriesId; // @synthesize seriesId=_seriesId;
@property(copy, nonatomic) NSString *image169Medium; // @synthesize image169Medium=_image169Medium;
@property(copy, nonatomic) NSString *image169Large; // @synthesize image169Large=_image169Large;
@property(readonly, copy, nonatomic) NSString *imagePrefix; // @synthesize imagePrefix=_imagePrefix;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)assetScaleId;
- (int)assetScaleType;
- (id)availableTo;
- (BOOL)soonNotAvailable;
- (id)cast;
- (id)directors;
- (id)decorations;
- (id)releaseYear;
- (id)genresString;
- (id)castString;
- (id)directorsString;
- (id)summary;
- (id)largeCoverUrl;
- (BOOL)favoriteSupport;
- (id)favoriteId;
- (int)favoriteType;
- (id)lengthInMinutes;
- (double)duration;
- (id)currentProgram;
- (id)tvShowId;
- (int)area;
- (id)prefixImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
