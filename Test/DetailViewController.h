//
//  DetailViewController.h
//  Test
//
//  Created by Андрей on 18.08.13.
//  Copyright (c) 2013 Андрей. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
