//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface CASStyleSelector : NSObject <NSCopying>
{
    BOOL _shouldSelectSubclasses;
    BOOL _shouldSelectIndirectSuperview;
    BOOL _parent;
    BOOL _shouldConcatToParent;
    Class _objectClass;
    NSString *_styleClass;
    NSDictionary *_arguments;
    CASStyleSelector *_parentSelector;
}

@property(retain, nonatomic) CASStyleSelector *parentSelector; // @synthesize parentSelector=_parentSelector;
@property(retain, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property(nonatomic) BOOL shouldConcatToParent; // @synthesize shouldConcatToParent=_shouldConcatToParent;
@property(nonatomic, getter=isParent) BOOL parent; // @synthesize parent=_parent;
@property(nonatomic) BOOL shouldSelectIndirectSuperview; // @synthesize shouldSelectIndirectSuperview=_shouldSelectIndirectSuperview;
@property(nonatomic) BOOL shouldSelectSubclasses; // @synthesize shouldSelectSubclasses=_shouldSelectSubclasses;
@property(copy, nonatomic) NSString *styleClass; // @synthesize styleClass=_styleClass;
@property(retain, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (void).cxx_destruct;
- (BOOL)matchesItem:(id)arg1;
- (BOOL)matchesAncestorsOfItem:(id)arg1 traverse:(BOOL)arg2;
- (id)stringValue;
- (BOOL)shouldSelectItem:(id)arg1;
- (int)precedence;
@property(readonly, nonatomic) CASStyleSelector *lastSelector;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

