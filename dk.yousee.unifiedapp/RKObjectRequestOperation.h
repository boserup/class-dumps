//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSCopying.h"
#import "RKMapperOperationDelegate.h"

@class NSArray, NSDate, NSDictionary, NSError, NSString, RKHTTPRequestOperation, RKMappingResult, RKObjectResponseMapperOperation, RKOperationStateMachine;

@interface RKObjectRequestOperation : NSOperation <NSCopying, RKMapperOperationDelegate>
{
    RKMappingResult *_mappingResult;
    NSArray *_responseDescriptors;
    id _targetObject;
    NSDictionary *_mappingMetadata;
    NSError *_error;
    RKHTTPRequestOperation *_HTTPRequestOperation;
    struct dispatch_queue_s *_successCallbackQueue;
    struct dispatch_queue_s *_failureCallbackQueue;
    RKOperationStateMachine *_stateMachine;
    RKObjectResponseMapperOperation *_responseMapperOperation;
    CDUnknownBlockType _willMapDeserializedResponseBlock;
    NSDate *_mappingDidStartDate;
    NSDate *_mappingDidFinishDate;
}

+ (BOOL)canProcessRequest:(id)arg1;
+ (struct dispatch_queue_s *)dispatchQueue;
+ (id)responseMappingQueue;
@property(retain, nonatomic) NSDate *mappingDidFinishDate; // @synthesize mappingDidFinishDate=_mappingDidFinishDate;
@property(retain, nonatomic) NSDate *mappingDidStartDate; // @synthesize mappingDidStartDate=_mappingDidStartDate;
@property(copy, nonatomic) CDUnknownBlockType willMapDeserializedResponseBlock; // @synthesize willMapDeserializedResponseBlock=_willMapDeserializedResponseBlock;
@property(retain, nonatomic) RKObjectResponseMapperOperation *responseMapperOperation; // @synthesize responseMapperOperation=_responseMapperOperation;
@property(retain, nonatomic) RKOperationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) struct dispatch_queue_s *failureCallbackQueue; // @synthesize failureCallbackQueue=_failureCallbackQueue;
@property(nonatomic) struct dispatch_queue_s *successCallbackQueue; // @synthesize successCallbackQueue=_successCallbackQueue;
@property(retain, nonatomic) RKHTTPRequestOperation *HTTPRequestOperation; // @synthesize HTTPRequestOperation=_HTTPRequestOperation;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) RKMappingResult *mappingResult; // @synthesize mappingResult=_mappingResult;
@property(copy, nonatomic) NSDictionary *mappingMetadata; // @synthesize mappingMetadata=_mappingMetadata;
@property(retain, nonatomic) id targetObject; // @synthesize targetObject=_targetObject;
@property(retain, nonatomic) NSArray *responseDescriptors; // @synthesize responseDescriptors=_responseDescriptors;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isReady;
- (BOOL)isConcurrent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)willFinish;
@property(readonly, copy) NSString *description;
- (void)execute;
- (void)performMappingOnResponseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 responseDescriptors:(id)arg2;
- (id)initWithHTTPRequestOperation:(id)arg1 responseDescriptors:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

