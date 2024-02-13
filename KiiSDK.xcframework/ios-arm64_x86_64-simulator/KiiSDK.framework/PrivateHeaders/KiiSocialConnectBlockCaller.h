//
//  KiiSocialConnectBlockCaller.h
//  KiiSDK-Private
//
//  Created by Moshiur on 3/25/14.
//  Copyright (c) 2014 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KiiSocialConnect.h"

@interface KiiSocialConnectBlockCaller : NSObject
- (instancetype)initWithBlock:(KiiSocialConnectBlock)block;
- (void)callWithUser:(KiiUser *)user
             network:(KiiSocialNetworkName)network
               error:(NSError *)error;
@end
