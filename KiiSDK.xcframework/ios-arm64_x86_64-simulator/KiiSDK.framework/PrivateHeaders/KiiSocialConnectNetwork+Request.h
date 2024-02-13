//
//  KiiSocialConnectNetwork+Request.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 7/17/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiSocialConnectNetwork.h"

@class KiiCallback;

@interface KiiSocialConnectNetwork (Request)

- (void) _unlinkSynchronous:(KiiCallback*)callback;
- (void) _linkSynchronous:(NSDictionary*)accessToken withCallback:(KiiCallback*)callback;

- (void) _registerSynchronous:(NSDictionary*)accessToken withCallback:(KiiCallback*)callback;

@end

