//
//  KiiURLRequest.h
//  KiiSDK-Private
//
//  Provides NSURLRequest features
//
//  Created by hirokazu.fukami@kii.com on 13/04/17.
//  Copyright (c) 2013年 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KiiRequest;
@protocol KiiURLRequest <NSObject>
-(void) setCachePolicy:(NSURLRequestCachePolicy)policy;
-(void) setValue:(NSString*)value forHTTPHeaderField:(NSString*)key;
-(void) addValue:(NSString*)value forHTTPHeaderField:(NSString*)key;
-(NSDictionary*) getAllHTTPHeaderFields;
-(void) setHTTPMethod:(NSString*)method;
-(void) setHTTPBody:(NSData*)body;
-(NSData*) getHTTPBody;
-(void) setKiiRequest:(KiiRequest*)kiiRequest;

// send request and get response
-(void) sendRequest;
-(BOOL) isCompleted;
-(NSData*) responseData;
-(NSInteger) responseCode;
-(NSError*) responseError;
-(NSDictionary*) responseHeaders;
-(void)showHttpRequestInfo;
-(void)showHttpResponseInfo;

@optional
- (NSMutableURLRequest *)urlRequest;
@end
