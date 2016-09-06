//
//  CooperationProtocols.h
//  CYZFoxtension
//
//  Created by Wuwei on 2016/08/04.
//  Copyright © 2016年 CyberZ. All rights reserved.
//
#pragma mark - Facebook
/**
 * Protocol for Facebook event
 */
@protocol CYZFoxFacebookEventDelegate<NSObject>

@optional
/**
 * set item identifier
 * @param itemId Identifier of the item
 */
-(void) setItemId:(nonnull NSString*) itemId;

@end



#pragma mark - Twitter
/**
 * Protocol for Twitter event
 */
@protocol CYZFoxTwitterEventDelegate<NSObject>

@optional

/**
 * set item identifier
 * @param itemId Identifier of the item
 */
-(void) setItemId:(nonnull NSString*) itemId;

@end



#pragma mark - Criteo
/**
 * Protocol for Criteo event
 */
@protocol CYZFoxCriteoEventDelegate<NSObject>

@optional
/**
 * set destination
 * @param destination Destination location for trip
 */
-(void) setDestination:(nonnull NSString*) destination;

/**
 * set origin
 * @param origin Origin location for trip
 */
-(void) setOrigin:(nonnull NSString*) origin;

/**
 * set data for event start
 * @param din Date in
 */
-(void) setDin:(nonnull NSDate*) din;

/**
 * set data for event end
 * @param dout Date out
 */
-(void) setDout:(nonnull NSDate*) dout;

/**
 * set partner identifier
 * @param partnerId Identifier of Criteo partner from Criteo
 */
-(void) setPartnerId:(nonnull NSString*) partnerId;

/**
 * set category identifier
 * @param categoryId Identifier of category
 */
-(void) setCategoryId:(nonnull NSString*) categoryId;

/**
 * set transaction id
 * @param transacationId Identifier of transaction
 */
-(void) setTransactionId:(nonnull NSString*) transactionId;

/**
 * add a product with details for purchase event
 * @param productId Identifier of product
 * @param itemLocationId Unused for Criteo
 * @param price Price
 * @param quantity Quantity
 */
-(void) addProductById:(nonnull NSString*) productId
        itemLocationId:(nullable NSString*) itemLocationId
                 price:(double) price
              quantity:(NSUInteger) quantity;

/**
 * set arbitrary datafeed
 * @param datafeed Arbitrary datafeed
 */
-(void) setDatafeed:(NSDictionary* _Nonnull) datafeed;

@end



#pragma mark - Vizury
/**
 * Protocol for Criteo event
 */
@protocol CYZFoxVizuryEventDelegate<NSObject>

@optional

/**
 * set category identifier
 * @param categoryId Identifier of category
 */
-(void) setCategoryId:(nonnull NSString*) categoryId;

/**
 * add a product with details for purchase event
 * @param productId Identifier of product
 * @param itemLocationId Unused for vizury
 * @param price Unused for vizury
 * @param quantity Unused for vizury
 */
-(void) addProductById:(nonnull NSString*) productId
        itemLocationId:(nullable NSString*) itemLocationId
                 price:(double) price
              quantity:(NSUInteger) quantity;

@end



#pragma mark - DynamicRemarketing
/**
 * Protocol for DynamicRemarketing event
 */
@protocol CYZFoxDynamicRemarketingEventDelegate<NSObject>

@optional

/**
 * set destination
 * @param destination Destination location for trip
 */
-(void) setDestination:(nonnull NSString*) destination;

/**
 * set origin
 * @param origin Origin location for trip
 */
-(void) setOrigin:(nonnull NSString*) origin;

/**
 * set data for event start
 * @param din Date in
 */
-(void) setDin:(nonnull NSDate*) din;

/**
 * set data for event end
 * @param dout Date out
 */
-(void) setDout:(nonnull NSDate*) dout;

/**
 * add a product with details for purchase event
 * @param productId Identifier of product
 * @param itemLocationId Identifier of location
 * @param price Unused for DynamicRemarketing
 * @param quantity Unused for DynamicRemarketing
 */
-(void) addProductById:(nonnull NSString*) productId
        itemLocationId:(nullable NSString*) itemLocationId
                 price:(double) price
              quantity:(NSUInteger) quantity;

/**
 * set search term
 * @param searchTerm Term which searching for
 */
-(void) setSearchTerm:(nonnull NSString*) searchTerm;

/**
 * set google crm id for all events
 * @param crmId Google crm id
 */
+(void) setGoogleCrmId:(nonnull NSString*) crmId;

@end



#pragma mark - DynalystGames
/**
 * Protocol for DynalystGames event
 */
@protocol CYZFoxDynalystGamesEventDelegate<NSObject>

@optional

/**
 * set advertiser id for Dynalyst
 * @param advertiserId Identifier of advertiser for Dynalyst
 */
-(void) setDynalystAdvertiserId:(nonnull NSString*) advertiserId;

/**
 * set guid of Dynalyst for all events
 * @param guid Guid from DynalystGames
 */
+(void) setDynalystGuid:(nonnull NSString*) guid;

/**
 * set adnt of Dynalyst for all events
 * @param adnt Adnt from DynalystGames
 */
+(void) setDynalystAdnt:(nonnull NSString*) adnt;

/**
 * set extension information for all events
 * @param extJson Extension information in JSON type
 */
+(void) setDynalystExt:(NSDictionary* _Nonnull) extJson;

@end



#pragma mark - DynalystCommerce
/**
 * Protocol for DynalystCommerce event
 */
@protocol CYZFoxDynalystCommerceEventDelegate<NSObject>

@optional

/**
 * set transaction id
 * @param transacationId Identifier of transaction
 */
-(void) setTransactionId:(nonnull NSString*) transactionId;

/**
 * add a product with details for purchase event
 * @param productId Identifier of product
 * @param itemLocationId Unused for DynalystCommerce
 * @param price Price
 * @param quantity Quantity
 */
-(void) addProductById:(nonnull NSString*) productId
        itemLocationId:(nullable NSString*) itemLocationId
                 price:(double) price
              quantity:(NSUInteger) quantity;
@end



#pragma mark - ChartBoost
/**
 * Protocol for ChartBoost event
 */
@protocol CYZFoxChartBoostEventDelegate<NSObject>

@optional
/**
 * set localized title of purchased item
 * @param localizedTitle Title in localized language
 */
-(void) setLocalizedTitle:(nonnull NSString*) localizedTitle;

/**
 * set localized description of purchased item
 * @param localizedDescription Description in localized language
 */
-(void) setLocalizedDescription:(nonnull NSString*) localizedDescription;

/**
 * set whether recipt is valid
 * @param isValid True for valid
 */
-(void) setReciptValid:(BOOL) isValid;

/**
 * set recipt data of puchased item
 * @param receipt recipt data
 */
-(void) setRecipt:(nonnull NSString*) receipt;


/**
 * add detail for tracking event
 * @param eventLabel Label for event
 * @param eventField Field for event
 * @param mainLevel Main level
 * @param subLevel Sub level
 * @param description Description
 * @param dateType Type of date
 */
-(void) addTrackInfoByEventLabel:(nonnull NSString*) eventLabel
                      eventField:(double) eventField
                       mainLevel:(double) mainLevel
                        subLevel:(double) subLevel
                     description:(nullable NSString*) description
                        dateType:(nonnull NSString*) dateType;

@end
