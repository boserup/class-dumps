//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TDXRequestRPVR : NSObject
{
}

+ (void)unscheduleRecordingWithEPGId:(id)arg1 andCompletion:(CDUnknownBlockType)arg2 andFailure:(CDUnknownBlockType)arg3;
+ (void)scheduleRecordingWithEPGId:(id)arg1 andRecordAllInSeries:(_Bool)arg2 andCompletion:(CDUnknownBlockType)arg3 andFailure:(CDUnknownBlockType)arg4;
+ (void)getScheduledRecordingsWithCompletion:(CDUnknownBlockType)arg1;
+ (id)responseDescriptor;

@end

