//
//  KiiQuery_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//
#import "KiiQuery.h"

@interface KiiQuery () {
    NSString *_paginationKey;
    NSDictionary *_clauseValue;
    BOOL _sortDescending;
    NSString *_sortField;
    NSError * _queryError;
}
@property(nonatomic) NSString* paginationKey;
@end
