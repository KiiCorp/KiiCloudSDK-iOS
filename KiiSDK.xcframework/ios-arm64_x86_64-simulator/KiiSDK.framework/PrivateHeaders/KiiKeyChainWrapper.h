//
//  KiiKeyChainWrapper.h
//  KiiSDK-Private
//
//  Created by Yongping on 3/3/15.
//  Copyright (c) 2015 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
@class KiiUser;

@interface KiiKeyChainWrapper : NSObject

// Generic exposed method to search the keychain for a given value. Limit one result per search.
+ (NSData *)searchFirstItemCopyMatchingService:(NSString *)service
                                attrAccessible: (CFStringRef) attrAccessible
                                         error:(NSError **)error;

// Calls searchFirstKeychainCopyMatchingService: and converts to a KiiUser.
+ (KiiUser *)kiiUserFromMatchingService:(NSString *)service
                                  error:(NSError **)error;

/**
 *  Default initializer to store a KiiUser in the keychain.
 *
 *  @param value      value for the attribute kSecValueData as the value of the keychain item.
 *  @param service value for the attribute kSecAttrApplicationLabel of the key chain item.
 *  @param error if create failed, error will not be nil. 
 *
 */
+ (void)createKiiUser:(KiiUser *)value
           forService:(NSString *)service
                error:(NSError **) error;

/** Updates the stored KiiUser in the keychain. If you try to set the value with createDictionaryValue: and it already exists,this method is called instead to update the value in place.
 *
 *  @param value      value for the attribute kSecValueData as the value of the keychain item.
 *  @param service value for the attribute kSecAttrApplicationLabel of the key chain item.
 *  @param error if create failed, error will not be nil.
 */
+ (void)updateKiiUser:(KiiUser *)value
           forService:(NSString *)service
                error:(NSError **) error;

/**
 *  Delete an item in the keychain.
 *
 *  @param service value for the attribute kSecAttrApplicationLabel of the key chain item.
 *  @param error if create failed, error will not be nil.
 */
+ (void)deleteFromKeychainWithService:(NSString *)service
                                   error:(NSError **) error;

/**
 *  Delete all items from the keychain.
 *
 *  @param error if create failed, error will not be nil.
 */
+ (void)deleteAllKeychainItems:(NSError **)error;
@end
