//
//  KiiSocialNetworkConnector.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 1/31/14.
//  Copyright (c) 2014 Kii Corporation. All rights reserved.
//

#import "KiiSocialConnectNetwork.h"
@import WebKit;
@interface KiiSocialNetworkConnector : KiiSocialConnectNetwork<WKNavigationDelegate>
@property (nonatomic,copy) KiiSCNBlock block;

//login With UI
- (void) logIn:(KiiCallback*)callback provider:(KiiConnectorProvider) provider;
- (UINavigationController*) logInNavigationController:(KiiCallback*)callback provider:(KiiConnectorProvider) provider;
//login with accessToken
- (void) logIn:(KiiConnectorProvider) provider options:(NSDictionary*) options;
- (void) link:(KiiConnectorProvider) provider options:(NSDictionary*) options;
- (void) unlink:(KiiConnectorProvider) provider;
- (void)callback:(KiiUser *)user
        provider:(KiiConnectorProvider)provider
           error:(NSError *)error;
- (NSDictionary*) providersAccessToken;
+ (NSString*) providerName:(KiiConnectorProvider) provider;
+ (NSDictionary*) socialProviderDict;

@end
