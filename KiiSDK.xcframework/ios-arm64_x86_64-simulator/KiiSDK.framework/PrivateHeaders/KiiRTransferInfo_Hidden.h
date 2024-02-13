//
//  KiiRTransferInfo_Hidden.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 3/26/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiRTransferInfo.h"

typedef enum {
    KiiRT_NOCOMMIT,
    KiiRT_COMMITREADY,
    KiiRT_COMMITTED
} KiiRTransferCommitStatus;

@interface KiiRTransferInfo (){
    NSUInteger _completedSizeInBytes;
    NSUInteger _totalSizeInBytes;
    KiiRTransferStatus _transferStatus;
    KiiRTransferCommitStatus _commitStatus;
}

@property(assign) KiiRTransferStatus transferStatus;
@property(assign) NSUInteger totalSizeInBytes;
@property(assign) NSUInteger completedSizeInBytes;
@property(assign) KiiRTransferCommitStatus commitStatus;

@end
