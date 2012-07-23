//
//  AbstractEnemy.h
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//

/****************************************************
 敵クラスのインターフェイスを宣言
 ****************************************************/

#import "AbstractStageObj.h"
#import "EnemyActionListener.h"

@interface AbstractEnemy : AbstractStageObj
{
    id<EnemyActionListener> _enemyListener;
}

//TODO: score と status を @property でここに定義したい。
//      score は殺したときに取得できるポイント
//      status は、 DEAD, DEADING, ALIVE などの定数オブジェクトで、EnemyStatusなどの名前のクラスとして別途作成すること。

@end
