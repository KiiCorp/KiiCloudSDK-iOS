//
//  KiiURLRequestFactoryImpl.h
//  KiiSDK-Private
//
//  Created by fkm on 13/04/17.
//  Copyright (c) 2013年 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KiiURLRequest.h"
#import "KiiURLRequestFactory.h"

@interface KiiURLRequestFactoryImpl : NSObject <KiiURLRequestFactory>
-(id<KiiURLRequest>) requestWithURL:(NSURL*)url;
@end
