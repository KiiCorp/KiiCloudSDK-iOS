//
//  KiiRTransferDownloadStoring.h
//  KiiSDK-Private
//
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KiiDownloader;
@protocol BucketDelegate;

@protocol KiiRTransferDownloadStoring

@required
- (void)addDownloader:(KiiDownloader *)transferObject;

- (void)removeDownloader:(KiiDownloader *)transferObject;

@end
