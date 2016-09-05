//
//  CYZFoxLevelAchievedEvent.h.m
//  CYZFoxExtension
//
//  Created by Wuwei on 2016/07/22.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import "CYZFoxLevelAchievedEvent.h"

@implementation CYZFoxLevelAchievedEvent

-(instancetype) init {
    return [self initWithLtvId:0];
}

-(instancetype) initWithLtvId:(NSUInteger) ltvId {
    return [super initWithEventName:@"_achieved_level" ltvId:ltvId];
}

@end




