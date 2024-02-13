//
//  KiiBucket_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiBucket.h"
@class KiiThing;
@interface KiiBucket () {
    
    NSString * _name;
    KiiUser * _user;
    KiiGroup * _group;
    KiiThing *_thing;
    
    KiiACL *_bucketACL;
    
}

@property (strong, readonly) NSString *name;
@property (strong, readonly) KiiUser *user;
@property (strong, readonly) KiiGroup *group;
@property (strong, readonly) KiiThing *thing;

- (NSString*) bucketPath;
- (NSString*) bucketQualifiedName;
@end
