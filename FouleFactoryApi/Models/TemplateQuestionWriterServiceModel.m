//
//  TemplateQuestionWriterServiceModel.m
//  FouleFactoryApi
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 09/14/2016
//
#import "TemplateQuestionWriterServiceModel.h"

@implementation TemplateQuestionWriterServiceModel

/**
* TODO: Write general description for this method
*/
@synthesize title;

/**
* TODO: Write general description for this method
*/
@synthesize require;

/**
* TODO: Write general description for this method
*/
@synthesize idTemplateObjectQuestionType;

/**
* TODO: Write general description for this method
*/
@synthesize order;

/**
* TODO: Write general description for this method
*/
@synthesize option;

/**
* TODO: Write general description for this method
*/
@synthesize choices;



/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap
{
    NSMutableDictionary* map = [[NSMutableDictionary alloc] init];
    [map addEntriesFromDictionary: @{
        @"Title": @"title",
        @"Require": @"require",
        @"IdTemplateObjectQuestionType": @"idTemplateObjectQuestionType",
        @"Order": @"order",
        @"Option": @"option",
        @"Choices": @"choices"  
    }];

    return map;
}

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper
{ 
  return [[JSONKeyMapper alloc] initWithDictionary: [self keyMap]];
}

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName
{
    return YES;
}

@end