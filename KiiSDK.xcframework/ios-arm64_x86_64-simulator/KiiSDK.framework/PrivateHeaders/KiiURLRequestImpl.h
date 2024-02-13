//
//  KiiURLRequestImpl.h
//  KiiSDK-Private
//
//  Implementation of KiiURLRequest protocol
//
//  Created by hirokazu.fukami@kii.com on 13/04/17.
//  Copyright (c) 2013年 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KiiURLRequest.h"
#import "KiiRequest.h"

@class KiiRequest;
@interface KiiURLRequestImpl : NSObject <KiiURLRequest, NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
{
    NSMutableURLRequest* request;
    
    BOOL complete;
    NSMutableData* _responseData;
    NSInteger _responseCode;
    NSError* _responseError;
    NSDictionary* _responseHeaders;

    long long responseExpectedSize;

    KiiRequest* _kiiRequest;
    dispatch_semaphore_t _semaphore;
}

+(KiiURLRequestImpl*) requestWithURL:(NSURL*)url;
-(void)handlingCompletion:(NSURLResponse *) response error:(NSError*) error;
-(NSURLRequest*) getHTTPRequest;
#pragma mark KiiURLRequest protocol
-(void) setCachePolicy:(NSURLRequestCachePolicy)policy;
-(void) setValue:(NSString*)value forHTTPHeaderField:(NSString*)key;
-(void) addValue:(NSString*)value forHTTPHeaderField:(NSString*)key;
-(NSDictionary*) getAllHTTPHeaderFields;
-(void) setHTTPMethod:(NSString*)method;
-(void) setHTTPBody:(NSData*)body;
-(NSData*) getHTTPBody;
-(void) setKiiRequest:(KiiRequest*)kiiRequest;

-(BOOL) isCompleted;
-(NSData*) responseData;
-(NSInteger) responseCode;
-(NSError*) responseError;
-(NSDictionary*) responseHeaders;
- (NSMutableURLRequest *)urlRequest;

@end
