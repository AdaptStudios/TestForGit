//
//  HelloWorldLayer.h
//  TestForGit
//
//  Created by Antonio Diaz on 10/11/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//


//THIS WORKS!!!!aofhioigpejfpk[wgkrwepkrghl

#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
