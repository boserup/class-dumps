//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface StreamingKMSBufferObject : NSObject <NSCoding>
{
    NSObject *value;
    long createTime;
}

@property long createTime; // @synthesize createTime;
@property(retain) NSObject *value; // @synthesize value;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1 createTime:(long)arg2;

@end

