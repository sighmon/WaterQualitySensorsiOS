//
//  TableViewController.h
//  SimpleControl
//
//  Created by Cheong on 7/11/12.
//  Copyright (c) 2012 RedBearLab. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BLE.h"
#import <CoreData/CoreData.h>
#import <CoreLocation/CoreLocation.h>
#import "Constants.h"

#import "BIKSensorDataMO+CoreDataProperties.h"

@interface MainViewController : UIViewController <BLEDelegate, CLLocationManagerDelegate>
{
    IBOutlet UIButton *btnConnect;
    IBOutlet UIActivityIndicatorView *indConnecting;
    IBOutlet UILabel *lblRSSI;
    IBOutlet UIProgressView *rssiProgressView;
    IBOutlet UILabel *electricalConductivityLabel;
    IBOutlet UILabel *totalDissolvedSolidsLabel;
    IBOutlet UILabel *salinityLabel;
    IBOutlet UILabel *specificGravityLabel;
    
    CLLocationManager *locationManager;
}

@property (strong, nonatomic) BLE *ble;
@property (strong) NSManagedObjectContext *managedObjectContext;

- (void)initializeCoreData;

@end
