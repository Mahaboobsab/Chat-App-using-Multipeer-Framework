//
//  FirstViewController.h
//  MCDemo
//
//  Created by test on 05/10/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
@interface FirstViewController : UIViewController<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *txtMessage;

@property (weak, nonatomic) IBOutlet UITextView *tvChat;
- (IBAction)sendMessage:(id)sender;
- (IBAction)cancelMessage:(id)sender;

@end

