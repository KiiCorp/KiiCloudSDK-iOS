//
//  KiiHashGenerating.h
//  KiiSDK-Private
//
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KiiUploader;

@protocol KiiHashGenerating <NSObject>

@required
- (NSString *)generateWithUploader:(KiiUploader *)uploader;

@end
