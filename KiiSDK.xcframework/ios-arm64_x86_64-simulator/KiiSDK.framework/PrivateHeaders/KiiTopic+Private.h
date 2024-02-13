//
//  KiiTopic+Private.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/24/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiTopic_Hidden.h"
#import "KiiPushSubscription_Hidden.h"
@class KiiUser,KiiGroup;
@interface KiiTopic (Private)<KiiPrivateSubscribable>

- (KiiTopic*) initWithName:(NSString*)topicName;
- (KiiTopic*) initWithName:(NSString*)topicName andUser:(KiiUser*)user;
- (KiiTopic*) initWithName:(NSString*)topicName andGroup:(KiiGroup*)group;
- (KiiTopic*) initWithName:(NSString*)topicName andThing:(KiiThing*)thing;
@end
