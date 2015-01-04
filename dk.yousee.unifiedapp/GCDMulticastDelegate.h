//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GCDMulticastDelegate : NSObject
{
    NSMutableArray *delegateNodes;
}

- (void).cxx_destruct;
- (id)duplicateInvocation:(id)arg1;
- (void)dealloc;
- (void)doNothing;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegateEnumerator;
- (BOOL)hasDelegateThatRespondsToSelector:(SEL)arg1;
- (unsigned int)countForSelector:(SEL)arg1;
- (unsigned int)countOfClass:(Class)arg1;
- (unsigned int)count;
- (void)removeAllDelegates;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (void)addDelegate:(id)arg1 delegateQueue:(struct dispatch_queue_s *)arg2;
- (id)init;

@end
