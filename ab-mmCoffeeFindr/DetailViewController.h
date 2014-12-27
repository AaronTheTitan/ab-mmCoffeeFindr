//
//  DetailViewController.h
//  ab-mmCoffeeFindr
//
//  Created by Aaron Bradley on 12/26/14.
//  Copyright (c) 2014 Aaron Bradley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoffeePlace.h"

@interface DetailViewController : UIViewController

@property CoffeePlace *coffeePlace;
@property CLLocation *currentLocation;

@end
