//
//  AbstractMoveLogic.m
//  shooter
//
//  Created by ryuji kamiyama on 12/07/22.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//

#import "AbstractMoveLogic.h"

@implementation AbstractMoveLogic

- (id)initWithStageRect:(CGRect)stageRect
{
    if (self = [super init]) {
        _stageRect = stageRect;
    }
    return self;
}

- (CGPoint)nextRect:(CGRect)currentRect
{
    [[NSException exceptionWithName:@"NotImplementedError"
                             reason:@"Must implement this class in subclass."
                           userInfo:nil]
     raise];
    return nil;
}

@end
