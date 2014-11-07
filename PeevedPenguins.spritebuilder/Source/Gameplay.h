//
//  Gameplay.h
//  PeevedPenguins
//
//  Created by Home iMac on 11/7/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface Gameplay : CCNode


- (void)didLoadFromCCB;
- (void)touchBegan:(UITouch *)touch withEvent:(UIEvent *)event;
- (void)launchPenguin;


@end
