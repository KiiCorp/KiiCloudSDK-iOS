//
//  KiiHiddenProtocols.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 3/29/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
@class KiiUser;
@protocol JSONDelegate <NSObject>

- (void) loadFromJSON:(NSDictionary*)json;
@end

@protocol BucketDelegate <NSObject>

- (NSString*) bucketURI;
- (KiiUser*) user;

@end
@class KiiTopic;
@protocol KiiTopicSubject <NSObject>

- (NSString*) topicBaseURI;
@optional
- (KiiTopic*) topicWithName:(NSString*)topicName;
@end

@class KiiBucket,KiiEncryptedBucket;
@protocol KiiBucketParent <NSObject>

@optional
- (KiiBucket*) bucketWithName:(NSString*)bucketName;
- (KiiEncryptedBucket*) encryptedBucketWithName:(NSString*)bucketName;
@end