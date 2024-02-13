//
//  KiiRTransferUploadStoring.h
//  KiiSDK-Private
//
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KiiUploader;
@protocol BucketDelegate;

@protocol KiiRTransferUploadStoring

@required
- (void)addUploader:(KiiUploader *)transferObject;

- (void)removeUploader:(KiiUploader *)transferObject;

@end
