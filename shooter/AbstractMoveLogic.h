//
//  AbstractMoveLogic.h
//  shooter
//
//  Created by ryuji kamiyama on 12/07/22.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface AbstractMoveLogic : NSObject
{
    CGRect _stageRect;
    CGRect _currentRect;
}

- (id) initWithStageRect:(CGRect)stageRect;
- (CGPoint) nextRect:(CGRect)currentRect;

@end
