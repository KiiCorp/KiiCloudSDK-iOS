//
//  KiiObject+Private.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 3/27/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiObject_Hidden.h"

@class KiiBucket;

@interface KiiObject (Private)

- (KiiObject*) initWithBucket:(KiiBucket*)bucket andType:(NSString*)type;
- (KiiObject *)initWithBucket:(KiiBucket *)bucket andObjectID:(NSString *)objectID;
- (NSDictionary*) _privateGenerateUploadMetadata;
- (NSDictionary*) _privateGenerateUploadMetadataWithAllFields:(BOOL) allFields;
- (void) loadFromJSON:(NSDictionary*)json;
- (NSString*) _privateUUID;
- (BOOL)isCreated;

@end
