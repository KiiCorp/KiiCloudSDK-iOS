//
//  KiiSocialOAuth.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 8/10/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KiiSocialOAuth : NSObject

NSString *OAuthorizationHeader(NSURL *url,
                                      NSString *method,
                                      NSData *body,
                                      NSString *oAuthConsumerKey,
                                      NSString *oAuthConsumerSecret,
                                      NSString *oAuthToken,
                                      NSString *oAuthTokenSecret);

@end
