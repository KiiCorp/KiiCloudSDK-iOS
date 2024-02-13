//
//  KiiResumableTransfer_Hidden.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 4/8/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiResumableTransfer.h"
#import "KiiRTransfer.h"
#import "FileHolder.h"

static const NSUInteger KiiRT_CHUNK_SIZE=1024*512;
@class KiiRTransferInfo,KiiObject,KiiUser;
@interface KiiResumableTransfer (){

    NSArray *_chunks;
    NSString *_bucketURI;
    NSString *_initiatorId;
    NSString *_clientHash;
    NSString *_objectPath;
    NSString *_filePath;
    NSDate *_initialModifiedDate;
    KiiRTransferInfo *_transferInfo;
    NSDictionary *_rangeMaps;
    KiiObject *_object;
    NSUInteger _totalNumberOfChunks;
    NSUInteger _chunkSize;
    BOOL isSuspending;
}
@property(nonatomic, strong) NSString *initiatorId;
@property(nonatomic, strong) NSString *uuid;
@property(nonatomic, strong) NSArray *chunks;
@property(nonatomic, strong) NSString *clientHash;
@property(nonatomic, strong) NSString *objectPath;
@property (nonatomic,strong) NSString *bucketURI;
@property(nonatomic, strong) NSString *filePath;
@property(nonatomic, strong) KiiRTransferInfo *transferInfo;
@property(nonatomic, strong) NSDictionary *rangeMaps;
@property(nonatomic, strong) NSDate *initialModifiedDate;
@property(nonatomic, strong) KiiObject *object;
@property(nonatomic, assign) NSUInteger totalNumberOfChunks;
@property(nonatomic, assign) NSUInteger chunkSize;
@property(nonatomic, copy) KiiRTransferBlock progressBlock;
@property(nonatomic, copy) KiiRTransferBlock completionBlock;

@property(nonatomic, strong) NSCondition *transferCondition;
@property(nonatomic, strong) NSError *transferError;
@property(nonatomic,weak,readonly) id<FileHolder> fileHolder;

- (id)initWithObject:(KiiObject *)object andLocalPath:(NSString*) localPath;

- (NSDate *)getLastModifiedDate;

- (NSError *)checkFileModification;

- (void)sendCompletion:(id <KiiRTransfer>)transferObject withError:(NSError *)error;

- (void)sendCompletion:(id <KiiRTransfer>)transferObject withCompletionBlock:(KiiRTransferBlock)completion andError:(NSError *)error;

- (void)sendProgress:(id <KiiRTransfer>)transferObject withError:(NSError *)error;

- (NSError *)validationForTransfer;

- (void) initializeTransferData;
- (void) populateChunks:(NSUInteger) lastChunkSize andTotalSize:(NSUInteger) fileSize;

+ (NSString*)initiatorIdByUser:(KiiUser*) user;


@end
