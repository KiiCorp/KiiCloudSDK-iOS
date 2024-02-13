//
//  KiiUserFields_Hidden.h
//  KiiSDK-Private
//
//  Copyright (c) 2014 Kii Corporation. All rights reserved.
//

#import "KiiUserFields.h"

@interface KiiUserFields ()

@property (nonatomic, strong) NSMutableDictionary *customInfo;
@property (nonatomic, strong) NSMutableSet *removingKeys;

- (BOOL)isReservedKey:(NSString *)key;
- (BOOL)isEmpty;
- (NSError *)validate;

@end
