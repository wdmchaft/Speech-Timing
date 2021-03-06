//
//  RootViewController.h
//  SpeechTimer
//
//  Created by John Gallagher on 17/12/2011.
//  Copyright 2011 Synaptic Mishap. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "JGRingingSettingDelegate.h"

@class JGTimerController;
@class JGCountdownTimer;
@class JGAlert;

@interface JGTimerConfigurationViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, JGRingingSettingDelegate> {
    IBOutlet UIPickerView *timerDurationPickerView;
    IBOutlet UITableView *currentAlertTableView;

    NSArray  *_pickerDurations;
    NSString *_currentAlertName;
    JGAlert  *_currentAlert;

@private
    NSManagedObjectContext *managedObjectContext_;
}

@property(nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property(nonatomic, retain) NSString               *currentAlertName;
@property(nonatomic, retain) JGAlert                *currentAlert;


-(IBAction)startTimer:(id)sender;

-(void)pushRunningViewControllerWithCurrentAlert;


@end



