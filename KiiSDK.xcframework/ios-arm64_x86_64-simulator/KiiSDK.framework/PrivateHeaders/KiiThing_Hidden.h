//
//  KiiThing_Hidden.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 1/5/15.
//  Copyright (c) 2015 Kii Corporation. All rights reserved.
//

#import "Kii.h"
#import "KiiBaseObject_Hidden.h"
#import "KiiHiddenProtocols.h"

@interface KiiThing ()<KiiTopicSubject,KiiBucketParent>{
    
    NSString* _thingID;
    
    NSString* _vendorThingID;
    
    NSString* _thingType;
    
    NSString* _vendor;
    
    NSString* _firmwareVersion;
    
    NSString* _productName;
    
    NSString* _lot;
    
    NSDate* _created;
    
    NSString* _stringField1;
    
    NSString* _stringField2;
    
    NSString* _stringField3;
    
    NSString* _stringField4;
    
    NSString* _stringField5;
    
    NSNumber* _numberField1;
    
    NSNumber* _numberField2;
    
    NSNumber* _numberField3;
    
    NSNumber* _numberField4;
    
    NSNumber* _numberField5;
    
    NSString* _accessToken;
    
    BOOL _disabled;
    
}

@property(nonatomic) NSString* thingID;

@property(nonatomic) NSString* vendorThingID;

@property(nonatomic) NSDate* created;

@property(nonatomic) NSString* accessToken;

@property (nonatomic,assign) BOOL disabled;

@property (nonatomic) NSNumber* online;

@property (nonatomic) NSDate *onlineStatusModifiedAt;

@end
