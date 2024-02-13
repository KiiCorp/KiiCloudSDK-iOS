//
//  KiiSCNFacebook.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 7/3/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiSocialConnectNetwork.h"
#import <Accounts/Accounts.h>

@interface KiiSCNFacebook : KiiSocialConnectNetwork {
}

@property (nonatomic) ACAccountStore *accountStore;
- (KiiSocialConnectNetwork*) init;

@end
