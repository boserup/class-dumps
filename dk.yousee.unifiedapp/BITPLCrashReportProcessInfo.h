//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface BITPLCrashReportProcessInfo : NSObject
{
    NSString *_processName;
    unsigned int _processID;
    NSString *_processPath;
    NSDate *_processStartTime;
    NSString *_parentProcessName;
    unsigned int _parentProcessID;
    BOOL _native;
}

@property(readonly, nonatomic) BOOL native; // @synthesize native=_native;
@property(readonly, nonatomic) unsigned int parentProcessID; // @synthesize parentProcessID=_parentProcessID;
@property(readonly, nonatomic) NSString *parentProcessName; // @synthesize parentProcessName=_parentProcessName;
@property(readonly, nonatomic) NSDate *processStartTime; // @synthesize processStartTime=_processStartTime;
@property(readonly, nonatomic) NSString *processPath; // @synthesize processPath=_processPath;
@property(readonly, nonatomic) unsigned int processID; // @synthesize processID=_processID;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (void)dealloc;
- (id)initWithProcessName:(id)arg1 processID:(unsigned int)arg2 processPath:(id)arg3 processStartTime:(id)arg4 parentProcessName:(id)arg5 parentProcessID:(unsigned int)arg6 native:(BOOL)arg7;

@end

