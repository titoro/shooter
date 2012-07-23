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
}

- (id) initWithStageRect:(CGRect)stageRect;
- (CGRect) nextRect:(CGRect)currentRect;

@end
