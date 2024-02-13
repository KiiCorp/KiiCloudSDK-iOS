//
//  NSObject+Extensible_Callback.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 12/21/11.
//  Copyright (c) 2011 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Extensible_Callback_Kii)

- (void) performSelectorOnMainThread:(SEL)aSelector waitUntilDone:(BOOL)wait withArgs:(id)args, ...;
- (void) performSelector:(SEL)aSelector withObjects:(id)args, ...;


- (void) performSelectorOnMainThread:(SEL)selector withObject:(id)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)wait;

@end
