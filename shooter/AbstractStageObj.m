//
//  AbstractStageObject.m
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//
/****************************************************
 ステージのインターフェイスを定義
 ****************************************************/


#import "AbstractStageObj.h"

@implementation AbstractStageObj

/*　初期化　ステージの描画 */
- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/

/** 1フレーム分描画を進めるメソッドです。 */
- (void)processFrame
{
    
}

@end
