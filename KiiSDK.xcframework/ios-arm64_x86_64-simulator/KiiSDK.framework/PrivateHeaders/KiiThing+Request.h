//
//  KiiThing+Request.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 1/5/15.
//  Copyright (c) 2015 Kii Corporation. All rights reserved.
//

#import "KiiThing_Hidden.h"


@interface KiiThing (Request)

- (NSError*) _registerSynchronousWithPassword:(NSString*) password andThingFields : (KiiThingFields*) thingFields;

- (NSError*) _loadSynchronousWithVendorThingID:(NSString*) vendorID;

- (NSError*) _loadSynchronousWithThingID:(NSString*) vendorID;

- (NSError*) _registerOwnerSynchronous:(id<KiiThingOwner>) owner thingPassword:(NSString*) thingPassword;

- (NSError*) _unregisterOwnerSynchronous:(id<KiiThingOwner>) owner;

- (NSError*) _checkIsOwnerSynchronous:(id<KiiThingOwner>) thingOwner withResult:(BOOL*) result;

- (NSError*) _refreshSynchronous;

- (NSError*) _updateSynchronous;

- (NSError*) _deleteSynchronous;

- (NSError*) _disableSynchronous;

- (NSError*) _enableSynchronous;

+ (NSError*) _registerOwnerSynchronous:(id<KiiThingOwner>) owner
                               thingID:(NSString*) thingID thingPassword:(NSString*) thingPassword;

+ (NSError*) _registerOwnerSynchronous:(id<KiiThingOwner>) owner
                         vendorThingID:(NSString*) vendorThingID thingPassword:(NSString*) thingPassword;

+ (BOOL) _isValidOwner:(id<KiiThingOwner>) owner;

+ (NSError*) _executeQuerySynchronous:(KiiThingQuery *) query : (KiiThingQueryResult**) resultPointer;

@end
