//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPvCardTempBase.h"

@class NSString;

@interface XMPPvCardTempTel : XMPPvCardTempBase
{
}

+ (id)vCardTelFromElement:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak NSString *number;
@property(nonatomic, setter=setPreferred:) BOOL isPreferred;
@property(nonatomic, setter=setPCS:) BOOL isPCS;
@property(nonatomic, setter=setISDN:) BOOL isISDN;
@property(nonatomic, setter=setModem:) BOOL isModem;
@property(nonatomic, setter=setBBS:) BOOL isBBS;
@property(nonatomic, setter=setVideo:) BOOL isVideo;
@property(nonatomic, setter=setCell:) BOOL isCell;
@property(nonatomic, setter=setMessaging:) BOOL hasMessaging;
@property(nonatomic, setter=setPager:) BOOL isPager;
@property(nonatomic, setter=setFax:) BOOL isFax;
@property(nonatomic, setter=setVoice:) BOOL isVoice;
@property(nonatomic, setter=setWork:) BOOL isWork;
@property(nonatomic, setter=setHome:) BOOL isHome;

@end

