//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TDXConfiguration : NSObject
{
    BOOL _liveTv;
    BOOL _tvGuide;
    NSArray *_menuItems;
    NSString *_startPageGUID;
}

@property(readonly, nonatomic) BOOL tvGuide; // @synthesize tvGuide=_tvGuide;
@property(readonly, nonatomic) BOOL liveTv; // @synthesize liveTv=_liveTv;
@property(readonly, nonatomic) NSString *startPageGUID; // @synthesize startPageGUID=_startPageGUID;
@property(readonly, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;

@end

