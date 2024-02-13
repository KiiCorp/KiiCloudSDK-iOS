//
//  KiiTopic+Request.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/24/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiTopic_Hidden.h"
@class KiiPushMessage;
@interface KiiTopic (Request)

- (NSError*) _saveSynchronous;

- (NSError*) _deleteSynchronous;

-(NSError*) _subscribeSynchronous;

-(NSError*) _unsubscribeSynchronous;

-(BOOL) _isSubcribedWithError:(NSError**) error;

-(BOOL) _isExist:(NSError**) error;

-(NSError*) _sendMessageSynchronous:(KiiPushMessage*) message;

-(NSError*) _subscribeSynchronousWithSubscriberPath:(NSString*) subscriberPath;

-(NSError*) _unsubscribeSynchronousWithSubscriberPath:(NSString*) subscriberPath;

-(BOOL) _isSubscribedSynchronousWithSubscriberPath:(NSString*) subscriberPath andError:(NSError**) error;

@end
