//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TAGBoolean : NSObject <NSCopying, NSCoding>
{
    BOOL _boolValue;
}

+ (id)no;
+ (id)yes;
+ (id)booleanWithString:(id)arg1;
+ (id)booleanWithBool:(BOOL)arg1;
+ (void)initialize;
@property(nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBool:(BOOL)arg1;

@end

