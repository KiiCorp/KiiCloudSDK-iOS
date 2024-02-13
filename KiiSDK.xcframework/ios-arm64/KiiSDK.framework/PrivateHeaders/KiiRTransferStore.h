//
//  KiiRTransferStore.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 5/17/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KiiRTransferUploadStoring.h"
#import "KiiRTransferDownloadStoring.h"

@class KiiUploader;
@class KiiDownloader;

@interface KiiRTransferStore : NSCoder<KiiRTransferUploadStoring,
        KiiRTransferDownloadStoring> {
    NSMutableDictionary *_uploadDict;
    NSMutableDictionary *_downloadDict;
}

+ (KiiRTransferStore *)sharedInstance;

- (NSArray *)getUploaderByInitiatorId:(NSString*) initiatorId andBucket:(id<BucketDelegate>) bucket;

- (NSArray *)getDownloaderByInitiatorId:(NSString*) initiatorId andBucket:(id<BucketDelegate>) bucket;

- (void)_addTransfer:(id)transferObject forType:(Class)class;

- (void)_removeTransfer:(id)transferObject forType:(Class)class;

- (NSArray *)_getTransferByInitiatorId:(NSString*) initiatorId andBucket:(NSString *)bucketURI forType:(Class)class;

- (void)saveTransferByInitiatorId:(NSString*) initiatorId;

- (void)loadTransferByInitiatorId:(NSString*) initiatorId;
@end
