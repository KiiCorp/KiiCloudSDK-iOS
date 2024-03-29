//
//  KiiRequest.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 12/21/11.
//  Copyright (c) 2011 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KiiObject, KiiCallback;

typedef enum { KiiRequestGET, KiiRequestPUT, KiiRequestPOST, KiiRequestFORMPOST, KiiRequestDELETE , KiiRequestHEAD, KiiRequestPATCH } KiiRequestHttpMethods;

@interface KiiRequest : NSObject {
        
    // these are dev-specific values
    KiiCallback *_callback;
    
    BOOL _authenticating;
    
    NSValue *operation;
    
    KiiObject *mObject;

    NSData *_fileData;
    NSString *downloadPath;
}

@property (nonatomic, strong) NSValue *operation;

@property (nonatomic, strong) KiiCallback *callback;

@property (nonatomic, strong) NSData *fileData;
@property (nonatomic, strong) NSData *chunkDownloadData;

@property (nonatomic, strong) NSString *requestPath;
@property (nonatomic, strong) NSDictionary *postData;
@property (nonatomic, strong) NSString *plainText;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *accept;
@property (nonatomic, assign) BOOL anonymous;
@property (nonatomic, assign) int requestMethod;

@property (nonatomic, strong) NSString *filePath;
@property (nonatomic, strong) NSString *downloadPath;

@property (nonatomic, strong) NSMutableArray *customHeaders;
@property (nonatomic, strong) KiiObject *mObject;
@property (nonatomic, assign) BOOL isChunkUpload;
@property (nonatomic, assign) BOOL isChunkDownload;
@property (nonatomic, assign) long long uploadFileSize;

@property (nonatomic,copy,readonly) NSDictionary *responseHeaders;

- (id) initWithPath:(NSString*)path andApp:(BOOL)appInPath;
- (id) initWithPath:(NSString*)path;

- (id) initWithUrl:(NSString *)url;

- (void) setRequestPath:(NSString *)reqPath withApp:(BOOL)appInURL;

- (NSDictionary*) makeSynchronousRequest:(NSError**)sendError andResponseCode:(int*)outResponseCode withETag:(NSString**) etag;
- (NSDictionary*) makeSynchronousRequest:(NSError**)sendError andResponseCode:(int*)response;
- (NSDictionary*) makeSynchronousRequest:(NSError**)sendError;
-(void) responseDataReceived:(NSMutableData *)data withExpectedSize:(long long) size;
-(void) requestDataSend:(NSInteger) totalBytesWritten;
- (void) makeSynchronousRequest:(NSError **)sendError andResponseCode:(int *)outResponseCode withETag:(NSString **)etag withJSONResponse: (NSDictionary**)jsonResp;
@end
