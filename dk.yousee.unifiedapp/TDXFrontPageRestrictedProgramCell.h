//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDXFrontPageProgramCell.h"

@class TDXRestrictionView;

__attribute__((visibility("hidden")))
@interface TDXFrontPageRestrictedProgramCell : TDXFrontPageProgramCell
{
    TDXRestrictionView *_restrictionView;
}

+ (id)identifier;
@property(retain, nonatomic) TDXRestrictionView *restrictionView; // @synthesize restrictionView=_restrictionView;
- (void).cxx_destruct;
- (void)configureForObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

