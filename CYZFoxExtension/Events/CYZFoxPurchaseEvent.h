//
//  CYZFoxPurchaseEvent.h
//  CYZFoxExtension
//
//  Created by Wuwei on 2016/07/22.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import "CYZFoxExtensionBaseEvent.h"
#import <StoreKit/StoreKit.h>

#define kReceiptValidTrue @"true"
#define kReceiptValidFalse @"false"

@interface CYZFoxPurchaseEvent : CYZFoxExtensionBaseEvent
<
CYZFoxFacebookEventDelegate,
CYZFoxTwitterEventDelegate,
CYZFoxCriteoEventDelegate,
CYZFoxVizuryEventDelegate,
CYZFoxDynamicRemarketingEventDelegate,
CYZFoxDynalystCommerceEventDelegate,
CYZFoxDynalystGamesEventDelegate,
CYZFoxChartBoostEventDelegate
>

/** @name Instance Method */

/**
 * Create event with default eventName, no ltvId and purchase detail.
 
 * @param transaction   StoreKit payment transaction
 * @param product       StoreKit product detail
 */
-(nullable instancetype) initWithTransaction:(SKPaymentTransaction* _Nonnull) transaction
                                     product:(SKProduct* _Nonnull) product;

/**
 * Create event with default eventName, specified ltvId and purchase detail.
 * @param ltvId         LTV identifier given by CYZFox
 * @param transaction   StoreKit payment transaction
 * @param product       StoreKit product detail
 */
-(nullable instancetype) initWithLtvId:(NSUInteger) ltvId
                           transaction:(SKPaymentTransaction* _Nonnull) transaction
                               product:(SKProduct* _Nonnull) product;

/**
 * Create event with default eventName, no ltvId and purchase detail.
 * @param itemName      Name of item
 * @param sku           SKU
 * @param price         Price
 * @param currency      Currency
 */
-(nullable instancetype) initWithItemName:(nullable NSString*) itemName
                                      sku:(nonnull NSString*) sku
                                    price:(double) price
                                 quantity:(NSUInteger) quantity
                                 currency:(nullable NSString*) currency;

/**
 * Create event with default eventName, specified ltvId and purchase detail.
 * @param ltvId         LTV identifier given by CYZFox
 * @param itemName      Name of item
 * @param sku           SKU
 * @param price         Price
 * @param currency      Currency
 */
-(nullable instancetype) initWithLtvId:(NSUInteger) ltvId
                              itemName:(nullable NSString*) itemName
                                   sku:(nonnull NSString*) sku
                                 price:(double) price
                              quantity:(NSUInteger) quantity
                              currency:(nullable NSString*) currency;

@end
