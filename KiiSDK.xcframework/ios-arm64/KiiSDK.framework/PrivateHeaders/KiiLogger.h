//
//  KiiLogger.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 11/12/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KiiLogger : NSObject

+ (void)kiiLogger:(int)level
             file:(const char *)file
         function:(const char *)function
             line:(int)line
           format:(NSString *)format, ...;

@end
