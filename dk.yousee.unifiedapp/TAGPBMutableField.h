//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBField.h"

__attribute__((visibility("hidden")))
@interface TAGPBMutableField : TAGPBField
{
}

- (void)addGroup:(id)arg1;
- (void)addLengthDelimited:(id)arg1;
- (void)addFixed64:(unsigned long long)arg1;
- (void)addFixed32:(unsigned int)arg1;
- (void)addVarint:(unsigned long long)arg1;
- (void)mergeFromField:(id)arg1;
- (id)initWithNumber:(int)arg1;

@end

