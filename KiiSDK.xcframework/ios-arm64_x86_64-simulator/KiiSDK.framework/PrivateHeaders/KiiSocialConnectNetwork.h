//
//  KiiSocialConnectNetwork.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 7/3/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KiiSocialConnect.h"

@class KiiCallback;

@interface KiiSocialConnectNetwork : NSObject {
    KiiSocialNetworkName _network;
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSDictionary *_options;
    
    NSString *_token;
    NSString *_tokenExpires;
    NSString *_token_secret;
    NSNumber *_kiiNewUser;
    
    KiiCallback *_callback;
}

@property (readonly) KiiSocialNetworkName network;
@property (nonatomic, strong) NSString *consumerKey;
@property (nonatomic, strong) NSString *consumerSecret;
@property (nonatomic, strong) NSDictionary *options;

@property (strong, readonly) NSString *accessToken;
@property (strong, readonly) NSString *accessTokenSecret;
@property (strong, readonly) NSDate *accessTokenExpires;
@property (strong, readonly) NSDictionary *accessTokenDictionary;

@property (readonly) BOOL authenticated;

- (id) initWithNetwork:(KiiSocialNetworkName)network;
- (void) reset;

- (NSString *)getNetworkString;
- (NSString *)getAuthContentType;
- (NSString *)getLinkContentType;

// called to remove any tokens/identity on the device
- (void) logOut;

@end
