//
//  KiiPushSubscription+Request.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/22/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiPushSubscription_Hidden.h"
@protocol KiiPrivateSubscribable;
@interface KiiPushSubscription (Request)
-(NSError*) _subscribeSynchronous:(id<KiiPrivateSubscribable>) subscribable;
-(NSError*) _unsubscribeSynchronous:(id<KiiPrivateSubscribable>) subscribable;
@end
