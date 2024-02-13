//
//  KiiGroup+Private.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 5/16/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiGroup_Hidden.h"

@interface KiiGroup (Private)

- (void) loadFromJSON:(NSDictionary*)json;
+ (KiiGroup*) groupWithID:(NSString*)id
                     name:(NSString*)name
                    owner:(KiiUser*)owner
                  members:(NSArray*)members;
- (KiiGroup*) initWithID:(NSString*)id
                    name:(NSString*)name
                   owner:(KiiUser*)owner
                 members:(NSArray*)members;
+ (BOOL) isValidGroupID:(NSString*)groupId;
+ (BOOL) isValidGroupName:(NSString*)name;
+ (BOOL) isValidMembers:(NSArray*)members;

@end
