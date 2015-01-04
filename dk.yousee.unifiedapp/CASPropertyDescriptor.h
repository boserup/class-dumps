//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CASPropertyDescriptor : NSObject
{
    NSString *_key;
    NSArray *_argumentDescriptors;
    SEL _setter;
}

@property(nonatomic) SEL setter; // @synthesize setter=_setter;
@property(retain, nonatomic) NSArray *argumentDescriptors; // @synthesize argumentDescriptors=_argumentDescriptors;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 argumentDescriptors:(id)arg2 setter:(SEL)arg3;
- (id)initWithKey:(id)arg1 argumentDescriptors:(id)arg2;

@end

