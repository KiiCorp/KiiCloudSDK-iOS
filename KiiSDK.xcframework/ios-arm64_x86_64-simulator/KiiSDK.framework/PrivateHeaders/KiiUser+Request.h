//
//  KiiUser+Request.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 2/7/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiUser_Hidden.h"

@class KiiCallback;
@class KiiRequest;
@class KiiIdentityData;
@class KiiUserFields;

@interface KiiUser (Request)

// updated
- (NSError*) _authenticateSynchronous;
- (NSError*) _refreshSynchronous;
- (NSError*) _authenticateWithTokenSynchronous:(NSString*)token;
- (NSError*) _performRegistrationSynchronous;
- (NSError*) _updatePasswordSynchronous:(NSString*)fromPassword to:(NSString*)toPassword;
+ (NSError*) _resetPasswordSynchronous:(NSString*)userIdentifier;
- (NSError*) _verifyPhoneNumberSynchronous:(NSString*)code;
- (NSError*) _resendVerificationSynchronous:(NSString*)credentialType;
- (NSError*) _memberOfGroups:(NSArray**)results;
- (NSError*) _saveSynchronous;
- (NSError*) _deleteSynchronous;
- (NSError*) _updateCredentialsSynchronous:(NSString*)newCredential forType:(NSString*)type;
- (NSError*) _searchSynchronousWithKey:(NSString *)searchKey andParam:(NSString *)searchParam;
- (NSError*) _ownerOfGroups:(NSArray**)results;
+ (KiiUser *) _registerPseudoUserWithUserFields:(KiiUserFields *)userFields
                                          error:(NSError **)error;
- (NSError*) _putIdentity:(KiiIdentityData*)identityData
               userFields:(KiiUserFields *)userFields
                 password:(NSString*)password;
- (NSError *)_updateAttributeWithIdentityData:(KiiIdentityData *)identityData
                                   userFields:(KiiUserFields *)userFields
                                     password:(NSString *)password;
+ (NSDictionary *)_fromIdentityDataToDictionary:(KiiIdentityData *)identityData;
+ (NSDictionary *)_fromUserFieldsToDictionary:(KiiUserFields *)userFields;
- (NSError*)_updateIdentityData:(KiiIdentityData*)identityData
                     userFields:(KiiUserFields*)userFields;

+ (NSError*) _resetPasswordSynchronous:(NSString*)userIdentifier
                      meanNotification:(KiiNotificationMethod) notificationMethod;

+ (NSError*) _completeResetPasswordSynchronous:(NSString*)userIdentifier
                                       pinCode:(NSString*)pinCode
                                      password:(NSString*)password;
+ (NSDictionary *) _refreshAccessTokenSynchronous:(NSString *)refreshToken
                           error:(NSError **) error;
@end
