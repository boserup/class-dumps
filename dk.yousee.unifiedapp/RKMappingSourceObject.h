//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class NSDictionary;

@interface RKMappingSourceObject : NSProxy
{
    id _object;
    id _parentObject;
    id _rootObject;
    NSDictionary *_metadata;
}

@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
@property(retain, nonatomic) id parentObject; // @synthesize parentObject=_parentObject;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (Class)class;
- (id)description;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1 parentObject:(id)arg2 rootObject:(id)arg3 metadata:(id)arg4;

@end

