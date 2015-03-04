//
//  Clap.h
//  ClapBeat
//
//  Created by 横井一樹 on 2015/03/01.
//  Copyright (c) 2015年 LifeisTech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface Clap : NSObject

+(id)initClap;
-(id)init;
-(void)setSound;
-(void)play;
-(void)repeatClap:(int)count;

@end

//@implementation Clap
//{
//    CFURLRef soundURL;
//    SystemSoundID soundID;
//}

