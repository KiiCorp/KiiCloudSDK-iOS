//
//  KiiACLEntry+Private.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 6/12/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiACLEntry_Hidden.h"

@interface KiiACLEntry (Private)

- (void) setUpdated:(BOOL)updated;
- (NSString*)actionString;
- (NSString*)entityString;

@end
