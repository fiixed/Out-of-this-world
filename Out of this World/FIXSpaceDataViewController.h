//
//  FIXSpaceDataViewController.h
//  Out of this World
//
//  Created by Andrew Bell on 9/10/14.
//  Copyright (c) 2014 Andrew Bell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FIXSpaceObject.h"

@interface FIXSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) FIXSpaceObject *spaceObject;

@end
