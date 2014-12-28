//
//  CCAddTaskViewController.h
//  OverDueTaskList
//
//  Created by Koen Hendriks on 26/12/14.
//  Copyright (c) 2014 Koen Hendriks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCAddTaskViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)addTaskButtonPressed:(UIButton *)sender;
@property (strong, nonatomic) IBOutlet UIButton *cancelButtonPressed;



@end
