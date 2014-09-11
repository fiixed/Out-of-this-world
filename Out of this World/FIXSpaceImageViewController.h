//
//  FIXSpaceImageViewController.h
//  Out of this World
//
//  Created by Andrew Bell on 9/9/14.
//  Copyright (c) 2014 Andrew Bell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FIXSpaceObject.h"

@interface FIXSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong,nonatomic) UIImageView *imageView;
@property (strong, nonatomic) FIXSpaceObject *spaceObject;

@end
