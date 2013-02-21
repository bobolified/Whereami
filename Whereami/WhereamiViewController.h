//
//  WhereamiViewController.h
//  Whereami
//
//  Created by Vin Vu on 1/13/13.
//  Copyright (c) 2013 Amusant Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
}

@end
