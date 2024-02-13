//
//  KiiPushSubscription+Private.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/22/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiPushSubscription_Hidden.h"
@class KiiUser;
@class KiiThing;
@interface KiiPushSubscription (Private)

-(instancetype) initWithUser:(KiiUser*) user;
-(instancetype) initWithThing:(KiiThing*) thing;
@end
