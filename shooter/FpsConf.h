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
+ (int)FPS;
/** Seconds Per Frame */
+ (float)SPF;

@end
