//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPvCardTempBase.h"

@class NSString;

@interface XMPPvCardTempEmail : XMPPvCardTempBase
{
}

+ (id)vCardEmailFromElement:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak NSString *userid;
@property(nonatomic, setter=setPreferred:) BOOL isPreferred;
@property(nonatomic, setter=setX400:) BOOL isX400;
@property(nonatomic, setter=setInternet:) BOOL isInternet;
@property(nonatomic, setter=setWork:) BOOL isWork;
@property(nonatomic, setter=setHome:) BOOL isHome;

@end

