//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GAIRequestBuilder : NSObject
{
    NSString *userAgent_;
}

@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=userAgent_;
- (id)requestGetUrl:(id)arg1 payload:(id)arg2;
- (id)requestPostUrl:(id)arg1 payload:(id)arg2 compression:(unsigned int)arg3;
- (id)baseRequest;
- (id)parametersForHit:(id)arg1;
- (id)parameterValueToString:(id)arg1;
- (id)encodeParameters:(id)arg1;
- (id)encodeParameter:(id)arg1 withValue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

