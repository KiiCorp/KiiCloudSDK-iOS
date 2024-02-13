//
//  KiiUser_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiUser.h"
#import "KiiHiddenProtocols.h"
#import "LocaleContainer.h"
#import "KiiDictionary.h"
enum {
    kUserFieldUsername      = 1 << 0,
    kUserFieldEmail         = 1 << 1,
    kUserFieldPhoneNumber   = 1 << 2,
}; typedef NSUInteger KiiUserIdentityFlags;


@interface KiiUser ()<KiiTopicSubject,KiiBucketParent> {
    
    BOOL _passwordChanged;
    
    NSString *_uuid;
    NSString *_username;
    NSString *_displayName;
    NSString *_password;
    NSString *_email;
    NSString *_pendingEmail;
    NSString *_phoneNumber;
    NSString *_pendingPhoneNumber;
    NSString *_country;
    NSDate * _created;
    NSDate * _modified;
    BOOL _emailVerified;
    BOOL _phoneVerified;
    BOOL _disabled;

    NSString * _accessToken;
    
    int _validateFields;
    NSError * _validationError;
    KiiDictionary *_linkedSocialAccountsDict;
}

@property (nonatomic, assign) int validateFields;
@property (nonatomic, strong) NSError* validationError;
@property (nonatomic, strong) NSDate *accesstokenExpiresAt;
@property (nonatomic, strong) NSString *refreshToken;
@property (readonly) KiiDictionary* customInfo;

+(BOOL) validate:(id)object forKey:(NSString*)key;
+ (NSError *) _validateDisplayName:(NSString *)displayName;
+ (NSError *) _validateCountry:(NSString *)country;

// save current user to keychain
+(void) _storeCurrentUserInfoSynchronous:(NSError **)error;

// get stored kiiuser from keychain
+(KiiUser *)_getStoredUserInfoSynchronous:(NSError **)error;

// delete stored kiiuser from keychain
+(void) _deleteStoredUserInfo:(NSError **)error;

- (void) _refreshTokenIfNeed:(NSError *__autoreleasing *)error;

@end
