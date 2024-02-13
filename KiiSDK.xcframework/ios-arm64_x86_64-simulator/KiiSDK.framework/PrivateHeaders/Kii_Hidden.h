//
//  Kii_Hidden.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 8/23/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import "Kii.h"
#import "KiiHiddenProtocols.h"
#import "KiiURLRequestFactory.h"
#import "KiiRequest.h"
#import "KiiUtilities.h"

typedef NS_ENUM(NSUInteger, KiiScope) {
    KiiScope_APP,
    KiiScope_APP_AND_Group,
    KiiScope_APP_AND_User,
    KiiScope_APP_AND_Thing
};
@interface Kii ()<KiiTopicSubject> {
    
    NSString *mAppName;
    NSString *mAppID;
    NSString *mAppKey;
    
    KiiUser *_currentUser;
    
    NSString *_baseURL;
    
    KiiSocialConnect *_socialConnect;
    
    int _logLevel;
    
    UIAlertView* _apnsAlert;
    
    NSMutableDictionary * _currentUserData;
}

@property (nonatomic, strong) KiiUser *currentUser;
@property (nonatomic, strong) KiiSocialConnect *socialConnect;
@property (assign) int logLevel;
@property (nonatomic, strong) id<KiiURLRequestFactory> requestFactory;
@property (nonatomic, strong) NSMutableDictionary *currentUserData;
@property (nonatomic, strong) NSString *deviceToken;
@property(assign) BOOL isDevelopmentMode;
@property (nonatomic, strong) NSString *kiiAppsBaseURL;
@property (nonatomic, assign) long long accessTokenExpiration;

+ (Kii*) sharedInstance;

+ (void) shutDown;

+ (NSString*)baseURL;
+ (NSString*)appName;

+ (NSString*)appID;
+ (NSString*)appKey;

- (NSString*)appKey;
- (NSString*)baseURL;

- (KiiUser*) currentUser;
- (void) saveCurrentUserData;
- (NSMutableDictionary *) userData:(NSString*) userId;
- (NSString *)createKiiAppsBaseURL:(NSString *)serverUrl withAppID:(NSString *)appID;

@end
