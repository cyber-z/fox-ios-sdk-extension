//
//  CYZFoxSearchEvent.h
//  CYZFoxExtension
//
//  Created by Wuwei on 2016/08/02.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import "CYZFoxExtensionBaseEvent.h"

@interface CYZFoxSearchEvent : CYZFoxExtensionBaseEvent
<
CYZFoxDynamicRemarketingEventDelegate
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
