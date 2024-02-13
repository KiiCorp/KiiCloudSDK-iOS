//
//  KiiRTransferSemaphore.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 5/17/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KiiUploader;
@class KiiDownloader;

@interface KiiRTransferSemaphore : NSObject {
    NSMutableSet *_transferSemaphore;
}

+ (KiiRTransferSemaphore *)sharedInstance;

- (NSString *)getUploadLockID:(KiiUploader *)uploader;

- (NSError *)lockUploader:(KiiUploader *)uploader;

- (NSError *)relockUploader:(KiiUploader *)uploader;

- (NSError *)unlockUploader:(KiiUploader *)uploader;

- (NSError *)lockDownloader:(KiiDownloader *)downloader;

- (NSError *)unlockDownloader:(KiiDownloader *)downloader;

- (NSError *)lockTransfer:(NSString *)targetPath;

- (NSError *)unlockTransfer:(NSString *)targetPath;


@end
