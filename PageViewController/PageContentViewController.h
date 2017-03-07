//
//  PageContentViewController.h
//  PageViewController
//
//  Created by Vijay on 06/03/17.
//  Copyright © 2017 Sudha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property  NSUInteger *pageIndex;

@property (strong, nonatomic) NSString *titleText;

@property (strong, nonatomic) NSString *imageFile;

@property (strong, nonatomic) IBOutlet UIImageView *imageOutlet;

@property (strong, nonatomic) IBOutlet UILabel *labelOutlet;

@end
