//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface StreamURL : NSObject
{
    NSURL *_url;
    NSString *_presenceinfo;
}

@property(readonly, nonatomic) NSString *presenceinfo; // @synthesize presenceinfo=_presenceinfo;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResults:(id)arg1;
- (id)initWithUrl:(id)arg1 presenceInfo:(id)arg2;
- (id)initWithUrl:(id)arg1;

@end

