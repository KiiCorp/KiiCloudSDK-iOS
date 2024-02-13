//
//  KiiServerCodeExecResult_Hidden.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 6/27/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiServerCodeExecResult.h"
#import "KiiServerCodeEntry.h"
@interface KiiServerCodeExecResult (){
    NSDictionary *_returnedValue;
    NSInteger _executedSteps;
    KiiServerCodeEnvironmentVersion _environmentVersion;
}
@property(nonatomic,readonly) NSInteger executedSteps;
@property(nonatomic,readonly) NSDictionary *returnedValue;
@property(nonatomic,readonly) KiiServerCodeEnvironmentVersion environmentVersion;

-(KiiServerCodeExecResult*) initWithResult:(NSDictionary*) returnedValue executedSteps:(NSInteger) executedSteps environmentVersion:(KiiServerCodeEnvironmentVersion) environmentVersion;
@end
