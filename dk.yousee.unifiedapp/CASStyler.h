//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSString, NSTimer;

@interface CASStyler : NSObject
{
    NSDictionary *_variables;
    NSString *_filePath;
    NSString *_watchFilePath;
    NSMutableArray *_styleNodes;
    NSMapTable *_objectClassDescriptorCache;
    NSHashTable *_scheduledItems;
    NSTimer *_updateTimer;
    NSMutableArray *_fileWatchers;
    NSMutableArray *_invocationObjectArguments;
}

+ (id)watchForChangesToFilePath:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)defaultStyler;
@property(retain, nonatomic) NSMutableArray *invocationObjectArguments; // @synthesize invocationObjectArguments=_invocationObjectArguments;
@property(retain, nonatomic) NSMutableArray *fileWatchers; // @synthesize fileWatchers=_fileWatchers;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSHashTable *scheduledItems; // @synthesize scheduledItems=_scheduledItems;
@property(retain, nonatomic) NSMapTable *objectClassDescriptorCache; // @synthesize objectClassDescriptorCache=_objectClassDescriptorCache;
@property(retain, nonatomic) NSMutableArray *styleNodes; // @synthesize styleNodes=_styleNodes;
@property(copy, nonatomic) NSString *watchFilePath; // @synthesize watchFilePath=_watchFilePath;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
- (void).cxx_destruct;
- (void)styleSubviewsOfView:(id)arg1;
- (void)reloadOnChangesToFilePath:(id)arg1;
- (void)unscheduleUpdateForItem:(id)arg1;
- (void)scheduleUpdateForItem:(id)arg1;
- (void)updateScheduledItems;
- (id)objectClassDescriptorForClass:(Class)arg1;
- (void)setupObjectClassDescriptors;
- (id)invocationsForClass:(Class)arg1 styleProperty:(id)arg2 keyPath:(id)arg3;
- (void)setFilePath:(id)arg1 error:(id *)arg2;
- (void)styleItem:(id)arg1;
- (id)init;

@end

