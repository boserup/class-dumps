//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGDataLayerPersistentStore.h"

__attribute__((visibility("hidden")))
@interface TAGNoopDataLayerPersistentStore : NSObject <TAGDataLayerPersistentStore>
{
}

- (void)clearKeysWithPrefix:(id)arg1;
- (void)loadSaved:(id)arg1;
- (void)saveKeyValues:(id)arg1 lifetimeInMillis:(unsigned long long)arg2;

@end

