//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TDXCMSTextViewModel : NSObject
{
    NSArray *_cmsTexts;
    int _activityState;
    NSString *_contentUrl;
}

@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(nonatomic) int activityState; // @synthesize activityState=_activityState;
@property(retain, nonatomic) NSArray *cmsTexts; // @synthesize cmsTexts=_cmsTexts;
- (void).cxx_destruct;
- (void)fetchContent;
- (id)initWithUrl:(id)arg1;

@end

