//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface Progress : NSObject
{
    NSString *_type;
    NSNumber *_seconds;
    NSString *_timestamp;
    NSString *_contentId;
    NSNumber *_percentage;
}

@property(retain, nonatomic) NSNumber *percentage; // @synthesize percentage=_percentage;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *seconds; // @synthesize seconds=_seconds;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

