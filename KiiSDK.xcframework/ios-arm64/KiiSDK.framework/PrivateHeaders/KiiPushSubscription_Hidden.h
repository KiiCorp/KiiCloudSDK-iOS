//
//  KiiPushSubscription_Hidden.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/22/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiPushSubscription.h"

@interface KiiPushSubscription (){
    NSString* _subscriberPath;
}

@end

@protocol KiiPrivateSubscribable <NSObject>
@optional

-(NSError*) subscribeWithSubscriberPath:(NSString*) subscriberPath;

-(NSError*) unsubscribeWithSubscriberPath:(NSString*) subscriberPath;

-(BOOL) isSubscribedSynchronousWithSubscriberPath:(NSString*) subscriberPath andError:(NSError**) error;

@required
-(NSError*) subscribe;

-(NSError*) unsubscribe;

-(BOOL) isSubscribedSynchronousWithError:(NSError**) error;

@end