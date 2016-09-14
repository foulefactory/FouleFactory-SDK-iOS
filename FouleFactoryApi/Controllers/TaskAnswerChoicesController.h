//
//  TaskAnswerChoicesController.h
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

@interface TaskAnswerChoicesController : BaseController

/**
* Completion block definition for asynchronous call to TaskAnswerChoices_Get */
typedef void (^CompletedGetTaskAnswerChoicesGet)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get task answer choice by id
* @param    mid    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) getTaskAnswerChoicesGetAsyncWithId:(int) mid
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedGetTaskAnswerChoicesGet) onCompleted;

@end