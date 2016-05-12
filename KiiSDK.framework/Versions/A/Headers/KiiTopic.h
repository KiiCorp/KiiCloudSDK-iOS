//
//  KiiTopic.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/24/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KiiPushSubscription.h"
#import "KiiListResult.h"

@class  KiiUser, KiiBucket, KiiGroup, KiiACL,KiiTopic,KiiPushMessage;
typedef void (^KiiTopicBlock)(KiiTopic *_Nonnull topic, NSError *_Nullable error);

typedef void (^KiiTopicExistenceBlock)(KiiTopic *_Nonnull topic,BOOL isExists, NSError *_Nullable error);

/** Topic on Kii push notification service
 */
@interface KiiTopic : NSObject<KiiSubscribable>

NS_ASSUME_NONNULL_BEGIN
/** Get the ACL handle for this topic. Any <KiiACLEntry> objects added or revoked from this ACL object will be appended to/removed from the server on ACL save. */
@property (readonly) KiiACL *topicACL;

/** Name of the topic */
@property (nonatomic, readonly) NSString* name;

/** Asynchronously saves the topic to the server
 
 If the topic does not yet exist, it will be created. If the topic already exists, an error (code 704) will be returned. This is a non-blocking method.
 
     [obj saveWithBlock:^(KiiTopic *topic, NSError *error) {
         if (error == nil) {
            NSLog(@"topic saved: %@", topic);
         }
     }];
 
 @param block The block to be called upon method completion. See example
 */
- (void) saveWithBlock:(KiiTopicBlock)block;


/** Asynchronously saves the latest topic values to the server
 
 If the topic does not yet exist, it will be created. If the topic already exists, an error (code 704) will be returned. This is a non-blocking method.
 @param delegate The topic to make any callback requests to
 @param callback The callback method to be called when the request is completed. The callback method should have a signature similar to:
 
    - (void) topicSaved:(KiiTopic*)topic withError:(NSError*)error {
        // check whether the request was successful
        if (error == nil) {
            // do something with the topic
        } else {
            // there was a problem
        }
    }

 */
- (void) save:(id)delegate withCallback:(SEL)callback;


/** Synchronously saves the latest topic values to the server

 If the topic does not yet exist, it will be created. If the topic already exists, an error (code 704) will be returned. This is a blocking method.
 @param error An NSError topic, set to nil, to test for errors
 @return YES if succeeded, NO otherwise.
 */
- (BOOL) saveSynchronous:(NSError*_Nullable*_Nullable)error;


/** Asynchronously deletes the topic to the server
 
If the topic does not exist, an error (code 705) will be returned.  This is a non-blocking method.
 
    [obj deleteWithBlock:^(KiiTopic *topic, NSError *error) {
        if(error == nil) {
            NSLog(@"topic saved: %@", topic);
        }
    }];
 
 @param block The block to be called upon method completion. See example
 */
-(void) deleteWithBlock:(KiiTopicBlock) block;

/** Asynchronously deletes the latest topic values to the server
 
 If the topic does not exist, an error (code 705) will be returned. This is a non-blocking method.
 @param delegate The topic to make any callback requests to
 @param callback The callback method to be called when the request is completed. The callback method should have a signature similar to:
 
     - (void) topicDeleted:(KiiTopic*)topic withError:(NSError*)error {
         // check whether the request was successful
         if(error == nil) {
             // do something with the topic
         } else {
             // there was a problem
         }
     }
 
 */
-(void) delete:(id) delegate withCallback:(SEL) callback;


/** Synchronously deletes the latest topic values to the server
 
 If the topic does not exist, the there will be an error. This is a blocking method.
 @param error An NSError topic, set to nil, to test for errors
 @return YES if succeeded, NO otherwise.
 */
-(BOOL) deleteSynchronous:(NSError*_Nullable*_Nullable) error;



/** Asynchronously send Kii explicit push notification to topic.

 This is a non-blocking method.
 If the topic does not exist, an error (code 705) will be returned.  
 If message has gcmFields defined, the data and specific data will be validated for GCM reserved keys, an error (code 712) will be returned if it contains any GCM reserved keys.

    [obj sendMessage:message withBlock:^(KiiTopic *topic, NSError *error) {
        if(error == nil) {
            NSLog(@"message sent: %@", topic);
        }
    }];

 @param message The message data of <KiiPushMessage> to send push notification.
 @param block The block to be called upon method completion. See example
 */
-(void) sendMessage:(KiiPushMessage*) message withBlock:(KiiTopicBlock) block;

/** Asynchronously send Kii explicit push notification to topic

 This is a non-blocking method.
 If the topic does not exist, an error (code 705) will be returned. 
 If message has gcmFields defined, the data and specific data will be validated for GCM reserved keys, an error (code 712) will be returned if it contains any GCM reserved keys.
 @param message The message data of <KiiPushMessage> to send push notification.
 @param delegate The topic to make any callback requests to
 @param callback The callback method to be called when the request is completed. The callback method should have a signature similar to:
 
    - (void) messageSent:(KiiTopic*)topic withError:(NSError*)error {
        // check whether the request was successful
        if(error == nil) {
            // do something with the topic
        } else {
            // there was a problem
        }
    }
 
 */
-(void) sendMessage:(KiiPushMessage*) message withDelegate:(id) delegate andCallback:(SEL) callback;


/** Synchronously send Kii explicit push notification to topic.

 This is a blocking method.
 If the topic does not exist, an error (code 705) will be returned. 
 If message has gcmFields defined, the data and specific data will be validated for GCM reserved keys, an error (code 712) will be returned if it contains any GCM reserved keys.
 @param message The message data of <KiiPushMessage> to send push notification.
 @param error An NSError topic, set to nil, to test for errors
 @return YES if succeeded, NO otherwise.
 */
-(BOOL) sendMessageSynchronous:(KiiPushMessage*) message withError:(NSError*_Nullable*_Nullable) error;
/**Checks whether the topic already exists or not. This is blocking method.

@param error used to return an error by reference (pass NULL if this is not desired). It is recommended to set an actual error object to get the error information.
@return YES if the topic is exist, NO otherwise.
*/
-(BOOL) checkIfExistsSynchronous:(NSError*_Nullable*_Nullable) error;

/** Asynchronously checks whether the topic already exists or not.

 This is a non-blocking method.
 If the topic does not exist, no error will be returned.

    [obj checkIfExists:^(KiiTopic *topic, BOOL isExists, NSError *error) {
        if(error == nil) {
            if(isExists) {
                NSLog(@"Topic exists");
            }
        }else {
            // handle error here
        }
    }];

 @param completion The block to be called upon method completion, this is mandatory. See example.
 @exception NSInvalidArgumentException if completion is nil.
 */
-(void) checkIfExists:(KiiTopicExistenceBlock) completion;
NS_ASSUME_NONNULL_END
@end
