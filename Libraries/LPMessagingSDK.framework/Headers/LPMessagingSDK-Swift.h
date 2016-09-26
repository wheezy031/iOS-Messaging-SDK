// Generated by Apple Swift version 3.0 (swiftlang-800.0.46.2 clang-800.0.38)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import Foundation;
@import LPInfra;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@protocol UIAdapterDelegate;

SWIFT_PROTOCOL("_TtP14LPMessagingSDK39ConversationViewControllerAgentDelegate_")
@protocol ConversationViewControllerAgentDelegate
@optional
- (void)agentDidChangeUserInputText:(NSString * _Nonnull)text;
- (void)setUIAdapterDelegate:(id <UIAdapterDelegate> _Nonnull)delegate;
@end

@protocol ConversationParamProtocol;
@class UIViewController;
@class UIBarButtonItem;
@class LPUser;
@protocol LPMessagingSDKNotificationDelegate;
@class UIImage;
@class LPLog;
@protocol LPMessagingSDKdelegate;

SWIFT_CLASS("_TtC14LPMessagingSDK14LPMessagingSDK")
@interface LPMessagingSDK : NSObject <UINavigationControllerDelegate>
@property (nonatomic, weak) id <LPMessagingSDKdelegate> _Nullable delegate;
@property (nonatomic, weak) id <LPMessagingSDKNotificationDelegate> _Nullable notificationDelegate;
@property (nonatomic, copy) NSString * _Nullable accountID;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) LPMessagingSDK * _Nonnull instance;)
+ (LPMessagingSDK * _Nonnull)instance;
/**
  Initialize the SDK and all of its components.
  Optional paramaters:
  <brandID> of the host app.
  This method throws an error/return false with with an error, in case the initialization failed.
*/
- (BOOL)initialize:(NSString * _Nullable)brandID error:(NSError * _Nullable * _Nullable)error SWIFT_METHOD_FAMILY(none);
/**
  Show conversation view for conversation query.
  This method starts the conversation and show all the existing messages it exist.
  Optional paramaters:
  <authenticationCode> to use an an authenticated users.
  <containerViewController> the containter which presents the conversation view as a child View Controller.
*/
- (void)showConversation:(id <ConversationParamProtocol> _Nonnull)conversationQuery authenticationCode:(NSString * _Nullable)authenticationCode containerViewController:(UIViewController * _Nullable)containerViewController;
/**
  Remove conversation view for conversation query from its container or window view.
  This method ends the conversation’s connection.
*/
- (void)removeConversation:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/**
  This method reconnects the conversation’s connection for conversation query.
  Reconnect open related webSockets and sync the converstion with its latest updates.
  Additional paramaters:
  <authenticationCode> to use an an authenticated users.
*/
- (void)reconnect:(id <ConversationParamProtocol> _Nonnull)conversationQuery authenticationCode:(NSString * _Nonnull)authenticationCode;
/**
  This method changes the state of the action menu of the conversation for brandID.
*/
- (void)toggleChatActions:(NSString * _Nonnull)accountID sender:(UIBarButtonItem * _Nullable)sender;
/**
  This method sets user details for the consumer of a brand.
  The user object is in Type of LPUser which includes all the user details.
  Additional paramaters:
  <brandID> is the brand of the related user.
  If the SDK is not connected, it’ll save the last user for each brand, until connected.
*/
- (void)setUserProfile:(LPUser * _Nonnull)lpuser brandID:(NSString * _Nonnull)brandID;
/**
  This method passes a user info of a remote push notification to be handled by the SDK.
*/
- (void)handlePush:(NSDictionary * _Nonnull)userInfo;
/**
  This method registers the host app in the SDK Pusher service in order to be able to receive push notification in messaging.
  Optional paramaters:
  <notificationDelegate> is the implementer of LPMessagingSDKNotificationDelegate.
  <alternateBundleID> is a value for using in order to let the Pusher service to identify the host app with this bundle identifier.
*/
- (void)registerPushNotificationsWithToken:(NSData * _Nonnull)token notificationDelegate:(id <LPMessagingSDKNotificationDelegate> _Nullable)notificationDelegate alternateBundleID:(NSString * _Nullable)alternateBundleID;
/**
  This method created ConversationParamProtocol of Brand query type.
*/
- (id <ConversationParamProtocol> _Nonnull)getConversationBrandQuery:(NSString * _Nonnull)brandID;
/**
  This method created ConversationParamProtocol of Brand and Skill query type.
*/
- (id <ConversationParamProtocol> _Nonnull)getConversationBrandAndSkillQuery:(NSString * _Nonnull)brandID skillID:(NSString * _Nonnull)skillID;
/**
  This method created ConversationParamProtocol of Consumer and Skill query type.
*/
- (id <ConversationParamProtocol> _Nonnull)getConversationConsumerQuery:(NSString * _Nullable)consumerID brandID:(NSString * _Nonnull)brandID agentToken:(NSString * _Nonnull)agentToken;
/**
  This method checks for an active(Open/Created) conversation according to conversation query.
  Return value:
  True - there is an active conversation.
  False - there is no active conversation.
*/
- (BOOL)checkActiveConversation:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/**
  DEPRECATED - This method sets a custom image for the custom button in the conversation navigationBar.
  Use customButtonImage instead
*/
- (void)setCustomButton:(UIImage * _Nullable)image;
/**
  This method checks if the active conversation of a conversation query marked as Urgent.
  Return value:
  True - conversation is marked as Urgent.
  False - conversation is not marked as Urgent.
*/
- (BOOL)isUrgent:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/**
  This method marks the active conversation of a conversation query as Urgent.
*/
- (void)markAsUrgent:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/**
  This method dismisses the active conversation from Urgent to Normal.
*/
- (void)dismissUrgent:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/**
  This method ends the active conversation if exists.
*/
- (void)resolveConversation:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/**
  This methods returns the assigned agent of the active or the latest closed conversation, if exists.
*/
- (LPUser * _Nullable)getAssignedAgent:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
/**
  This method determines wether a brandID is Ready.
  Ready means that the brand is connected and conversation can be proccessed.
*/
- (BOOL)isBrandReady:(NSString * _Nonnull)brandID;
/**
  This method returns the SDK version.
*/
- (NSString * _Nullable)getSDKVersion;
/**
  This method subscribes the host app to recieve log events from a specific log level and above.
  Optionl log levels: TRACE, DEBUG, INFO, WARNING and ERROR.
  The completion block will pass LPLog object which consists all the information for the log.
*/
- (void)subscribeLogEvents:(enum LogLevel)logLevel logEvent:(void (^ _Nonnull)(LPLog * _Nonnull))logEvent;
/**
  Prints all localized string’s keys
*/
- (void)printAllLocalizedKeys;
/**
  Prints the SDK supported languages
*/
- (void)printSupportedLanguages;
@end


@interface LPMessagingSDK (SWIFT_EXTENSION(LPMessagingSDK))
@end


@interface LPMessagingSDK (SWIFT_EXTENSION(LPMessagingSDK))
- (void)initSocketForBrandID:(NSString * _Nonnull)brandID agentToken:(NSString * _Nonnull)agentToken readyCompletion:(void (^ _Nullable)(void))readyCompletion SWIFT_METHOD_FAMILY(none);
- (id <ConversationViewControllerAgentDelegate> _Nonnull)showAgentConversation:(id <ConversationParamProtocol> _Nonnull)conversationQuery authenticationCode:(NSString * _Nullable)authenticationCode containerViewController:(UIViewController * _Nonnull)containerViewController;
@end


@interface LPMessagingSDK (SWIFT_EXTENSION(LPMessagingSDK))
- (void)logout;
- (void)destruct;
@end

@class LPNotification;
@class UIView;

SWIFT_PROTOCOL("_TtP14LPMessagingSDK34LPMessagingSDKNotificationDelegate_")
@protocol LPMessagingSDKNotificationDelegate
@optional
- (void)LPMessagingSDKNotificationWithDidReceivePushNotification:(LPNotification * _Nonnull)notification;
- (BOOL)LPMessagingSDKNotificationWithShouldShowPushNotification:(LPNotification * _Nonnull)notification;
- (UIView * _Nonnull)LPMessagingSDKNotificationWithCustomLocalPushNotificationView:(LPNotification * _Nonnull)notification;
- (void)LPMessagingSDKNotificationWithNotificationTapped:(LPNotification * _Nonnull)notification;
@end

@class NSError;

SWIFT_PROTOCOL("_TtP14LPMessagingSDK22LPMessagingSDKdelegate_")
@protocol LPMessagingSDKdelegate
@optional
- (void)LPMessagingSDKCustomButtonTapped;
- (void)LPMessagingSDKAgentDetails:(LPUser * _Nullable)agent;
- (void)LPMessagingSDKActionsMenuToggled:(BOOL)toggled;
- (void)LPMessagingSDKHasConnectionError:(NSString * _Nullable)error;
- (void)LPMessagingSDKCSATScoreSubmissionDidFinish:(NSString * _Nonnull)brandID rating:(NSInteger)rating;
- (UIView * _Nonnull)LPMessagingSDKCSATCustomTitleView:(NSString * _Nonnull)brandID;
@required
- (void)LPMessagingSDKObseleteVersion:(NSError * _Nonnull)error;
- (void)LPMessagingSDKAuthenticationFailed:(NSError * _Nonnull)error;
- (void)LPMessagingSDKTokenExpired:(NSString * _Nonnull)brandID;
- (void)LPMessagingSDKError:(NSError * _Nonnull)error;
@optional
- (void)LPMessagingSDKAgentIsTypingStateChanged:(BOOL)isTyping;
- (void)LPMessagingSDKConversationStarted:(NSString * _Nullable)conversationID;
- (void)LPMessagingSDKConversationEnded:(NSString * _Nullable)conversationID;
- (void)LPMessagingSDKConversationCSATDismissedOnSubmittion:(NSString * _Nullable)conversationID;
- (void)LPMessagingSDKConnectionStateChanged:(BOOL)isReady brandID:(NSString * _Nonnull)brandID;
- (void)LPMessagingSDKOffHoursStateChanged:(BOOL)isOffHours brandID:(NSString * _Nonnull)brandID;
- (void)LPMessagingSDKConversationViewControllerDidDismiss;
@end


SWIFT_CLASS("_TtC14LPMessagingSDK14LPNotification")
@interface LPNotification : NSObject
@property (nonatomic, copy) NSString * _Nonnull text;
@property (nonatomic, strong) LPUser * _Nonnull user;
@property (nonatomic, copy) NSString * _Nonnull accountID;
@property (nonatomic) BOOL isRemote;
@property (nonatomic, readonly, copy) NSString * _Nonnull toString;
- (nonnull instancetype)initWithText:(NSString * _Nonnull)text firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName uid:(NSString * _Nullable)uid accountID:(NSString * _Nonnull)accountID isRemote:(BOOL)isRemote;
- (nonnull instancetype)initWithMessage:(LPMessageEntity * _Nonnull)message isRemote:(BOOL)isRemote;
- (nonnull instancetype)initWithText:(NSString * _Nonnull)text user:(LPUser * _Nonnull)user accountID:(NSString * _Nonnull)accountID isRemote:(BOOL)isRemote OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class NSCoder;

SWIFT_CLASS("_TtC14LPMessagingSDK19LPRadialProgressBar")
@interface LPRadialProgressBar : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setProgressWithProgress:(CGFloat)progress;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC14LPMessagingSDK22RemoteUserIsTypingView")
@interface RemoteUserIsTypingView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class ConversationDataSource;
@class UITableViewCell;
@class UITextView;
@class UIColor;
@class UIGestureRecognizer;

SWIFT_PROTOCOL("_TtP14LPMessagingSDK17UIAdapterDelegate_")
@protocol UIAdapterDelegate
@optional
- (BOOL)sendClickedWithMessage:(NSString * _Nonnull)message inConversation:(LPConversationEntity * _Nonnull)inConversation;
- (UITableViewCell * _Nullable)cellForRowAtIndexPath:(UITableView * _Nonnull)tableView indexPath:(NSIndexPath * _Nonnull)indexPath dataSource:(ConversationDataSource * _Nonnull)dataSource;
- (void)executeActionAtIndex:(UIViewController * _Nonnull)viewController index:(NSInteger)index conversation:(LPConversationEntity * _Nullable)conversation complition:(void (^ _Nonnull)(void))complition;
- (void)textViewDidBeginEditingWithConversation:(LPConversationEntity * _Nullable)conversation;
- (void)textViewDidEndEditingWithConversation:(LPConversationEntity * _Nullable)conversation;
- (BOOL)textView:(UITextView * _Nonnull)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString * _Nonnull)text conversation:(LPConversationEntity * _Nullable)conversation;
- (BOOL)shouldSetUIReadOnly:(LPConversationEntity * _Nullable)conversation;
- (UIColor * _Nonnull)getTableViewBackgroundColor:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
- (UIImage * _Nonnull)getDefaultRecepientAvatarImage:(id <ConversationParamProtocol> _Nonnull)conversationQuery;
- (UIGestureRecognizer * _Nonnull)getTableViewCustomGestureRecognizer;
@end


@interface UIImageView (SWIFT_EXTENSION(LPMessagingSDK))
@end


@interface UITableView (SWIFT_EXTENSION(LPMessagingSDK))
@end


@interface UITableViewCell (SWIFT_EXTENSION(LPMessagingSDK))
@end


@interface UIView (SWIFT_EXTENSION(LPMessagingSDK))
- (void)shake;
@end


@interface UIView (SWIFT_EXTENSION(LPMessagingSDK))
@end

#pragma clang diagnostic pop
