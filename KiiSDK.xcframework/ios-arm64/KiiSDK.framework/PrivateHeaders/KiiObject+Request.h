//
//  KiiObject+Request.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 2/7/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "KiiObject_Hidden.h"

@class KiiCallback;

@interface KiiObject (Request)

- (NSError*) _saveSynchronous;
- (NSError*) _refreshSynchronous;
- (NSError *)_updateSynchronous:(BOOL)forced allFields:(BOOL)allFields;
- (NSError*) _deleteSynchronous;
- (NSError*) _deleteBodySynchronous;
- (NSError*) _publishBodySynchronousToURL:(NSString**)toURL;
- (NSError*) _publishBodySynchronousAt:(NSDate*)expiresAt toURL:(NSString**)toURL;
- (NSError*) _publishBodySynchronousIn:(NSUInteger) timeInterval toURL:(NSString**)toURL;
- (NSError*) _downloadBodySynchronous:(NSURL*)toURL withProgress:(KiiObjectBodyProgressBlock) progress;
- (NSError*) _uploadBodySynchronousWithData:(NSData*)data andBodyContentType:(NSString*) bodyContentType andProgress:(KiiObjectBodyProgressBlock) progress;
- (NSError*) _uploadBodySynchronousWithUrl:(NSURL*)fromURL andBodyContentType:(NSString*) bodyContentType andProgress:(KiiObjectBodyProgressBlock) progress;
- (NSMutableURLRequest*)_getRequest;
- (NSURLRequest *)_uploadBodyRequest:(NSString *)contentType;

@end
