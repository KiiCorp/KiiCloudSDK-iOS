//
//  KiiACL_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiACL.h"

@interface KiiACL () {
    NSMutableArray *_entries;
    NSString* _aclPath;
    BOOL _parentIsFile;
}

@property(nonatomic,readonly) NSString* aclPath;

@end
