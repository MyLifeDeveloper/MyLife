//
//  DetailViewController.h
//  MyLifeDemo
//
//  Created by Joy on 2/17/15.
//  Copyright (c) 2015 MyLife. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

