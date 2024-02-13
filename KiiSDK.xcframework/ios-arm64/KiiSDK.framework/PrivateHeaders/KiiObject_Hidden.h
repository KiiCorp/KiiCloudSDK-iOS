//
//  KiiObject_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiObject.h"

@interface KiiObject () {
    
    NSString *_uuid;
    
    NSDate * _created;
    NSDate * _modified;
    
    NSMutableDictionary *_customInfo;
    NSMutableSet *_patchKeys;
    
    KiiBucket *_bucket;
    NSString * _type;
    KiiACL *_objectACL;
    
    NSString* _etag;
    NSString* _internalID;
    NSString *_bodyContentType;
}
@property(nonatomic,readonly,strong) NSString* internalID;
- (NSString*) objectPath;
@end
