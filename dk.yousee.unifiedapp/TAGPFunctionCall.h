//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class TAGPBMutableArray;

__attribute__((visibility("hidden")))
@interface TAGPFunctionCall : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int function; // @dynamic function;
@property(nonatomic) BOOL hasFunction; // @dynamic hasFunction;
@property(nonatomic) BOOL hasLiveOnly; // @dynamic hasLiveOnly;
@property(nonatomic) BOOL hasName; // @dynamic hasName;
@property(nonatomic) BOOL hasServerSide; // @dynamic hasServerSide;
@property(nonatomic) BOOL liveOnly; // @dynamic liveOnly;
@property(nonatomic) int name; // @dynamic name;
@property(retain, nonatomic) TAGPBMutableArray *propertyArray; // @dynamic propertyArray;
@property(nonatomic) BOOL serverSide; // @dynamic serverSide;

@end

