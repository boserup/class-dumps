//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class TAGPBMutableArray;

__attribute__((visibility("hidden")))
@interface TAGPBServiceOptions : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL deprecated; // @dynamic deprecated;
@property(nonatomic) double failureDetectionDelay; // @dynamic failureDetectionDelay;
@property(nonatomic) BOOL hasDeprecated; // @dynamic hasDeprecated;
@property(nonatomic) BOOL hasFailureDetectionDelay; // @dynamic hasFailureDetectionDelay;
@property(nonatomic) BOOL hasMulticastStub; // @dynamic hasMulticastStub;
@property(nonatomic) BOOL multicastStub; // @dynamic multicastStub;
@property(retain, nonatomic) TAGPBMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;

@end

