//
//  KiiListTopicOperation.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 5/28/15.
//  Copyright (c) 2015 Kii Corporation. All rights reserved.
//

#import "Kii_Hidden.h"
#import "KiiHiddenProtocols.h"
@class KiiListResult;
@interface KiiListTopicExecutor : NSObject
+(KiiListResult*) topics:(id<KiiTopicSubject>) subject
                          :(NSString*) paginationKey
                          :(NSError**) error;
@end
