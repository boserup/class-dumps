//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class TAGPBDescriptor, TAGPBExtensionDescriptor;

__attribute__((visibility("hidden")))
@interface TAGPBExtensionField : NSObject <NSCopying>
{
    struct TAGPBExtensionDescription *description_;
    CDUnion_67553414 defaultTAGPBValue_;
    Class messageOrGroupClass_;
    TAGPBExtensionDescriptor *descriptor_;
    TAGPBDescriptor *containingType_;
}

@property(readonly, nonatomic) TAGPBExtensionDescriptor *descriptor; // @synthesize descriptor=descriptor_;
@property(readonly, nonatomic) TAGPBDescriptor *containingType; // @synthesize containingType=containingType_;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)compareByFieldNumber:(id)arg1;
- (void)mergeFromCodedInputStream:(id)arg1 unknownFields:(id)arg2 extensionRegistry:(id)arg3 builder:(id)arg4 tag:(int)arg5;
- (id)readSingleValueFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeMessageSetExtensionFromCodedInputStream:(id)arg1 unknownFields:(id)arg2;
- (id)description;
- (unsigned long)computeSerializedSizeIncludingTag:(id)arg1;
- (unsigned long)computeTAGPBSerializedSizesIncludingTags:(id)arg1;
- (void)writeValue:(id)arg1 includingTagToCodedOutputStream:(id)arg2;
- (void)writeTAGPBValues:(id)arg1 includingTagsToCodedOutputStream:(id)arg2;
@property(readonly, nonatomic) id defaultValue;
- (unsigned long)computeTAGPBSerializedSizeIncludingTag:(CDUnion_67553414)arg1;
- (unsigned long)computeTAGPBSerializedSizeNoTag:(CDUnion_67553414)arg1;
- (void)writeTAGPBValue:(CDUnion_67553414)arg1 noTagToCodedOutputStream:(id)arg2;
- (void)writeTAGPBValue:(CDUnion_67553414)arg1 includingTagToCodedOutputStream:(id)arg2;
@property(readonly, nonatomic) int wireType;
@property(readonly, nonatomic) int fieldNumber;
@property(readonly, nonatomic) BOOL isRepeated;
- (void)dealloc;
- (id)initWithDescription:(struct TAGPBExtensionDescription *)arg1;
- (id)init;

@end
