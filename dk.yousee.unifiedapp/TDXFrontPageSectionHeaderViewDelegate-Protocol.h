//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TDXMenuItemRequest;

@protocol TDXFrontPageSectionHeaderViewDelegate <NSObject>

@optional
- (BOOL)hideSectionTitle;
- (void)didSelectFilterButtonRequest:(TDXMenuItemRequest *)arg1 withBaseRequest:(TDXMenuItemRequest *)arg2;
- (void)didSelectExpandButtonWithExpandRequest:(TDXMenuItemRequest *)arg1 andSectionRequest:(TDXMenuItemRequest *)arg2 reloadEnabled:(BOOL)arg3;
- (void)didSelectExpandButtonWithExpandRequest:(TDXMenuItemRequest *)arg1 andSectionRequest:(TDXMenuItemRequest *)arg2;
@end

