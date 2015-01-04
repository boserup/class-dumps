//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TDXMenuItemRequest : NSObject
{
    NSString *_label;
    TDXMenuItemRequest *_expandRequest;
    NSArray *_filterRequests;
    NSString *_area;
    NSString *_function;
    NSDictionary *_parameters;
    NSString *_outputType;
    NSString *_templateName;
}

@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(copy, nonatomic) NSString *outputType; // @synthesize outputType=_outputType;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *function; // @synthesize function=_function;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSArray *filterRequests; // @synthesize filterRequests=_filterRequests;
@property(retain, nonatomic) TDXMenuItemRequest *expandRequest; // @synthesize expandRequest=_expandRequest;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;

@end

