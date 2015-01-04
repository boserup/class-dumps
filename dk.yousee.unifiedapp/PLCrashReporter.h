//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PLCrashMachExceptionPortSet, PLCrashMachExceptionServer, PLCrashReporterConfig;

@interface PLCrashReporter : NSObject
{
    PLCrashReporterConfig *_config;
    BOOL _enabled;
    PLCrashMachExceptionServer *_machServer;
    PLCrashMachExceptionPortSet *_previousMachPorts;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_crashReportDirectory;
}

+ (id)sharedReporter;
+ (void)initialize;
- (void)setCrashCallbacks:(struct PLCrashReporterCallbacks *)arg1;
- (id)generateLiveReportAndReturnError:(id *)arg1;
- (id)generateLiveReport;
- (id)generateLiveReportWithThread:(unsigned int)arg1 error:(id *)arg2;
- (id)generateLiveReportWithThread:(unsigned int)arg1;
- (BOOL)enableCrashReporterAndReturnError:(id *)arg1;
- (BOOL)enableCrashReporter;
- (BOOL)purgePendingCrashReportAndReturnError:(id *)arg1;
- (BOOL)purgePendingCrashReport;
- (id)loadPendingCrashReportDataAndReturnError:(id *)arg1;
- (id)loadPendingCrashReportData;
- (BOOL)hasPendingCrashReport;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (id)crashReportPath;
- (id)queuedCrashReportDirectory;
- (id)crashReportDirectory;
- (BOOL)populateCrashReportDirectoryAndReturnError:(id *)arg1;
- (int)mapToAsyncSymbolicationStrategy:(unsigned int)arg1;
- (void)dealloc;
- (id)enableMachExceptionServerWithPreviousPortSet:(id *)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 error:(id *)arg4;
- (id)initWithBundle:(id)arg1 configuration:(id)arg2;
- (id)initWithApplicationIdentifier:(id)arg1 appVersion:(id)arg2 configuration:(id)arg3;

@end

