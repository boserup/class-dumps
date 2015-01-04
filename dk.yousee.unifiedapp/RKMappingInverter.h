//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, RKObjectMapping;

@interface RKMappingInverter : NSObject
{
    RKObjectMapping *_mapping;
    NSMutableDictionary *_invertedMappings;
}

@property(retain, nonatomic) NSMutableDictionary *invertedMappings; // @synthesize invertedMappings=_invertedMappings;
@property(retain, nonatomic) RKObjectMapping *mapping; // @synthesize mapping=_mapping;
- (void).cxx_destruct;
- (id)inverseMappingWithPredicate:(CDUnknownBlockType)arg1;
- (id)invertMapping:(id)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (id)initWithMapping:(id)arg1;

@end
