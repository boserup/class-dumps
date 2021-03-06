//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSManagedObjectContext, NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSPersistentStoreCoordinator, NSString;

@interface XMPPCoreDataStorage : NSObject
{
    NSMutableDictionary *myJidCache;
    int pendingRequests;
    NSManagedObjectModel *managedObjectModel;
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectContext *managedObjectContext;
    NSManagedObjectContext *mainThreadManagedObjectContext;
    NSMutableArray *willSaveManagedObjectContextBlocks;
    NSMutableArray *didSaveManagedObjectContextBlocks;
    NSString *databaseFileName;
    NSDictionary *storeOptions;
    unsigned int saveThreshold;
    unsigned int saveCount;
    BOOL autoRemovePreviousDatabaseFile;
    BOOL autoRecreateDatabaseFile;
    BOOL autoAllowExternalBinaryDataStorage;
    struct dispatch_queue_s *storageQueue;
    void *storageQueueTag;
}

+ (void)unregisterDatabaseFileName:(id)arg1;
+ (BOOL)registerDatabaseFileName:(id)arg1;
+ (void)initialize;
@property(readonly) NSDictionary *storeOptions; // @synthesize storeOptions;
@property(readonly) NSString *databaseFileName; // @synthesize databaseFileName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addDidSaveManagedObjectContextBlock:(CDUnknownBlockType)arg1;
- (void)addWillSaveManagedObjectContextBlock:(CDUnknownBlockType)arg1;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (void)maybeSave;
- (void)maybeSave:(int)arg1;
- (void)save;
- (unsigned int)numberOfUnsavedChanges;
@property BOOL autoAllowExternalBinaryDataStorage;
@property BOOL autoRecreateDatabaseFile;
@property BOOL autoRemovePreviousDatabaseFile;
- (void)managedObjectContextDidSave:(id)arg1;
@property(readonly) NSManagedObjectContext *mainThreadManagedObjectContext;
- (id)managedObjectContext;
@property(readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property(readonly) NSManagedObjectModel *managedObjectModel;
- (id)persistentStoreDirectory;
- (void)updateJidCache:(id)arg1;
- (void)didChangeCachedMyJID:(id)arg1 forXMPPStream:(id)arg2;
- (id)myJIDForXMPPStream:(id)arg1;
@property unsigned int saveThreshold;
- (BOOL)configureWithParent:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (id)initWithInMemoryStore;
- (id)initWithDatabaseFilename:(id)arg1 storeOptions:(id)arg2;
- (id)init;
- (void)commonInit;
- (void)mainThreadManagedObjectContextDidMergeChanges;
- (void)didSaveManagedObjectContext;
- (void)willSaveManagedObjectContext;
- (void)didCreateManagedObjectContext;
- (void)didNotAddPersistentStoreWithPath:(id)arg1 options:(id)arg2 error:(id)arg3;
- (BOOL)addPersistentStoreWithPath:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)willCreatePersistentStoreWithPath:(id)arg1 options:(id)arg2;
- (id)defaultStoreOptions;
- (id)defaultDatabaseFileName;
- (id)managedObjectModelBundle;
- (id)managedObjectModelName;

@end

