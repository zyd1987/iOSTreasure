//
//  ZJMasterViewController.h
//  ZJCustomViewControllerTransition
//
//  Created by Zhu J on 11/4/13.
//  Copyright (c) 2013 Zhu J. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZJDetailViewController;

@interface ZJMasterViewController : UITableViewController<UINavigationControllerDelegate>

@property (strong, nonatomic) ZJDetailViewController *detailViewController;

@end
