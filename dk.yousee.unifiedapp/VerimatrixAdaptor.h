//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VRSecurityCallback.h"

__attribute__((visibility("hidden")))
@interface VerimatrixAdaptor : NSObject <VRSecurityCallback>
{
}

+ (id)deviceIdentifier;
+ (id)sharedInstance;
- (void)OperatorData:(struct OperatorDataStruct)arg1;
- (void)ConfigureOutputControlSettings:(struct OutputControls)arg1;
- (void)securityCallback;
- (void)disableLog;
- (void)enableLog;
- (void)close;
- (int)lastErrorCode;
- (id)openUrl:(id)arg1;
- (BOOL)initialize;
- (BOOL)provisionDevice;

@end

