//
//  NSString+Kii_NSString_Extensions.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 2/6/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (NSString_KiiExtensions)

- (NSString *)urlEncode;

- (NSString *)RFC3986Encode;

- (NSString*) md5;
- (BOOL) emailIsValid;
- (BOOL) passwordIsValid;
- (BOOL) usernameIsValid;
- (BOOL) displaynameIsValid;
- (BOOL) phoneNumberIsValid;
- (BOOL) internationalPhoneNumberIsValid;
- (BOOL) localPhoneNumberIsValid;
- (BOOL) countryCodeIsValid;
- (BOOL) topicIdIsValid;
- (BOOL)objectIdIsValid;
- (BOOL) serverCodeEntryNameIsValid;
- (BOOL)experimentIDIsValid;
- (BOOL) bucketNameIsValid;
@end
