//
//  KiiUploader_Hidden.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 3/26/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiUploader.h"
#import "KiiResumableTransfer_Hidden.h"
@class KiiRTransferInfo;
@protocol KiiRESTUploading;
@protocol KiiHashGenerating;
@protocol KiiRTransferUploadStoring;
@interface KiiUploader (){
    NSString *_uploadId;
    NSOperationQueue * _uploadQueue;
    KiiUploader * _reatinedUploader;
}

@property (nonatomic, strong) NSString *uploadId;
@property (nonatomic, strong) NSOperationQueue *uploadQueue;
@property (nonatomic, strong) id<KiiRESTUploading> uploading;
@property (nonatomic, strong) id<KiiHashGenerating> hashGenerating;
@property (nonatomic, strong) id<KiiRTransferUploadStoring> store;

- (instancetype)initWithObject:(KiiObject *)object
                     localPath:(NSString*) localPath
                         store:(id<KiiRTransferUploadStoring>)store;
@end
