//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGLogger.h"

__attribute__((visibility("hidden")))
@interface TAGDefaultLogger : NSObject <TAGLogger>
{
    int _logLevel;
}

@property int logLevel; // @synthesize logLevel=_logLevel;
- (void)verbose:(id)arg1;
- (void)debug:(id)arg1;
- (void)info:(id)arg1;
- (void)warning:(id)arg1;
- (void)error:(id)arg1;
- (id)init;

@end

