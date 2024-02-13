//
//  KiiIllegalStateException_Hidden.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 7/9/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiIllegalStateException.h"

@interface KiiIllegalStateException ()

+ (void)raiseUserNotLoggedIn:(NSString *)message;
+ (void)raiseSocialNetworkIsNotSet:(NSString *)message;
+ (void)raiseKiiInitializationIsNotCalled:(NSString *)message;
@end
