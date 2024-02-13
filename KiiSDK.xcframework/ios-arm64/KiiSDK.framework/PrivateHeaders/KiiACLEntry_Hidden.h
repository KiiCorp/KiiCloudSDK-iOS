//
//  KiiACLEntry_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiACLEntry.h"

@interface KiiACLEntry () {
    KiiACLAction _action;
    id _subject;
    BOOL _grant;
    
    BOOL _updated;
}

@end
