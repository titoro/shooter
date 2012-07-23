//
//  AbstractMoveLogic.h
//  shooter
//
//  Created by ryuji kamiyama on 12/07/22.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//
/****************************************************
 移動処理を定義するインターフェイスを宣言
 ****************************************************/


#import <Foundation/Foundation.h>


@interface AbstractMoveLogic : NSObject
{
    CGRect _stageRect;
}

- (id) initWithStageRect:(CGRect)stageRect;
- (CGRect) nextRect:(CGRect)currentRect;

@end
