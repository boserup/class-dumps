//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TDXImageScaleUrlManager : NSObject
{
}

+ (id)sharedInstance;
- (id)stringForType:(int)arg1;
- (id)buildUrlForType:(int)arg1 andId:(id)arg2 andWidth:(unsigned int)arg3 andHeight:(float)arg4;
- (id)buildUrlForType:(int)arg1 andId:(id)arg2 andWidth:(int)arg3;
- (id)urlFor:(id)arg1 withWidth:(float)arg2;
- (id)urlFor:(id)arg1 withWidth:(float)arg2 andHeight:(float)arg3;

@end
