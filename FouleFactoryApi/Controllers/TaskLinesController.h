//
//  TaskLinesController.h
//  FouleFactoryApi
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 09/16/2016
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"
#import "NSDate+extension.h"
#import "TaskLinesWriterServiceModel.h"

@interface TaskLinesController : BaseController

/**
* Completion block definition for asynchronous call to TaskLines_CreateTaskLine */
typedef void (^CompletedPostTaskLinesCreateTaskLine)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Create new task line
* @param    taskLine    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) createTaskLinesCreateTaskLineAsyncWithTaskLine:(TaskLinesWriterServiceModel*) taskLine
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedPostTaskLinesCreateTaskLine) onCompleted;

/**
* Completion block definition for asynchronous call to TaskLines_GetTasksByLine */
typedef void (^CompletedGetTaskLinesGetTasksByLine)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get tasks by task line id
* @param    mid    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) getTaskLinesGetTasksByLineAsyncWithId:(int) mid
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedGetTaskLinesGetTasksByLine) onCompleted;

/**
* Completion block definition for asynchronous call to TaskLines_Get */
typedef void (^CompletedGetTaskLinesGet)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get task line by id
* @param    mid    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) getTaskLinesGetAsyncWithId:(int) mid
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedGetTaskLinesGet) onCompleted;

@end