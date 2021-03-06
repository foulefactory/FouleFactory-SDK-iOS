//
//  ProjectsController.h
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
#import "ProjectWriterServiceModel.h"

@interface ProjectsController : BaseController

/**
* Completion block definition for asynchronous call to Projects_CreateProject */
typedef void (^CompletedPostProjectsCreateProject)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Create new project
* @param    project    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) createProjectsCreateProjectAsyncWithProject:(ProjectWriterServiceModel*) project
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedPostProjectsCreateProject) onCompleted;

/**
* Completion block definition for asynchronous call to Projects_GetUserProjects */
typedef void (^CompletedGetProjectsGetUserProjects)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get All projects
*/
- (void) getProjectsGetUserProjectsWithCompletionBlock:(CompletedGetProjectsGetUserProjects) onCompleted;

/**
* Completion block definition for asynchronous call to Projects_GetProjectFiles */
typedef void (^CompletedGetProjectsGetProjectFiles)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get csv files by project id
* @param    mid    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) getProjectsGetProjectFilesAsyncWithId:(int) mid
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedGetProjectsGetProjectFiles) onCompleted;

/**
* Completion block definition for asynchronous call to Projects_GetProjectTaskLines */
typedef void (^CompletedGetProjectsGetProjectTaskLines)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get task lines by project id
* @param    mid    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) getProjectsGetProjectTaskLinesAsyncWithId:(int) mid
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedGetProjectsGetProjectTaskLines) onCompleted;

/**
* Completion block definition for asynchronous call to Projects_GetProjectTasks */
typedef void (^CompletedGetProjectsGetProjectTasks)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get tasks by project id
* @param    mid    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) getProjectsGetProjectTasksAsyncWithId:(int) mid
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedGetProjectsGetProjectTasks) onCompleted;

/**
* Completion block definition for asynchronous call to Projects_Get */
typedef void (^CompletedGetProjectsGet)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* Get project by id
* @param    mid    Required parameter: Example: 
* @param    acceptLanguage    Optional parameter: Example: fr
*/
- (void) getProjectsGetAsyncWithId:(int) mid
                acceptLanguage:(NSString*) acceptLanguage
                completionBlock:(CompletedGetProjectsGet) onCompleted;

@end