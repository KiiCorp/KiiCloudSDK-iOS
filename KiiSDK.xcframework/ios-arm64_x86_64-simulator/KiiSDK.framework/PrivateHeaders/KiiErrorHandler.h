//
//  KiiErrorHandler.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 4/5/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol KiiErrorHandler

@required
-(NSError *) httpStatus400;
-(NSError *) httpStatus401;
-(NSError *) httpStatus404;

@optional
-(NSError *) httpStatus403;
-(NSError *) httpStatus409;
-(NSError *) httpStatus415;

@end
