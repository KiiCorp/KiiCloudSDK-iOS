//
//  KiiSocialNetworkConnector_Hidden.h
//  KiiSDK-Private
//
//  Created by Syah Riza on 2/4/14.
//  Copyright (c) 2014 Kii Corporation. All rights reserved.
//

#import "KiiSocialNetworkConnector.h"
@import WebKit;
@interface KiiSocialNetworkConnector ()
@property(nonatomic,strong) WKWebView* webView;
@property(nonatomic,copy) NSMutableDictionary* providerAccessTokenDict;
@property(nonatomic,readonly) NSNumber* currentProviderNum;
- (void)closeWebView: (void (^)(void))completion;
- (void) cancel:(id) sender;
- (NSString *)kiiappsBaseUrl;
@end
