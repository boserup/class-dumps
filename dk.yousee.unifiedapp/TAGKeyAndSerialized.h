//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface TAGKeyAndSerialized : NSObject
{
    NSString *_key;
    NSData *_serialized;
}

@property(readonly) NSData *serialized; // @synthesize serialized=_serialized;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)arg1 serialized:(id)arg2;

@end

