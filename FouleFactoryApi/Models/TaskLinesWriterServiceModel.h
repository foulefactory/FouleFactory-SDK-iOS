//
//  TaskLinesWriterServiceModel.h
//  FouleFactoryApi
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 09/14/2016
//
#ifndef APIMATIC_TASKLINESWRITERSERVICEMODEL
#define APIMATIC_TASKLINESWRITERSERVICEMODEL

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol TaskLinesWriterServiceModel
@end

@interface TaskLinesWriterServiceModel : JSONModel

/**
* TODO: Write general description for this field
*/
@property int idProject;

/**
* TODO: Write general description for this field
*/
@property NSArray* taskColumns;


/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap;

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper;

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName;

@end
#endif