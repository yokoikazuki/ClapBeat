//
//  ViewController.h
//  ClapBeat
//
//  Created by 横井一樹 on 2015/02/28.
//  Copyright (c) 2015年 LifeisTech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Clap.h"

@interface ViewController : UIViewController
    <UIPickerViewDataSource, UIPickerViewDelegate>{ //あってるか？
    Clap *clapInstance;
    IBOutlet UIPickerView *clapPickerView;
    NSString *repeatNumbersForPicker [10];
    int repeatCount;
}

- (IBAction)play:(id)sender;

@end

