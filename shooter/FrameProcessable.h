//
//  FrameProcessable.h
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//
/****************************************************
 フレームの描画をコントロールするクラス
****************************************************/

#import <Foundation/Foundation.h>

@protocol FrameProcessable <NSObject>
- (void) processFrame;
@end
