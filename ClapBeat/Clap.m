//
//  Clap.m
//  ClapBeat
//
//  Created by 横井一樹 on 2015/03/01.
//  Copyright (c) 2015年 LifeisTech. All rights reserved.
//

#import "Clap.h"

@implementation Clap{
    CFURLRef soundURL;
    SystemSoundID soundID;
}

-(void)setSound{
    CFBundleRef mainBundle = CFBundleGetMainBundle();
    soundURL = CFBundleCopyResourceURL(mainBundle,CFSTR("clap"),CFSTR("wav"),nil);
    AudioServicesCreateSystemSoundID(soundURL, &soundID);
}

-(void)play{
    AudioServicesPlaySystemSound(soundID);
}

-(void)repeatClap:(int)count{
    int i = 0;
    while(i < count){
        [self play];
        i++;
        usleep(500000);
    }
}

+ (id)initClap{
    return [[self alloc] init];
}

- (id)init{
    self = [super init];
    [self setSound];
    return self;
}

@end
