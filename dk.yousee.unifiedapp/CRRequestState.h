//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface CRRequestState : NSObject
{
    BOOL _onWifi;
    NSDate *_timestamp;
    NSString *_url;
    NSString *_method;
    NSString *_errorString;
    int _errorType;
    int _responseCode;
    unsigned int _bytesSent;
    unsigned int _bytesRead;
    double _latency;
    double _latitude;
    double _longitude;
}

@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned int bytesRead; // @synthesize bytesRead=_bytesRead;
@property(nonatomic) unsigned int bytesSent; // @synthesize bytesSent=_bytesSent;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(nonatomic) int errorType; // @synthesize errorType=_errorType;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(nonatomic) BOOL onWifi; // @synthesize onWifi=_onWifi;
@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)makeArrayUsingDefault:(id)arg1;
- (id)plistSafeArray;
- (id)jsonArray;
- (void)connectionFailedWithError:(id)arg1;
- (void)onReceivedData:(unsigned int)arg1;
- (void)initialResponseReceivedAt:(id)arg1;
- (void)sentRequestAt:(id)arg1;
- (void)dealloc;
- (id)init;

@end

