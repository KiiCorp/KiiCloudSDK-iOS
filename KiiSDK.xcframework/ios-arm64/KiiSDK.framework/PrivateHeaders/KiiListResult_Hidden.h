//
//  KiiListResult_Hidden.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 5/28/15.
//  Copyright (c) 2015 Kii Corporation. All rights reserved.
//

#import "KiiListResult.h"

@interface KiiListResult ()
-(instancetype) initWith:(NSArray*) results
                        :(BOOL) hasNext
                        :(NSString*) paginationKey;
@end
