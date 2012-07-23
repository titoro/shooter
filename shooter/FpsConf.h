//
//  FpsConf.h
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FpsConf : NSObject

/** Frames Per Second */
// FPS の速度を格納する変数
+ (int)FPS;
/** Seconds Per Frame */
// FPS のズレを修正する時に使用するSPFの速度を格納する変数
+ (float)SPF;

@end
