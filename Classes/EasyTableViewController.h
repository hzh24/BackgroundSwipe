//
//  EasyTableViewController.h
//  EasyTableViewController
//
//  Created by Aleksey Novicov on 5/30/10.
//  Copyright Yodel Code LLC 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EasyTableView.h"
#import "JZSwipeCell.h"

@interface EasyTableViewController : UIViewController <EasyTableViewDelegate,JZSwipeCellDelegate> {
	IBOutlet UILabel *bigLabel;

	EasyTableView *horizontalView;
}

@property (nonatomic) UILabel *bigLabel;

@property (nonatomic) EasyTableView *horizontalView;

@property (nonatomic,retain)UITableView *tableView;

@end

