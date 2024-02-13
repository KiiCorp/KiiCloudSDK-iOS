//
//  NSURL+KiiExtensions.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 8/10/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (KiiExtensions)

+ (NSDictionary *)parseURLQueryString:(NSString *)query;

@end
