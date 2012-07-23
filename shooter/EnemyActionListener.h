//
//  EnemyActionListener.h
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//

/****************************************************
 敵オブジェクトからのリクエストを受け取るクラス
 敵オブジェクトの状態を管理
 ****************************************************/


#import <Foundation/Foundation.h>

@class AbstractEnemy;

/** AbstractEnemy の状態変更通知を受け取るプロトコルです。 */
@protocol EnemyActionListener <NSObject>

- (void)didEnemyDead:(AbstractEnemy *)target
            userInfo:(NSDictionary *)userInfo;

@end
