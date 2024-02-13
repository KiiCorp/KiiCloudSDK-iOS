//
//  KiiClause_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiClause.h"

@interface KiiClause () {
    
    NSMutableDictionary *_dictionaryExpression;
    
    NSString *_whereType;
    NSMutableArray *_whereClauses;
    
}

@end
