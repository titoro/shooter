//
//  AbstractEnemy.m
//  shooter
//
//  Created by ryuji kamiyama on 12/07/23.
//  Copyright (c) 2012年 unko corporation. All rights reserved.
//

#import "AbstractEnemy.h"

@implementation AbstractEnemy

- (id)initWithFrame:(CGRect)frame withEnemyListener:(id<EnemyActionListener>)enemyListener
{
    self = [super initWithFrame:frame];
    if (self) {
        _enemyListener = enemyListener;
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

@end
