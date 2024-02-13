//
//  KiiDownloader+Request.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 4/30/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiDownloader_Hidden.h"

@interface KiiDownloader (Request)

-(void) _suspendTransfer;

-(void) _terminateTransfer;

-(NSError*) _transfer;

-(void)_resumeTransfer;

@end
