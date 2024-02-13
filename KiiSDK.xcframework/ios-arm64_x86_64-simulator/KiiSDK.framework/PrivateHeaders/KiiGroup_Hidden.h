//
//  KiiGroup_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiGroup.h"
#import "KiiHiddenProtocols.h"

@interface KiiGroup ()<KiiTopicSubject,KiiBucketParent> {
    NSString *_uuid;
    NSString *_name;
    KiiUser * _owner;
    
    NSArray * _members;
    
    NSString *_tempName;
    
    NSMutableSet *_addMembers;
    NSMutableSet *_removeMembers;
}

@property (readonly) NSString *uuid;
@property (strong, readonly) KiiUser *owner;
@property (strong, readonly) NSArray *members;

- (KiiGroup*) initWithName:(NSString*)groupName andMembers:(NSArray*)members;

@end
