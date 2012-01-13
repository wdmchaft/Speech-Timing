#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import "JGTimerControllerDelegate.h"
#import "JGCountdownTimerDelegate.h"
#import <AVFoundation/AVFoundation.h>
#import "JGCountdownTimer.h"
#import "JGTimerController.h"

@interface JGTimerRunningViewController : UIViewController <JGTimerControllerDelegate, JGCountdownTimerDelegate> {
    IBOutlet UILabel  *timeLabel;
    AVAudioPlayer     *audioPlayer;
    JGTimerController *timerController;
    JGCountdownTimer  *countdownTimer;
}

@property(nonatomic, retain) JGCountdownTimer  *countdownTimer;
@property(nonatomic, retain) JGTimerController *timerController;


+(JGTimerRunningViewController *)viewControllerWithFireTime:(NSDate *)fireTime;

+(JGTimerRunningViewController *)viewControllerWithStartTime:(NSDate *)startTime_ fireTime:(NSDate *)fireTime_ alarmFilename:(NSString *)an;


-(void)loadAlertSoundWithFilename:(NSString *)alertSoundFilename_;

-(IBAction)stopTimer:(id)sender;

-(IBAction)playSound:(id)sender;

@end
