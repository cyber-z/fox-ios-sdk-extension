//
//  CYZFoxTutorialEvent.h
//  CYZFoxExtension
//
//  Created by Wuwei on 2016/07/22.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import "CYZFoxExtensionBaseEvent.h"

@interface CYZFoxTutorialEvent : CYZFoxExtensionBaseEvent
<
CYZFoxFacebookEventDelegate,
CYZFoxTwitterEventDelegate,
CYZFoxDynalystGamesEventDelegate
>

/** @name Instance Method */

/**
 * Create event with default eventName and no ltvId.
 */
-(nonnull instancetype) init;

/**
 * Create event with default eventName and specified ltvId.
 * @param ltvId         LTV identifier given by CYZFox
 */
-(nonnull instancetype) initWithLtvId:(NSUInteger) ltvId;

@end
