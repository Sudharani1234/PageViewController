//
//  ViewController.h
//  PageViewController
//
//  Created by Vijay on 06/03/17.
//  Copyright © 2017 Sudha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"


@interface ViewController : UIViewController<UIPageViewControllerDataSource>


- (IBAction)startWalkthrogh:(id)sender;
@property (strong,nonatomic) UIPageViewController *pageViewController;

@property (strong,nonatomic) NSArray *pageTitles;

@property (strong,nonatomic) NSArray *pageImages;

@end

