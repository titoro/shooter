//
//  FpsConf.m
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//

#import "FpsConf.h"

static int _FPS = 60;
static float _SPF = 1.0 / 60;

@implementation FpsConf

+ (int)FPS { return _FPS; }
+ (float)SPF { return _SPF; }

@end
