//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TVShowPackage : NSObject
{
    NSString *_id;
    NSString *_name;
    NSString *_seasonNo;
    NSArray *_moviesInPackage;
}

@property(readonly, copy, nonatomic) NSArray *moviesInPackage; // @synthesize moviesInPackage=_moviesInPackage;
@property(readonly, copy, nonatomic) NSString *seasonNo; // @synthesize seasonNo=_seasonNo;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

