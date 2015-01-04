//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GAIStringUtil : NSObject
{
}

+ (id)stripLeadingAmpersand:(id)arg1;
+ (id)decodeParametersFromUrl:(id)arg1;
+ (id)decodeParametersFromQuery:(id)arg1;
+ (id)percentDecode:(id)arg1;
+ (id)percentEncode:(id)arg1;
+ (id)currencyMicrosString:(long long)arg1;
+ (id)decimalString:(double)arg1 decimals:(int)arg2;
+ (id)uintString:(unsigned long long)arg1;
+ (id)intString:(long long)arg1;
+ (id)trim:(id)arg1;
+ (id)urlParams:(id)arg1;
- (id)init;

@end

