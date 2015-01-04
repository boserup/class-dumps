//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class TAGPResource, TAGPSupplementedResource;

__attribute__((visibility("hidden")))
@interface TAGPResourceWithMetadata : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasResource; // @dynamic hasResource;
@property(nonatomic) BOOL hasSupplementedResource; // @dynamic hasSupplementedResource;
@property(nonatomic) BOOL hasTimeStamp; // @dynamic hasTimeStamp;
@property(retain, nonatomic) TAGPResource *resource; // @dynamic resource;
@property(retain, nonatomic) TAGPSupplementedResource *supplementedResource; // @dynamic supplementedResource;
@property(nonatomic) long long timeStamp; // @dynamic timeStamp;

@end

