//
//  CYZFoxViewToppageEvent.m
//  CYZFoxExtension
//
//  Created by Wuwei on 2016/08/02.
//  Copyright © 2016年 CyberZ. All rights reserved.
//

#import "CYZFoxViewToppageEvent.h"

@implementation CYZFoxViewToppageEvent

-(instancetype) init {
    return [self initWithLtvId:0];
}

-(instancetype) initWithLtvId:(NSUInteger) ltvId {
    self = [super initWithEventName:@"_view_toppage" ltvId:ltvId];
    if (self) {
        if (ltvId > 0) {
            [self putJsonValue:@(ltvId) forKey:@"fox_cvpoint"];
        }
    }

    return self;
}

@end
