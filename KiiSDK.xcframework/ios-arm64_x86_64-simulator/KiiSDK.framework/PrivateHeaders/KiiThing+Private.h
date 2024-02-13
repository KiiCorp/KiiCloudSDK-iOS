//
//  KiiThing+Private.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 1/5/15.
//  Copyright (c) 2015 Kii Corporation. All rights reserved.
//

#import "KiiThing_Hidden.h"

@interface KiiThing (Private)

- (instancetype) initWithVendorThingID:(NSString*) vendorThingID;

- (instancetype) initWithThingID:(NSString*) thingID;

- (void) loadFromJSON:(NSDictionary*)json;

+ (NSSet *)reservedFields;
@end
