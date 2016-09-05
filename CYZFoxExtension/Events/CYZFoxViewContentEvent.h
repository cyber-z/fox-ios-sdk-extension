//
//  CYZFoxViewContentEvent.h
//  CYZFoxExtension
//
//  Created by Wuwei on 2016/08/02.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import "CYZFoxExtensionBaseEvent.h"

@interface CYZFoxViewContentEvent : CYZFoxExtensionBaseEvent
<
CYZFoxFacebookEventDelegate,
CYZFoxTwitterEventDelegate,
CYZFoxCriteoEventDelegate,
CYZFoxVizuryEventDelegate,
CYZFoxDynamicRemarketingEventDelegate,
CYZFoxDynalystCommerceEventDelegate
>

/** @name Instance Method */

/**
 * Create event with default eventName and no ltvId.
 */
-(nullable instancetype) init;

/**
 * Create event with default eventName and specified ltvId.
 * @param ltvId         LTV identifier given by CYZFox
 */
-(nullable instancetype) initWithLtvId:(NSUInteger) ltvId;



@end
