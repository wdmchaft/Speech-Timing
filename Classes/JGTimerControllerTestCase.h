//
//  JGTimerControllerTestCase.h
//  SpeechTimer
//
//  Created by John Gallagher on 18/12/2011.
//  Copyright 2011 Synaptic Mishap. All rights reserved.
//
//  See Also: http://developer.apple.com/iphone/library/documentation/Xcode/Conceptual/iphone_development/135-Unit_Testing_Applications/unit_testing_applications.html

//  Application unit tests contain unit test code that must be injected into an application to run correctly.
//  Define USE_APPLICATION_UNIT_TEST to 0 if the unit test code is designed to be linked into an independent test executable.

#define USE_APPLICATION_UNIT_TEST 0

#import <SenTestingKit/SenTestingKit.h>
#import <UIKit/UIKit.h>
#import <OCMock/OCMock.h>

@class JGTimerController;

@interface JGTimerControllerTestCase : SenTestCase {
    id mockDelegate;
    JGTimerController *timer;
}
@property(nonatomic, retain) id mockDelegate;

@end
