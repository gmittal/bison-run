/*
 * Kobold2D™ --- http://www.kobold2d.org
 *
 * Copyright (c) 2010-2011 Steffen Itterheim. 
 * Released under MIT License in Germany (LICENSE-Kobold2D.txt).
 */


#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "ParallaxBackground.h"

@interface GameLayer : CCLayer
{
	CCSprite* player;
	CGPoint playerVelocity;
	
	// CCArray is cocos2d's undocumented array class optimized to perform better than NSArray.
	// You can find the class' implementation in the cocos2d/support folder.
	CCArray* spiders;
	
	float spiderMoveDuration;
	int numSpidersMoved;
	
	// Used for Scores
	ccTime totalTime;
	int score;
	CCLabelBMFont* scoreLabel;
	
	// Mac variables
	BOOL isGameOver;
	float currentKeyAcceleration;
    
    
}

-(void) initSpiders;
-(void) resetSpiders;
-(void) spidersUpdate:(ccTime)delta;
-(void) runRockMoveSequence:(CCSprite*)rock;
-(void) runSpiderMoveSequence:(CCSprite*)spider;
-(void) runGrassMoveSequence:(CCSprite*)grass;
-(void) setScreenSaverEnabled:(bool)enabled;
-(void) detectPowerups;
-(void) spiderDidDrop:(id)sender;
-(void) checkForCollision;
-(void) showGameOver;
-(void) resetGame;
-(void) setInvincible;
-(void) resetInvincibleCounter;
-(void) notInvincible;
-(void) displayAchievement;
-(void) checkAchStats;
-(void) clearAch1;
-(void) clearAch2;
-(void) clearAch3;
-(void) clearAch4;
-(void) clearAch5;
-(void) clearAch6;
-(void) clearAch7;
-(void) clearAch8;
-(void) clearAch9;
-(void) clearAch10;

+(GameLayer*) sharedGameLayer;
+(CGRect) screenRect;

@end
