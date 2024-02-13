//
//  KiiGroup+Request.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 5/15/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiGroup.h"

@class KiiCallback, KiiUser;
@interface KiiGroup (Request)

// blocked
- (NSError*) _listMembersSynchronous:(NSArray**)members;
- (NSError*) _getOwnerSynchronous:(KiiUser**)owner;
- (NSError*) _refreshGroupSynchronous;
- (NSError*) _saveGroupSynchronous;
- (NSError*) _deleteGroupSynchronous;
- (NSError*) _changeGroupNameSynchronous:(NSString*)groupName;
+ (KiiGroup*) _registerGroupWithID:(NSString*)groupID
                              name:(NSString*)name
                           members:(NSArray*)members
                             error:(NSError**)error;

// todo
- (void) _addUserSynchronous:(KiiUser*)user withError:(NSError**)returnError andCallback:(KiiCallback*)callback;
- (void) _removeUserSynchronous:(KiiUser*)user withError:(NSError**)returnError andCallback:(KiiCallback*)callback;

@end
