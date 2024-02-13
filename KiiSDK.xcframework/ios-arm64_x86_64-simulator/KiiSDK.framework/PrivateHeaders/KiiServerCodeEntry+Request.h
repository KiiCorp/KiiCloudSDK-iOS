//
//  KiiServerCodeEntry+Request.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 6/28/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiServerCodeEntry_Hidden.h"
@class KiiServerCodeEntryArgument;

@interface KiiServerCodeEntry (Request)

-(NSError*) _execute:(KiiServerCodeEntryArgument*) argument;

@end
