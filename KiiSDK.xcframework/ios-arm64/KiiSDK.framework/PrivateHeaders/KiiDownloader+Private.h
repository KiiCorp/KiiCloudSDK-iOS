//
//  KiiDownloader+Private.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 4/30/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiDownloader_Hidden.h"


@interface KiiDownloader (Private)
- (void) generateTransferData;

- (BOOL)isFileExist:(NSError **)error;

- (void)resetTransferStatus;

- (void)resetTransferManager;

- (void)cancelDownloadTask;

- (void)clearDownloadQueue;

- (void)sendCompletionWithCancelDownloadTask:(NSError *)error;

- (NSError *)createNewFileForDownload;

- (NSError*) validationForDownloadedFile;
@end
