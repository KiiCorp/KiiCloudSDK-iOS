//
//  KiiUploader+Request.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 3/26/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiUploader_Hidden.h"

@interface KiiUploader (Request)

-(void) _suspendTransfer;

-(void) _terminateTransfer;

-(NSError*) _transfer;

-(void)_resumeTransfer;

@end
