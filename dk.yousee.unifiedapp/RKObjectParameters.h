//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface RKObjectParameters : NSObject
{
    NSMutableDictionary *_parameters;
}

@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)requestParameters;
- (void)addParameters:(id)arg1 atRootKeyPath:(id)arg2 inArray:(BOOL)arg3;
- (id)init;

@end

