//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CASDeviceSelectorItem.h"

@class NSString;

@interface CASDeviceOSVersionItem : NSObject <CASDeviceSelectorItem>
{
    NSString *_version;
    int _relation;
}

@property(nonatomic) int relation; // @synthesize relation=_relation;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)stringValue;
- (BOOL)isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

