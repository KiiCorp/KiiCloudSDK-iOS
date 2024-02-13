//
//  KiiPushInstallation_Hiden.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/21/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiPushInstallation.h"

@interface KiiPushInstallation ()
{
    NSString* _installationID;
}
/*Installation id given by server after install process succeeded
 */


@property(nonatomic,readonly) NSString* installationID;

@end
