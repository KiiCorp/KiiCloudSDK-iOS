//
//  KiiTopic_Hidden.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/24/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiTopic.h"
@class KiiThing;
@interface KiiTopic() {
    NSString *_name;
    KiiUser *_user;
    KiiGroup *_group;
    KiiThing *_thing;
    KiiACL *_topicACL;
}

@property (nonatomic, readwrite) NSString* name;
@property (strong, readonly) KiiUser *user;
@property (strong, readonly) KiiGroup *group;
@property (strong, readonly) KiiThing *thing;

@end
