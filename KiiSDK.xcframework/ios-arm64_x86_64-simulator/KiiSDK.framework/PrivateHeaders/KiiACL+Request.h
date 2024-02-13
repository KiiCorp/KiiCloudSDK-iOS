//
//  KiiACL+Request.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 6/12/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiACL_Hidden.h"

@class KiiCallback;

@interface KiiACL (Request)

- (NSError*) _saveSynchronous:(NSArray**)succeeded
                       failed:(NSArray**)failed;

- (NSError*) _listSynchronous:(NSArray**)results;

@end
