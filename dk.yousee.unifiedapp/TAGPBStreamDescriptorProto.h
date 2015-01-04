//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBStreamOptions;

__attribute__((visibility("hidden")))
@interface TAGPBStreamDescriptorProto : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *clientMessageType; // @dynamic clientMessageType;
@property(nonatomic) BOOL hasClientMessageType; // @dynamic hasClientMessageType;
@property(nonatomic) BOOL hasName; // @dynamic hasName;
@property(nonatomic) BOOL hasOptions; // @dynamic hasOptions;
@property(nonatomic) BOOL hasServerMessageType; // @dynamic hasServerMessageType;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TAGPBStreamOptions *options; // @dynamic options;
@property(retain, nonatomic) NSString *serverMessageType; // @dynamic serverMessageType;

@end

