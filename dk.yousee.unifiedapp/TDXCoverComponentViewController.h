//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class TDXDecorationsView, TDXPlayerViewModel, TDXRestrictionView, UIButton, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface TDXCoverComponentViewController : UIViewController
{
    TDXPlayerViewModel *_viewModel;
    CDUnknownBlockType _playAction;
    UIImageView *_programImageView;
    UIImageView *_movieImageViewBackground;
    UIView *_transparentLayer;
    UIImageView *_movieCoverImageView;
    TDXDecorationsView *_movieCoverDecorationsView;
    UIButton *_playButton;
    TDXDecorationsView *_tvShowEpisodeDecorationsView;
    TDXRestrictionView *_restrictionView;
    id <Streamable> _streamableItem;
}

@property(retain, nonatomic) id <Streamable> streamableItem; // @synthesize streamableItem=_streamableItem;
@property(retain, nonatomic) TDXRestrictionView *restrictionView; // @synthesize restrictionView=_restrictionView;
@property(retain, nonatomic) TDXDecorationsView *tvShowEpisodeDecorationsView; // @synthesize tvShowEpisodeDecorationsView=_tvShowEpisodeDecorationsView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TDXDecorationsView *movieCoverDecorationsView; // @synthesize movieCoverDecorationsView=_movieCoverDecorationsView;
@property(retain, nonatomic) UIImageView *movieCoverImageView; // @synthesize movieCoverImageView=_movieCoverImageView;
@property(retain, nonatomic) UIView *transparentLayer; // @synthesize transparentLayer=_transparentLayer;
@property(retain, nonatomic) UIImageView *movieImageViewBackground; // @synthesize movieImageViewBackground=_movieImageViewBackground;
@property(retain, nonatomic) UIImageView *programImageView; // @synthesize programImageView=_programImageView;
@property(copy, nonatomic) CDUnknownBlockType playAction; // @synthesize playAction=_playAction;
@property(nonatomic) __weak TDXPlayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)blurImage:(id)arg1;
- (id)imageWithImage:(id)arg1 cropInRelativeRect:(struct CGRect)arg2;
- (id)imageWithImage:(id)arg1 cropInRect:(struct CGRect)arg2;
- (void)updateMovieImageWithURL:(id)arg1;
- (void)updateProgramImageWithURL:(id)arg1;
- (void)updateImage;
- (void)updateViewConstraints;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 andPlayAction:(CDUnknownBlockType)arg2;

@end

