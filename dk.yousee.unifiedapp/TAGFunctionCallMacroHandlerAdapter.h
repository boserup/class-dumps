//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGCustomEvaluator.h"

@class TAGContainer;

__attribute__((visibility("hidden")))
@interface TAGFunctionCallMacroHandlerAdapter : NSObject <TAGCustomEvaluator>
{
    TAGContainer *_container;
}

@property(retain) TAGContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)evaluate:(id)arg1 parameters:(id)arg2;
- (id)initWithContainer:(id)arg1;

@end

