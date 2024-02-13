//
//  KiiPushMessage_Hidden.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/24/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiPushMessage.h"
#import "Kii_Hidden.h"

@interface KiiPushMessage (){
    BOOL _isIncomingMsg;
    NSDictionary* _data;
  
}
-(NSDictionary*) getMessageData:(NSError**) error;
@property (nonatomic,assign) KiiScope internalMessageScope;
@end
