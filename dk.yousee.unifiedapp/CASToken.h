//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CASToken : NSObject
{
    int _type;
    id _value;
    int _lineNumber;
}

+ (id)tokenOfType:(int)arg1 value:(id)arg2;
+ (id)tokenOfType:(int)arg1;
+ (id)stringForType:(int)arg1;
@property(nonatomic) int lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)isPossiblySelectorDelimiter;
- (BOOL)isPossiblyExpression;
- (BOOL)isPossiblyVar;
- (BOOL)isPossiblySelector;
- (BOOL)valueIsEqualTo:(id)arg1;
- (BOOL)isWhitespace;
- (id)stringValue;
- (id)description;

@end

