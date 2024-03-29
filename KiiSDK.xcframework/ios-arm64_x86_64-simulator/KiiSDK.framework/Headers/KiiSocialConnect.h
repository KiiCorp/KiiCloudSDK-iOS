//
//  KiiSocialConnect.h
//  KiiSDK-Private
//
//  Created by Chris Beauchamp on 7/3/12.
//  Copyright (c) 2012 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class KiiSocialConnectNetwork;
@class KiiSCNFacebook;
@class KiiUser;
@class KiiSCNQQ;


/**
* This enum represents social networks identifier.
*/
typedef NS_ENUM(NSUInteger, KiiSocialNetworkName) {
    /** Use Facebook */
    kiiSCNFacebook NS_SWIFT_NAME(SCNFacebook) = 100,
    /** Use Twitter */
    kiiSCNTwitter NS_SWIFT_NAME(SCNTwitter) = 101,
    /** Use QQ */
    kiiSCNQQ NS_SWIFT_NAME(SCNQQ) = 102,
    /** Use Kii Social Network Connect */
    kiiSCNConnector NS_SWIFT_NAME(SCNConnector) = 103
};

typedef NS_ENUM(NSUInteger, KiiConnectorProvider) {
    /** Use Facebook to authenticate */
    kiiConnectorFacebook NS_SWIFT_NAME(Facebook),
    /** Use Twitter to authenticate */
    kiiConnectorTwitter NS_SWIFT_NAME(Twitter),
    /** Use LinkedIn to authenticate @deprecated It will not be supported after July 31st, 2019 */
    kiiConnectorLinkedIn NS_SWIFT_NAME(LinkedIn) __attribute__ ((deprecated("It will not be supported after July 31st, 2019"))),
    /** Use Yahoo to authenticate @deprecated It will not be supported after July 31st, 2019 */
    kiiConnectorYahoo NS_SWIFT_NAME(Yahoo) __attribute__ ((deprecated("It will not be supported after July 31st, 2019"))),
    /** Use Google to authenticate @deprecated Please use kiiConnectorGoogleplus instead*/
    kiiConnectorGoogle NS_SWIFT_NAME(Google) __attribute__ ((deprecated("Please use kiiConnectorGoogleplus instead"))),
    /** Use Dropbox to authenticate @deprecated It will not be supported after July 31st, 2019 */
    kiiConnectorDropbox NS_SWIFT_NAME(Dropbox) __attribute__ ((deprecated("It will not be supported after July 31st, 2019"))),
    /** Use Box to authenticate @deprecated It will not be supported after July 31st, 2019 */
    kiiConnectorBox NS_SWIFT_NAME(Box) __attribute__ ((deprecated("It will not be supported after July 31st, 2019"))),
    /** Use Renren to authenticate @deprecated It will not be supported after July 31st, 2019 */
    kiiConnectorRenren NS_SWIFT_NAME(Renren) __attribute__ ((deprecated("It will not be supported after July 31st, 2019"))),
    /** Use Sina Weibo to authenticate */
    kiiConnectorSina NS_SWIFT_NAME(Sina),
    /** Use Live to authenticate @deprecated It will not be supported after July 31st, 2019 */
    kiiConnectorLive NS_SWIFT_NAME(Live) __attribute__ ((deprecated("It will not be supported after July 31st, 2019"))),
    /** Use QQ to authenticate. */
    kiiConnectorQQ NS_SWIFT_NAME(QQ),
    /** Use Googleplus to authenticate. */
    kiiConnectorGoogleplus NS_SWIFT_NAME(Googleplus),
    /** Use Open ID provider configured for the App.
     * It is configurable only with Kii Cloud Enterprise subscription.
     */
    kiiConnectorOpenIDConnectSimple NS_SWIFT_NAME(OpenIDConnectSimple),
    /** Reserved for internal use. */
    kiiReserved1 NS_SWIFT_NAME(Reserved1),
    /** Use Kii to authenticate. */
    kiiConnectorKii NS_SWIFT_NAME(Kii),
};


/**
 * The block to be called upon method completion.
 */
typedef void (^KiiSocialConnectBlock)(KiiUser *_Nullable user, KiiSocialNetworkName name, NSError *_Nullable error);

/**
 * The block to be called upon method completion.
 */
typedef void (^KiiSCNBlock)(KiiUser *_Nullable user, KiiConnectorProvider provider, NSError *_Nullable error);

/** An interface to link users to social networks

 The SDK currently support the following social networks :

 1. Facebook
 2. Twitter
 3. Sina Weibo
 4. Googleplus
 5. QQ

 The following services will not be supported after July 31st, 2019:

 6. LinkedIn
 7. Yahoo
 8. Dropbox
 9. Box
 10. Renren
 11. Microsoft Live
 12. OpenID Connect Simple
*/
@interface KiiSocialConnect : NSObject;
NS_ASSUME_NONNULL_BEGIN

/** Required method by KiiSocialNetwork

 This method must be placed in your AppDelegate file in order for the SNS to properly authenticate with KiiSocialConnect:

    // Pre iOS 4.2 support
    - (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url {
        return [KiiSocialConnect handleOpenURL:url];
    }

    // For iOS 4.2+ support
    - (BOOL)application:(UIApplication *)application openURL:(NSURL *)url
                                           sourceApplication:(NSString *)sourceApplication
                                                  annotation:(id)annotation {
        return [KiiSocialConnect handleOpenURL:url];
    }

@param url The URL that is returned by Facebook authentication through delegate.
@deprecated Not usable on new social connect login mechanism from v2.2.1.
 */
+ (BOOL) handleOpenURL:(NSURL*)url __attribute__((deprecated("Not usable on new social connect login mechanism from v2.2.1")));


/** Set up a reference to one of the supported KiiSocialNetworks.

 The user will not be authenticated or linked to a <KiiUser>
 until one of those methods are called explicitly.
 @param network One of the supported <KiiSocialNetworkName> values.
 @param key The SDK key assigned by the social network provider. It should not be nil or empty except for Kii Social Network Connect.In case of QQ just pass nil.
 @param secret The SDK secret assigned by the social network provider. In case of Twitter, It should not be nil or empty. In case of QQ and Kii Social Network Connect just pass nil.
 @param options Extra options that can be passed to the SNS, this is not mandatory. Examples could be (Facebook) an NSDictionary of permissions to grant to the authenticated user. In case of qq, twitter and Kii Social Network Connect, options parameter will not be used, please set to nil.
 @exception NSInvalidArgumentException will be thrown if key and/or secret is not valid (see description above).
 @deprecated Not usable on new social connect login mechanism from v2.2.1.
 */
+ (void) setupNetwork:(KiiSocialNetworkName)network
              withKey:(nullable NSString*)key
            andSecret:(nullable NSString*)secret
           andOptions:(nullable NSDictionary*)options __attribute__((deprecated("Not usable on new social connect login mechanism from v2.2.1")));

/** Login with specified social network.

 **Note**: Login with UI provided by SDK will be not supported after July 31st, 2019.

 This will initiate the login process for the given network, with or without UI handled by SDK. If you prefer to handle login UI or using provider specific SDK to obtain access token, pass required params (acces token, access token secret, open ID) according to each provider. Other than <b> kiiConnectorQQ</b>, Kii SDK can handle the UI by passing nil into the options. If the social network user has already linked with a <KiiUser>,
 that user will be used as signed user. Otherwise, KiiCloud creates a new user and link with the specified social network account.
 The provider should be valid <KiiConnectorProvider> values. Otherwise, an exception will be raised. <br>
 Snippet for Login with social network without UI:<br>

    [KiiSocialConnect logIn:kiiConnectorFacebook
                    options:@{@"accessToken":@"access_token"}
                      block:^(KiiUser *user, KiiConnectorProvider provider, NSError *error) {
        if (error == nil) {
            // link successful. Do someting with the user.
        } else {
            // something went wrong.
        }
    }];

 Snippet for Login with social network with UI:<br>

    [KiiSocialConnect logIn:kiiConnectorFacebook
                    options:nil
                      block:^(KiiUser *user, KiiConnectorProvider provider, NSError *error) {
        if (error == nil) {
            // link successful. Do someting with the user.
        } else {
            // something went wrong.
        }
    }];

 Following parameters can be assigned to NSDictionary's key.<br><br>
 ### Facebook, Renren, Googleplus
 <table>
 <thead>
 <tr>
 <th>Key</th>
 <th>Value type</th>
 <th>Value</th>
 <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>accessToken</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 </tbody>
 </table>

 ### Twitter
 <table>
 <thead>
 <tr>
 <th>Key</th>
 <th>Value type</th>
 <th>Value</th>
 <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>accessToken</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 <tr>
 <td>accessTokenSecret</td>
 <td>String</td>
 <td>Required to generate signature when you call social network API.</td>
 <td></td>
 </tr>
 </tbody>
 </table>

 ### QQ
 <table>
 <thead>
 <tr>
 <th>Key</th>
 <th>Value type</th>
 <th>Value</th>
 <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>accessToken</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 <tr>
 <td>openID</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 </tbody>
 </table>

 @param provider One of the supported <KiiConnectorProvider> values.
 @param options A dictionary of key/values to pass to KiiSocialConnect. This can be nil if using UI approach.
 @param block To be called upon login completion.
 @exception NSInvalidArgumentException will be thrown if options is not valid.
 @exception NSInvalidArgumentException will be thrown if block is nil.
 @exception NSInvalidArgumentException will be thrown if KiiSocialNetworkName is passed as provider.
 @warning Dropbox, Box, Yahoo, LinkedIn, Microsoft Live, Sina Weibo can only use login with UI.
 */
+ (void) logIn:(KiiConnectorProvider)provider options:(nullable NSDictionary*)options block: (KiiSCNBlock) block;

/** Get UINavigationController for login with specified social network.

 **Note**: Login with UI provided by SDK will be not supported after July 31st, 2019.

 This will initiate the login process for the given network, with or without UI handled by SDK. If you prefer to handle login UI or using provider specific SDK to obtain access token, pass required params (acces token, access token secret, open ID) according to each provider. Other than <b> kiiConnectorQQ</b>, Kii SDK can handle the UI by passing nil into the options. If the social network user has already linked with a <KiiUser>,
 that user will be used as signed user. Otherwise, KiiCloud creates a new user and link with the specified social network account.
 The provider should be valid <KiiConnectorProvider> values. Otherwise, an exception will be raised. <br>
 Snippet for Login with social network without UI:<br>

 UINavigationController* nc = [KiiSocialConnect logInNavigationController:kiiConnectorFacebook
                                                                    block:^(KiiUser *user, KiiConnectorProvider provider, NSError *error) {
     if (error == nil) {
         // link successful. Do someting with the user.
     } else {
         // something went wrong.
     }
 }];
 [{instance of top view controoler} presentViewController:nc animated:YES completion:nil];

 @param provider One of the supported <KiiConnectorProvider> values.
 @param block To be called upon login completion.
 @exception NSInvalidArgumentException will be thrown if block is nil.
 @exception NSInvalidArgumentException will be thrown if KiiSocialNetworkName is passed as provider.
 @warning Dropbox, Box, Yahoo, LinkedIn, Microsoft Live, Sina Weibo can only use login with UI.
 @return navigation controller for login, no return nil. Please present this controller yourself.
 */
+ (UINavigationController*) logInNavigationController:(KiiConnectorProvider)provider block:(KiiSCNBlock) block;

/** Link the currently logged in user with supported social networks (Facebook, Twitter, Renren, Google and QQ).

 The provider should be valid <KiiConnectorProvider> values. Otherwise, an exception will be raised. <br>
 Snippet for link with social network:<br>

    [KiiSocialConnect linkCurrentUser:kiiConnectorFacebook
                              options:@{@"accessToken":@"access_token"}
                                block:^(KiiUser *user, KiiConnectorProvider provider, NSError *error) {
        if (error == nil) {
            // link successful. Do someting with the user.
        } else {
            // something went wrong.
        }
    }];

 Following parameters can be assigned to NSDictionary's key.<br><br>
 ### Facebook, Renren, GooglePlus
 <table>
 <thead>
 <tr>
 <th>Key</th>
 <th>Value type</th>
 <th>Value</th>
 <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>accessToken</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 </tbody>
 </table>

 ### Twitter
 <table>
 <thead>
 <tr>
 <th>Key</th>
 <th>Value type</th>
 <th>Value</th>
 <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>accessToken</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 <tr>
 <td>accessTokenSecret</td>
 <td>String</td>
 <td>Required to generate signature when you call social network API.</td>
 <td></td>
 </tr>
 </tbody>
 </table>

 ### QQ
 <table>
 <thead>
 <tr>
 <th>Key</th>
 <th>Value type</th>
 <th>Value</th>
 <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>accessToken</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 <tr>
 <td>openID</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 </tbody>
 </table>

 @param provider One of the supported <KiiConnectorProvider> values.
 @param options A dictionary of key/values to pass to KiiSocialConnect. This is mandatory, can not be nil.
 @param block To be called upon link completion. This is mandatory.
 @exception NSInvalidArgumentException will be thrown if options is not valid.
 @exception NSInvalidArgumentException will be thrown if block is nil.
 @exception NSInvalidArgumentException will be thrown if unsupported provider or KiiSocialNetworkName is passed as provider.
 @warning Dropbox, Box, Yahoo, LinkedIn, Microsoft Live, Sina Weibo is not supported, passing it will throw an exception.
 */
+ (void) linkCurrentUser:(KiiConnectorProvider)provider
                 options:(NSDictionary*)options
                   block:(KiiSCNBlock) block;

/** Unlink the currently logged in user from the social network.

 The provider should be valid <KiiConnectorProvider> values. Otherwise, an exception will be raised.

 Snippet for unlink current user with network. :<br>

    [KiiSocialConnect unLinkCurrentUser:kiiConnectorFacebook
                                  block:^(KiiUser *user, KiiConnectorProvider name, NSError *error) {
        if (error == nil) {
            // unlink successful.
        } else {
            // something went wrong.
        }
    }];
 @param provider One of the supported <KiiConnectorProvider> values.
 @param block To be called upon unlink completion. This is mandatory.
 @note This API access to server. Should not be executed in UI/Main thread.
 @exception NSInvalidArgumentException will be thrown if block is nil.
 @exception NSInvalidArgumentException will be thrown if unsupported provider or KiiSocialNetworkName is passed as provider.
 @warning Dropbox, Box, Yahoo, LinkedIn, Microsoft Live, Sina Weibo is not supported, passing it will throw an exception.
 */
+ (void) unLinkCurrentUser:(KiiConnectorProvider)provider
                     block:(KiiSCNBlock)block;

/** Retrieve the current user's access token from a social network

 The network must be set up and linked to the current user. It is recommended you save this to preferences for multi-session use.
 @param network One of the supported <KiiSocialNetworkName> values.
 @return An NSString representing the access token, nil if none available.
 @deprecated This method is deprecated. Use <[KiiSocialConnect accessTokenDictionary:]> instead.
 */
+ (nullable NSString*) getAccessTokenForNetwork:(KiiSocialNetworkName)network __attribute__((deprecated("Use <[accessTokenDictionary:]> instead.")));

/** Retrieve the current user's access token expiration date from a social network

 The network must be set up and linked to the current user. It is recommended you save this to preferences for multi-session use.
 @param network One of the supported <KiiSocialNetworkName> values.
 @return An NSDate representing the access token's expiration date, nil if none available.
 @deprecated This method is deprecated. Use <[KiiSocialConnect accessTokenDictionary:]> instead.
 */
+ (nullable NSDate*) getAccessTokenExpiresForNetwork:(KiiSocialNetworkName)network __attribute__((deprecated("Use <[accessTokenDictionary:]> instead.")));

/** Retrieve the current user's access token object by NSDictionary from a social network

 The network must be set up and linked to the current user. It is recommended you save this to preferences for multi-session use.
 Following parameters can be assigned to NSDictionary's key.<br><br>
 ### Facebook
 <table>
 <thead>
 <tr>
    <th>Key</th>
    <th>Value type</th>
    <th>Value</th>
    <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
    <td>access_token</td>
    <td>String</td>
    <td>Required for accessing social network API.</td>
    <td></td>
 </tr>
 <tr>
    <td>access_token_expires</td>
    <td>String</td>
    <td>Expiration date for this token</td>
    <td></td>
 </tr>
 </tbody>
 </table>

 ### Twitter
 <table>
 <thead>
 <tr>
    <th>Key</th>
    <th>Value type</th>
    <th>Value</th>
    <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
    <td>oauth_token</td>
    <td>String</td>
    <td>Required for accessing social network API.</td>
    <td></td>
 </tr>
 <tr>
    <td>oauth_token_secret</td>
    <td>String</td>
    <td>Required to generate signature when you call social network API.</td>
    <td></td>
 </tr>
 </tbody>
 </table>

 ### QQ
 <table>
 <thead>
 <tr>
 <th>Key</th>
 <th>Value type</th>
 <th>Value</th>
 <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
 <td>access_token</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 <tr>
 <td>openID</td>
 <td>String</td>
 <td>Required for accessing social network API.</td>
 <td></td>
 </tr>
 </tbody>
 </table>

 ### Kii Social Network Connect
 <table>
 <thead>
 <tr>
    <th>Key</th>
    <th>Value type</th>
    <th>Value</th>
    <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
    <td>oauth_token</td>
    <td>String</td>
    <td>Required for accessing social network API.</td>
    <td></td>
 </tr>
 <tr>
    <td>oauth_token_secret</td>
    <td>String</td>
    <td>Required to generate signature when you call social network API.</td>
    <td>Present in the bundle for Twitter, LinkedIn, and Yahoo.</td>
 </tr>
 <tr>
    <td>provider_user_id</td>
    <td>String</td>
    <td>User id provided by social network. ex.) 'xoauth_yahoo_guid' used by Yahoo profile API.</td>
    <td></td>
 </tr>
 <tr>
    <td>kii_new_user</td>
    <td>NSNumber(BOOL)</td>
    <td>Indicates if user was created during connection.</td>
    <td></td>
 </tr>
 <tr>
     <td>id_token</td>
     <td>NSString</td>
     <td>ID token provided by OpenID Provider. This field is provided
     when <kiiConnectorOpenIDConnectSimple> is used.</td>
     <td>Present in OpenID Connect</td>
 </tr>
 <tr>
     <td>refresh_token</td>
     <td>NSString</td>
     <td>Refresh token provided by OpenID Provider. This field is
     provided when <kiiConnectorOpenIDConnectSimple> is used and
     configured OpenID Provider supports refresh token.</td>
     <td>Present in OpenID Connect</td>
 </tr>
 </tbody>
 </table>

 @param network One of the supported <KiiSocialNetworkName> values.
 @return An NSDictionary representing the access token's object.
 @deprecated This method is deprecated. Use <[KiiSocialConnect accessTokenDictionary:]> instead.
 */
+ (nullable NSDictionary *)getAccessTokenDictionaryForNetwork:(KiiSocialNetworkName)network __attribute__((deprecated("Use <[KiiSocialConnect accessTokenDictionary:]> instead.")));

/** Retrieve the current user's social network access token object as NSDictionary.
 If the user is not associated with the specified provider, returns nil.
 The dictionary would be cached after the login and link has been executed.
 Cache would be cleared when new login, link or unlink has been executed.
 (Regardless of same/different KiiConnectorProvider is specified)

 Please keep the returned value in your application program before execute new login/
 link session when you sequencially link the several social network providers
 with the same user if you need to use them.
 Following parameters can be assigned to NSDictionary's key.<br><br>
 <table>
 <thead>
 <tr>
    <th>Key</th>
    <th>Value type</th>
    <th>Value</th>
    <th>Note</th>
 </tr>
 </thead>
 <tbody>
 <tr>
    <td>oauth_token</td>
    <td>String</td>
    <td>Required for accessing social network API.</td>
    <td></td>
 </tr>
 <tr>
    <td>oauth_token_secret</td>
    <td>String</td>
    <td>Required to generate signature when you call social network API.</td>
    <td>Present in the bundle for Twitter.</td>
 </tr>
 <tr>
    <td>provider_user_id</td>
    <td>String</td>
    <td>User id provided by social network. ex.) 'xoauth_yahoo_guid' used by Yahoo profile API.</td>
    <td></td>
 </tr>
 <tr>
    <td>kii_new_user</td>
    <td>NSNumber(BOOL)</td>
    <td>Indicates if user was created during connection.</td>
    <td></td>
 </tr>
 <tr>
     <td>openID</td>
     <td>NSString</td>
     <td>OpenId identifier</td>
     <td>Present in QQ</td>
 </tr>
 <tr>
     <td>oauth_token_expires</td>
     <td>NSDate</td>
     <td>Oauth expirations date</td>
     <td>Present only if logged in using UI and selected providers (Facebook, Google, Box, Renren, Sina Weibo, and Microsoft Live)</td>
 </tr>
 <tr>
     <td>id_token</td>
     <td>NSString</td>
     <td>ID token provided by OpenID Provider. This field is provided
     when <kiiConnectorOpenIDConnectSimple> is used.</td>
     <td>Present in OpenID Connect</td>
 </tr>
 <tr>
     <td>refresh_token</td>
     <td>NSString</td>
     <td>Refresh token provided by OpenID Provider. This field is
     provided when <kiiConnectorOpenIDConnectSimple> is used and
     configured OpenID Provider supports refresh token.</td>
     <td>Present in OpenID Connect</td>
 </tr>
 </tbody>
 </table>

 @param provider One of the supported <KiiConnectorProvider> values.
 @return An NSDictionary representing the access token's object.
 @exception NSInvalidArgumentException will be thrown if KiiSocialNetworkName is passed as provider.
 */
+ (nullable NSDictionary*)accessTokenDictionary:(KiiConnectorProvider)provider;
NS_ASSUME_NONNULL_END
@end
