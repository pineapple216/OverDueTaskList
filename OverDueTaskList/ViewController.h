//
//  ViewController.h
//  OverDueTaskList
//
//  Created by Koen Hendriks on 26/12/14.
//  Copyright (c) 2014 Koen Hendriks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonItemPressed:(UIBarButtonItem *)sender;
- (IBAction)addTaskBarButtonItemPressed:(UIBarButtonItem *)sender;

@end

