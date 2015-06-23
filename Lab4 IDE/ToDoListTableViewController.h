//
//  ToDoListTableViewController.h
//  Lab4 IDE
//
//  Created by Dan on 27.05.15.
//  Copyright (c) 2015 Dan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ToDoListTableViewController : UITableViewController<UITableViewDataSource, UITableViewDelegate>

@property(nonatomic, retain) NSMutableArray *array;

- (IBAction)unwindToList:(UIStoryboardSegue *)segue;


@end
