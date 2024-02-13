//
//  NSThread+ExtensibleThread.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 2/7/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSThread (ExtensibleThread_Kii)

+ (void) detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)obj1 andObject:(id)obj2;
+ (void) detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)obj1 andObject:(id)obj2 andObject:(id)obj3;
+ (void) detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)obj1 andObject:(id)obj2 andObject:(id)obj3 andObject:(id)obj4;

@end
