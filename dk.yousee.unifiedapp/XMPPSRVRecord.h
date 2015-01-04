//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XMPPSRVRecord : NSObject
{
    unsigned short priority;
    unsigned short weight;
    unsigned short port;
    NSString *target;
    unsigned int sum;
    unsigned int srvResultsIndex;
}

+ (id)recordWithPriority:(unsigned short)arg1 weight:(unsigned short)arg2 port:(unsigned short)arg3 target:(id)arg4;
@property(nonatomic) unsigned int srvResultsIndex; // @synthesize srvResultsIndex;
@property(nonatomic) unsigned int sum; // @synthesize sum;
@property(readonly, nonatomic) NSString *target; // @synthesize target;
@property(readonly, nonatomic) unsigned short port; // @synthesize port;
@property(readonly, nonatomic) unsigned short weight; // @synthesize weight;
@property(readonly, nonatomic) unsigned short priority; // @synthesize priority;
- (void).cxx_destruct;
- (int)compareByPriority:(id)arg1;
- (id)description;
- (id)initWithPriority:(unsigned short)arg1 weight:(unsigned short)arg2 port:(unsigned short)arg3 target:(id)arg4;

@end

