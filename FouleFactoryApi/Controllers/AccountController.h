//
//  AccountController.h
//  FouleFactoryApi
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 09/14/2016
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"
#import "NSDate+extension.h"
#import "PayinServiceModel.h"
#import "AccountWriterServiceModel.h"

@interface AccountController : BaseController

/**
* Completion block definition for asynchronous call to Account_ValidateTransaction */
typedef void (^CompletedGetAccountValidateTransaction)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* TODO: type endpoint description here
* @param    transactionId    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) getAccountValidateTransactionAsyncWithTransactionId:(NSString*) transactionId
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedGetAccountValidateTransaction) onCompleted;

/**
* Completion block definition for asynchronous call to Account_PayIn */
typedef void (^CompletedPostAccountPayIn)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Payin
* @param    model    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) createAccountPayInAsyncWithModel:(PayinServiceModel*) model
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedPostAccountPayIn) onCompleted;

/**
* Completion block definition for asynchronous call to Account_GetWallet */
typedef void (^CompletedGetAccountGetWallet)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get wallet
*/
- (void) getAccountGetWalletWithCompletionBlock:(CompletedGetAccountGetWallet) onCompleted;

/**
* Completion block definition for asynchronous call to Account_CreateAccount */
typedef void (^CompletedPostAccountCreateAccount)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Create new account
* @param    acc    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) createAccountCreateAccountAsyncWithAcc:(AccountWriterServiceModel*) acc
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedPostAccountCreateAccount) onCompleted;

/**
* Completion block definition for asynchronous call to Account_Get */
typedef void (^CompletedGetAccountGet)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get my account
*/
- (void) getAccountGetWithCompletionBlock:(CompletedGetAccountGet) onCompleted;

@end