//
//  KiiRTransferStoreData.h
//  KiiSDK-Private
//
//  Created by Ryuji OCHI on 5/24/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KiiDownloader, KiiUploader, KiiRTransferInfo;

@interface KiiRTransferStoreData : NSObject <NSCoding>

@property(nonatomic, strong) NSString *objectURI;
@property(nonatomic, strong) NSString *localPath;
@property(nonatomic, strong) KiiRTransferInfo *transferInfo;
@property(nonatomic, strong) NSString *bucketURI;
@property(nonatomic, strong) NSString *clientHash;
@property(nonatomic, strong) NSString *filePath;
@property(nonatomic, strong) NSString *objectPath;
@property(nonatomic, strong) NSString *uploadId;
@property(nonatomic, strong) NSString *uuid;
@property(nonatomic, strong) NSDate *initialModifiedDate;
@property(nonatomic, strong) NSDate *serverModifiedDate;
@property(nonatomic, assign) NSUInteger totalNumberOfChunks;
@property(nonatomic, assign) NSUInteger chunkSize;
@property(nonatomic, strong) NSArray *chunks;
@property(nonatomic, strong) NSDictionary *rangeMaps;
@property(nonatomic, strong) NSString *initiatorId;

- (id)initWithTransferObject:(id)transferObject forType:(Class)class;

@end
