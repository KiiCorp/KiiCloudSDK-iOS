//
//  KiiObjectBodyRequest.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 3/5/14.
//  Copyright (c) 2014 Kii Corporation. All rights reserved.
//

#import "Kii.h"
#import "KiiRequest.h"

@interface KiiObjectBodyUploadRequest : KiiRequest{
    KiiObjectBodyProgressBlock _progress;
    KiiObject *_object;
}

+ (instancetype) uploadRequest:(KiiObject*) object andProgress:(KiiObjectBodyProgressBlock) progress;

@end

@interface KiiObjectBodyDownloadRequest : KiiRequest{
    KiiObjectBodyProgressBlock _progress;
    KiiObject *_object;
}
+ (instancetype) downloadRequest:(KiiObject*) object andProgress:(KiiObjectBodyProgressBlock) progress;
@end