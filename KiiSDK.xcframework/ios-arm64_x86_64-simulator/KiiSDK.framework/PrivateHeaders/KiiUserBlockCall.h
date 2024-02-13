//
//  KiiUserBlockCall.h
//  KiiSDK-Private
//
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KiiSocialConnect.h"
#import "KiiUser.h"

@interface KiiUserBlockCall : NSObject

- (instancetype)initWithBlock:(KiiUserBlock)block;
- (void)callWithUser:(KiiUser *)user
             network:(KiiSocialNetworkName)network
               error:(NSError *)error;

@end
