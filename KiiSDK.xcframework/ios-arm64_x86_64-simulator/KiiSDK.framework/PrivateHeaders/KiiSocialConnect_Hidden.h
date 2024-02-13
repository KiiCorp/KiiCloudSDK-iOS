//
//  KiiSocialConnect_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 10/4/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiSocialConnect.h"

@class KiiSCNTwitter;
@class KiiSocialNetworkConnector;
@interface KiiSocialConnect () {
    KiiSCNFacebook *_facebookManager;
    KiiSCNTwitter *_twitterManager;
    KiiSCNQQ *_qqManager;
}
@property (nonatomic) KiiSCNFacebook* facebookManager;
@property(nonatomic,strong) KiiSocialNetworkConnector *scnConnectorManager;
+ (KiiSocialConnect*) sharedInstance;
+ (void) logOutAll;
+ (void) resetAll;
- (KiiSocialConnectNetwork*)getManager:(KiiSocialNetworkName)network;
@end
