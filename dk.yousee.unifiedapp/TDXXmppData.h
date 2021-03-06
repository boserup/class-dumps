//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface TDXXmppData : NSObject
{
    BOOL _allow;
    NSString *_domain;
    NSString *_token;
    NSString *_renewalToken;
    NSString *_userName;
    NSDate *_expireDate;
    NSDateFormatter *_dateFormatter;
}

+ (void)storeData:(id)arg1;
+ (id)retrieveXmppData;
+ (void)clearStoredXMPPData;
+ (id)unwrap:(id)arg1;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *renewalToken; // @synthesize renewalToken=_renewalToken;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) BOOL allow; // @synthesize allow=_allow;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)description;
- (id)wrap;
- (_Bool)isEqualToXmppData:(id)arg1;
- (void)setUpDateFormatter;
- (id)initWithDictionary:(id)arg1;

@end

