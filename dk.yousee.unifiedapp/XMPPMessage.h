//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPElement.h"

@interface XMPPMessage : XMPPElement
{
}

+ (id)messageWithType:(id)arg1 child:(id)arg2;
+ (id)messageWithType:(id)arg1 elementID:(id)arg2 child:(id)arg3;
+ (id)messageWithType:(id)arg1 elementID:(id)arg2;
+ (id)messageWithType:(id)arg1 to:(id)arg2 elementID:(id)arg3 child:(id)arg4;
+ (id)messageWithType:(id)arg1 to:(id)arg2 elementID:(id)arg3;
+ (id)messageWithType:(id)arg1 to:(id)arg2;
+ (id)messageWithType:(id)arg1;
+ (id)message;
+ (id)messageFromElement:(id)arg1;
+ (void)initialize;
- (BOOL)isMessageWithBody;
- (id)errorMessage;
- (BOOL)isErrorMessage;
- (BOOL)isChatMessageWithBody;
- (BOOL)isChatMessage;
- (void)addThread:(id)arg1;
- (void)addBody:(id)arg1 withLanguage:(id)arg2;
- (void)addBody:(id)arg1;
- (void)addSubject:(id)arg1;
- (id)thread;
- (id)bodyForLanguage:(id)arg1;
- (id)body;
- (id)subject;
- (id)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 child:(id)arg2;
- (id)initWithType:(id)arg1 elementID:(id)arg2 child:(id)arg3;
- (id)initWithType:(id)arg1 elementID:(id)arg2;
- (id)initWithType:(id)arg1 to:(id)arg2 elementID:(id)arg3 child:(id)arg4;
- (id)initWithType:(id)arg1 to:(id)arg2 elementID:(id)arg3;
- (id)initWithType:(id)arg1 to:(id)arg2;
- (id)initWithType:(id)arg1;
- (id)init;
- (BOOL)isGroupChatMessageWithSubject;
- (BOOL)isGroupChatMessageWithBody;
- (BOOL)isGroupChatMessage;
- (id)outOfBandDesc;
- (id)outOfBandURI;
- (id)outOfBandURL;
- (BOOL)hasOutOfBandData;
- (void)addOutOfBandURI:(id)arg1 desc:(id)arg2;
- (void)addOutOfBandURL:(id)arg1 desc:(id)arg2;
- (void)addGoneChatState;
- (void)addInactiveChatState;
- (void)addPausedChatState;
- (void)addComposingChatState;
- (void)addActiveChatState;
- (BOOL)hasGoneChatState;
- (BOOL)hasInactiveChatState;
- (BOOL)hasPausedChatState;
- (BOOL)hasComposingChatState;
- (BOOL)hasActiveChatState;
- (BOOL)hasChatState;
- (id)chatState;
- (id)nick;
- (void)addReceiptRequest;
- (id)generateReceiptResponse;
- (id)receiptResponseID;
- (BOOL)hasReceiptResponse;
- (BOOL)hasReceiptRequest;
- (BOOL)isAttentionMessageWithBody;
- (BOOL)isAttentionMessage;
- (BOOL)isHeadLineMessage;
- (id)generateCorrectionMessageWithID:(id)arg1 body:(id)arg2;
- (id)generateCorrectionMessageWithID:(id)arg1;
- (void)addMessageCorrectionWithID:(id)arg1;
- (id)correctedMessageID;
- (BOOL)isMessageCorrection;
- (id)generateAcknowledgedChatMarkerIncludingThread:(BOOL)arg1;
- (id)generateDisplayedChatMarkerIncludingThread:(BOOL)arg1;
- (id)generateReceivedChatMarkerIncludingThread:(BOOL)arg1;
- (id)generateAcknowledgedChatMarker;
- (id)generateDisplayedChatMarker;
- (id)generateReceivedChatMarker;
- (void)addAcknowledgedChatMarkerWithID:(id)arg1;
- (void)addDisplayedChatMarkerWithID:(id)arg1;
- (void)addReceivedChatMarkerWithID:(id)arg1;
- (void)addMarkableChatMarker;
- (id)chatMarkerThread;
- (id)chatMarkerID;
- (id)chatMarker;
- (BOOL)hasAcknowledgedChatMarker;
- (BOOL)hasDisplayedChatMarker;
- (BOOL)hasReceivedChatMarker;
- (BOOL)hasMarkableChatMarker;
- (BOOL)hasChatMarker;

@end

