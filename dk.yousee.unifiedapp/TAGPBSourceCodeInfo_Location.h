//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMutableArray;

__attribute__((visibility("hidden")))
@interface TAGPBSourceCodeInfo_Location : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasLeadingComments; // @dynamic hasLeadingComments;
@property(nonatomic) BOOL hasTrailingComments; // @dynamic hasTrailingComments;
@property(retain, nonatomic) NSString *leadingComments; // @dynamic leadingComments;
@property(retain, nonatomic) TAGPBMutableArray *pathArray; // @dynamic pathArray;
@property(retain, nonatomic) TAGPBMutableArray *spanArray; // @dynamic spanArray;
@property(retain, nonatomic) NSString *trailingComments; // @dynamic trailingComments;

@end

