//
//  CYZFoxTutorialEvent.m
//  CYZFoxExtension
//
//  Created by Wuwei on 2016/07/22.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import "CYZFoxTutorialEvent.h"

@implementation CYZFoxTutorialEvent

-(instancetype) init {
    return [self initWithLtvId:0];
}

-(instancetype) initWithLtvId:(NSUInteger) ltvId {
    return [super initWithEventName:@"_tutorial_comp" ltvId:ltvId];
}

@end
