//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "TDXCell.h"

@class NSString, TDXDecorationsView, TDXProgressView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TDXSidebarMovieCell : UICollectionViewCell <TDXCell>
{
    UIImageView *_coverImage;
    TDXProgressView *_progressView;
    TDXDecorationsView *_decorationsView;
    UIImageView *_placeholderImage;
    UILabel *_titleLabel;
    UILabel *_genreLabel;
    struct UIEdgeInsets _margins;
}

+ (id)identifier;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(retain, nonatomic) UILabel *genreLabel; // @synthesize genreLabel=_genreLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) TDXDecorationsView *decorationsView; // @synthesize decorationsView=_decorationsView;
@property(retain, nonatomic) TDXProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)configureForObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

