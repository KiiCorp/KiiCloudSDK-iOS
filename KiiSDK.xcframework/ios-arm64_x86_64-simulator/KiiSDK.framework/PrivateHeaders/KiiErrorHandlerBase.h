//
//  KiiErrorHandlerBase.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 4/5/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiErrorHandler.h"

@interface KiiErrorHandlerBase : NSObject <KiiErrorHandler>

- (NSError *)errorParser:(int)responseCode;

@end
