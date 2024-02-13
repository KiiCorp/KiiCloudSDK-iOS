//
//  KiiBucket+Request.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 5/17/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiBucket_Hidden.h"

@class KiiCallback, KiiQuery;

@interface KiiBucket (Request)

- (NSError*) _executeQuerySynchronous:(KiiQuery*)query
                          withResults:(NSArray**)results
                              andNext:(KiiQuery**)nextQuery;

- (NSError*) _deleteSynchronous;

-(NSError*) _subscribeSynchronous;

-(NSError*) _unsubscribeSynchronous;

-(BOOL) _isSubcribedWithError:(NSError**) error;

- (NSError*) _countQuerySynchronous:(KiiQuery*) query withResult:(NSUInteger*) result;

-(NSError*) _subscribeSynchronousWithSubscriberPath:(NSString*) subscriberPath;

-(NSError*) _unsubscribeSynchronousWithSubscriberPath:(NSString*) subscriberPath;

-(BOOL) _isSubscribedSynchronousWithSubscriberPath:(NSString*) subscriberPath andError:(NSError**) error;
@end
