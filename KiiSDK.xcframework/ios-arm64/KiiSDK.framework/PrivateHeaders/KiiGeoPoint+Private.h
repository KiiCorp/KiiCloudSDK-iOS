//
//  GeoPoint+Private.h
//  KiiSDK-Private
//
//  Created by rahman moshiur on 5/17/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiGeoPoint.h"

@interface KiiGeoPoint (Private)

-(NSString*) toJSON;
-(NSDictionary*) toDictionary;
+(KiiGeoPoint*) toGeoPoint:(NSDictionary*)dict;

@end
