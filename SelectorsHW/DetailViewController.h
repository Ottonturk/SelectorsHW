//
//  DetailViewController.h
//  SelectorsHW
//
//  Created by robert on 3/5/17.
//  Copyright (c) 2017 robert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

