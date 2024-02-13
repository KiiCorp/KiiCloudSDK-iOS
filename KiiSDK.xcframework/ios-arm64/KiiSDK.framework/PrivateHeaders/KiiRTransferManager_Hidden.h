//
//  KiiRTransferManager_Hidden.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 3/26/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiRTransferManager.h"

@class KiiUploader, KiiDownloader,KiiBaseBucket,KiiBucket, KiiRTransferStoreData;

@interface KiiRTransferManager () {
    NSString *_bucketURI;
    NSString *_bucketName;
}

@property(nonatomic, strong) KiiBaseBucket *selectedBucket;

- (id)initWithBucket:(KiiBucket *)bucket;

- (void)suspendAllTransfer;

- (KiiDownloader *)_createDownloader:(KiiRTransferStoreData *)store;

- (KiiUploader *)_createUploader:(KiiRTransferStoreData *)store;

@end
