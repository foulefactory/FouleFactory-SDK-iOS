//
//  AccountWriterServiceModel.m
//  FouleFactoryApi
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 09/16/2016
//
#import "AccountWriterServiceModel.h"

@implementation AccountWriterServiceModel

/**
* TODO: Write general description for this method
*/
@synthesize idGender;

/**
* TODO: Write general description for this method
*/
@synthesize firstName;

/**
* TODO: Write general description for this method
*/
@synthesize name;

/**
* TODO: Write general description for this method
*/
@synthesize email;

/**
* TODO: Write general description for this method
*/
@synthesize phone;

/**
* TODO: Write general description for this method
*/
@synthesize birthday;

/**
* TODO: Write general description for this method
*/
@synthesize address1;

/**
* TODO: Write general description for this method
*/
@synthesize city;

/**
* TODO: Write general description for this method
*/
@synthesize postalCode;

/**
* TODO: Write general description for this method
*/
@synthesize countryCode;

/**
* TODO: Write general description for this method
*/
@synthesize nationality;

/**
* TODO: Write general description for this method
*/
@synthesize optin;

/**
* TODO: Write general description for this method
*/
@synthesize company;

/**
* TODO: Write general description for this method
*/
@synthesize address2;

/**
* TODO: Write general description for this method
*/
@synthesize billAddress1;

/**
* TODO: Write general description for this method
*/
@synthesize billAddress2;

/**
* TODO: Write general description for this method
*/
@synthesize billCity;

/**
* TODO: Write general description for this method
*/
@synthesize billPostalCode;



/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap
{
    NSMutableDictionary* map = [[NSMutableDictionary alloc] init];
    [map addEntriesFromDictionary: @{
        @"IdGender": @"idGender",
        @"FirstName": @"firstName",
        @"Name": @"name",
        @"Email": @"email",
        @"Phone": @"phone",
        @"Birthday": @"birthday",
        @"Address1": @"address1",
        @"City": @"city",
        @"PostalCode": @"postalCode",
        @"CountryCode": @"countryCode",
        @"Nationality": @"nationality",
        @"Optin": @"optin",
        @"Company": @"company",
        @"Address2": @"address2",
        @"BillAddress1": @"billAddress1",
        @"BillAddress2": @"billAddress2",
        @"BillCity": @"billCity",
        @"BillPostalCode": @"billPostalCode"  
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