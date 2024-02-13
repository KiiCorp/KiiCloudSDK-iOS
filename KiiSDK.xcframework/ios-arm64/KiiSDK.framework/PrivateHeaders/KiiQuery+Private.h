//
//  KiiQuery+Private.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 4/24/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiQuery_Hidden.h"

@interface KiiQuery (Private) <NSCopying>
+ (NSDictionary*) emptyDictValue;
- (NSDictionary*) dictValue;
+ (KiiQuery*) queryWithBase:(KiiQuery*)base andPagination:(NSString*)pagination;
- (NSError*) queryError;
@end
