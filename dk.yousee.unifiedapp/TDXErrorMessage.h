//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TDXErrorMessage : NSObject
{
    NSString *_message;
}

+ (void)showAlertWithMessage:(id)arg1;
+ (void)showAlertFromError:(id)arg1;
+ (id)buttonText;
+ (id)title;
+ (id)messageFromErrorCode:(int)arg1;
+ (id)messageFromPresentableError:(id)arg1 code:(int)arg2;
+ (id)messageFromError:(id)arg1;
+ (id)messageFromDict:(id)arg1;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

