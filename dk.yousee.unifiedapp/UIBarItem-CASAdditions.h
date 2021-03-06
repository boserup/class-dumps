//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarItem.h"

#import "CASStyleableItem.h"

@class NSString;

@interface UIBarItem (CASAdditions) <CASStyleableItem>
- (void)cas_setNeedsUpdateStyling;
- (BOOL)cas_needsUpdateStyling;
- (void)cas_updateStyling;
- (void)cas_updateStylingIfNeeded;
@property(readonly, nonatomic) __weak id <CASStyleableItem> cas_alternativeParent;
@property(nonatomic) __weak id <CASStyleableItem> cas_parent;
- (BOOL)cas_hasStyleClass:(id)arg1;
- (void)cas_removeStyleClass:(id)arg1;
- (void)cas_addStyleClass:(id)arg1;
@property(copy, nonatomic) NSString *cas_styleClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

