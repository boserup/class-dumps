//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "RKValueTransforming.h"

@class NSMutableArray, NSString;

@interface RKCompoundValueTransformer : NSObject <RKValueTransforming, NSCopying, NSFastEnumeration>
{
    NSMutableArray *_valueTransformers;
}

+ (id)compoundValueTransformerWithValueTransformers:(id)arg1;
@property(retain, nonatomic) NSMutableArray *valueTransformers; // @synthesize valueTransformers=_valueTransformers;
- (void).cxx_destruct;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)validateTransformationFromClass:(Class)arg1 toClass:(Class)arg2;
- (BOOL)transformValue:(id)arg1 toValue:(id *)arg2 ofClass:(Class)arg3 error:(id *)arg4;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)valueTransformersForTransformingFromClass:(Class)arg1 toClass:(Class)arg2;
- (unsigned int)numberOfValueTransformers;
- (void)insertValueTransformer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeValueTransformer:(id)arg1;
- (void)addValueTransformer:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
