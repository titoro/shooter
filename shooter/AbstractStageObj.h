//
//  AbstractStageObject.h
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//
/****************************************************
 ステージのインターフェイスを宣言
 ****************************************************/


#import <UIKit/UIKit.h>
#import "FrameProcessable.h"

/*  ステージクラスの抽象クラス */
@interface AbstractStageObj : UIView <FrameProcessable>

@end
