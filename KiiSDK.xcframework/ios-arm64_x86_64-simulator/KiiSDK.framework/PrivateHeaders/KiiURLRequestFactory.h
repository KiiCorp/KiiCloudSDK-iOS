//
//  KiiURLRequestFactory.h
//  KiiSDK-Private
//
//  Provides Factory method to create KiiURLRequest
//
//  Created by hirokazu.fukami@kii.com on 13/04/17.
//  Copyright (c) 2013年 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KiiURLRequest.h"

@protocol KiiURLRequestFactory <NSObject>
-(id<KiiURLRequest>) requestWithURL:(NSURL*)url;
@end
