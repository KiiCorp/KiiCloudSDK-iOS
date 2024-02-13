//
//  NSData+KiiExtensions.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 2/11/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (KiiExtensions)

- (NSString*)checksum;
- (NSString *)base64;
- (NSString *) hexToken;
@end
