//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInvocation.h"

@class RACTuple;

@interface NSInvocation (RACTypeParsing)
- (id)rac_returnValue;
@property(copy, nonatomic) RACTuple *rac_argumentsTuple;
- (id)rac_argumentAtIndex:(unsigned int)arg1;
- (void)rac_setArgument:(id)arg1 atIndex:(unsigned int)arg2;
@end

