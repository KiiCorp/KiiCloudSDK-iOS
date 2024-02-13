//
//  KiiIdentityData_Hidden.h
//  KiiSDK-Private
//
//  Copyright (c) 2014 Kii Corporation. All rights reserved.
//

#import "KiiIdentityData.h"

@interface KiiIdentityData ()

@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *phoneNumber;

- (instancetype)initWithUserName:(NSString *)userName
                     phoneNumber:(NSString *)phoneNumber
                           email:(NSString *)email;

@end
