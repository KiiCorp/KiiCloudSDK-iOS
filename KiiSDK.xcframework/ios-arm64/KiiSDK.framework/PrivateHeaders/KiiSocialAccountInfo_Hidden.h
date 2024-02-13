//
//  KiiSocialAccountInfo_Hidden.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 11/11/14.
//  Copyright (c) 2014 Kii Corporation. All rights reserved.
//

#import "KiiSocialConnect.h"
#import "KiiSocialAccountInfo.h"
@interface KiiSocialAccountInfo ()
@property(nonatomic,assign) KiiConnectorProvider provider;
@property(nonatomic,strong) NSString* socialAccountId;
@property(nonatomic,strong) NSDate* createdAt;

+ (instancetype) socialInfoWithProvider:(KiiConnectorProvider) provider
                            andSocialId:(NSString*) socialId
                           andCreatedAt:(long long) createdAt;
@end
