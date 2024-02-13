//
//  KiiBucket+Private.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 5/15/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiBucket_Hidden.h"
#import "KiiPushSubscription_Hidden.h"
#import "KiiHiddenProtocols.h"
@interface KiiBucket (Private)<KiiPrivateSubscribable,BucketDelegate>

- (instancetype) initWithName:(NSString*)bucketName;
- (instancetype) initWithName:(NSString*)bucketName andUser:(KiiUser*)user;
- (instancetype) initWithName:(NSString*)bucketName andGroup:(KiiGroup*)group;

- (instancetype) initWithName:(NSString*)bucketName andThing:(KiiThing*) thing;
@end
