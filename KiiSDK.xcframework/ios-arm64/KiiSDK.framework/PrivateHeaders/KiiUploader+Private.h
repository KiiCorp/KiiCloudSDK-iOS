//
//  KiiUploader+Private.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 3/26/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiUploader_Hidden.h"
#import "KiiHiddenProtocols.h"

@interface KiiUploader (Private) <JSONDelegate>

- (void)generateTransferData;

- (void)resetTransferStatus;

- (void)resetTransferManager;

- (void)clearUploadQueue;

- (void)cancelUploadTask;

- (void)sendCompletionWithCancelUploadTask:(NSError *)error;

@end
