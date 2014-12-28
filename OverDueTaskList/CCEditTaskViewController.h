//
//  CCEditTaskViewController.h
//  OverDueTaskList
//
//  Created by Koen Hendriks on 26/12/14.
//  Copyright (c) 2014 Koen Hendriks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCEditTaskViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *saveBarButtonItemPressed;


@end
