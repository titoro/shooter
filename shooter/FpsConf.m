//
//  FpsConf.m
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//

#import "FpsConf.h"

//FPSは60
static int _FPS = 60;
//調整用FPSはおよそ0、2で固定
static float _SPF = 1.0 / 60;

@implementation FpsConf

//FPSの速度を返すメソッド
+ (int)FPS { return _FPS; }
//SPFの速度を返すメソッド
+ (float)SPF { return _SPF; }

@end
