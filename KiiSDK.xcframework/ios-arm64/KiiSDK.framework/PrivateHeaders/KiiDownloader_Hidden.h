//
//  KiiDownloader_Hidden.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 5/1/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiDownloader.h"

#import "KiiResumableTransfer_Hidden.h"
@class KiiRTransferInfo;
@interface KiiDownloader (){
    
    NSOperationQueue * _downloadQueue;
    NSDate *_serverModifiedDate;
    KiiDownloader* _retainedDownloader;
}

@property (nonatomic, strong) NSDate *serverModifiedDate;

@end
