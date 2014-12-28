//
//  CCDetailTaskViewController.h
//  OverDueTaskList
//
//  Created by Koen Hendriks on 26/12/14.
//  Copyright (c) 2014 Koen Hendriks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCDetailTaskViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;


@end
