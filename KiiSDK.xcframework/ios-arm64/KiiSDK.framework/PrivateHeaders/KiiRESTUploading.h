//
//  KiiRESTUploading.h
//  KiiSDK-Private
//
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KiiUploader;

@protocol KiiRESTUploading <NSObject>

@required
- (NSError *)ensureMetadataWithUploader:(KiiUploader *)uploader;
- (NSError *)startUploadWithUploader:(KiiUploader *)uploader;
- (NSError *)chunkUploadWithUploader:(KiiUploader *)uploader;
- (NSError *)commitUploadWithUploader:(KiiUploader *)uploader;

@end
