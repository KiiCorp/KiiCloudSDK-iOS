//
//  KiiUser+Private.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 5/16/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiUser_Hidden.h"

@interface KiiUser (Private)

- (void) _privateSetVerified:(NSString*)type isVerified:(BOOL)verified;
- (BOOL) passwordChanged;
- (void) setPasswordChanged:(BOOL)changed;

- (void) _setAccessToken:(NSString*)token;

- (NSDictionary*) _privateGenerateUploadMetadata;
- (void) loadFromJSON:(NSDictionary*)json;

- (NSString*) _privatePassword;

- (BOOL) _isLoggedInUser;


- (NSDictionary *)credentialDictionary;

-(id)initWithCredentialsDict:(NSDictionary *)credentialDictionary;
@end
