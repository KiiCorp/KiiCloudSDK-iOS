//
//  KiiPushInstallation+Request.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/21/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiPushInstallation_Hiden.h"
#import "KiiCallback.h"

@class KiiCallback;
@interface KiiPushInstallation (Request)

- (NSError*) _installSynchronous;

- (NSError *)_uninstallSynchronous;

- (NSError*) _installSynchronousWithDevelopmentMode:(BOOL) isDevelopmentMode andDeviceToken:(NSString*) deviceToken;

- (NSError *) _uninstallSynchronousWithDeviceToken:(NSString*) deviceToken;

@end
