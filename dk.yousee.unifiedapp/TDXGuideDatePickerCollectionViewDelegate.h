//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TDXGuideDatePickerCollectionViewDelegate : NSObject <UICollectionViewDelegate>
{
    CDUnknownBlockType _onScrollViewDidEndScrollingAnimation;
}

@property(copy, nonatomic) CDUnknownBlockType onScrollViewDidEndScrollingAnimation; // @synthesize onScrollViewDidEndScrollingAnimation=_onScrollViewDidEndScrollingAnimation;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)initWithOnScrollViewDidEndScrollingAnimation:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

