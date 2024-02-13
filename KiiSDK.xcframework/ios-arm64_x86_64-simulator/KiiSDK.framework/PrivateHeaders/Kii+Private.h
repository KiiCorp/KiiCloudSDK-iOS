//
//  Kii+Private.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 5/17/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Kii.h"

@interface Kii (Private)

- (void)saveTransferStoreData:(NSMutableDictionary *)userDic byUserId:(NSString*) userId;

@end
