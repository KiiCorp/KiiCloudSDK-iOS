//
//  KiiServerCodeEntry_Hidden.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 6/27/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import "KiiServerCodeEntry.h"


@interface KiiServerCodeEntry (){
    NSString* _entryName;
    NSString* _version;
    KiiServerCodeEnvironmentVersion _environmentVersion;
    KiiServerCodeEntryArgument* _argument;
    KiiServerCodeExecResult* _execResult;
}

@property(nonatomic,readonly) NSString* entryName;
@property(nonatomic,readonly) NSString* version;
@property(nonatomic,readonly) KiiServerCodeEnvironmentVersion environmentVersion;

-(KiiServerCodeEntry*) initWithEntryName:(NSString*) entryName version:(NSString*) version environmentVersion: (KiiServerCodeEnvironmentVersion) environmentVersion;

@end
