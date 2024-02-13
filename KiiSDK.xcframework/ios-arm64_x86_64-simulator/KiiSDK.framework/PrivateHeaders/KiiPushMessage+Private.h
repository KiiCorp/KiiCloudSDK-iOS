//
//  KiiPushMessage+Private.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/24/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiPushMessage_Hidden.h"

@interface KiiPushMessage (Private)

-(KiiTopic*) getTopic:(NSString*) topicID;
-(KiiBucket*) getBucket:(NSString*) bucketID;
@end
