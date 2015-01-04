//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CRDetectedClass : NSObject
{
    BOOL _isNSObjectSubclass;
    BOOL _isWebViewSubclass;
    BOOL _isViewControllerSubclass;
    NSString *_name;
}

+ (id)detectedClassWithFoundClass:(const struct cr_found_class_t *)arg1;
@property(nonatomic) BOOL isViewControllerSubclass; // @synthesize isViewControllerSubclass=_isViewControllerSubclass;
@property(nonatomic) BOOL isWebViewSubclass; // @synthesize isWebViewSubclass=_isWebViewSubclass;
@property(nonatomic) BOOL isNSObjectSubclass; // @synthesize isNSObjectSubclass=_isNSObjectSubclass;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (Class)getClass;
- (void)dealloc;
- (id)initWithFoundClass:(const struct cr_found_class_t *)arg1;

@end
