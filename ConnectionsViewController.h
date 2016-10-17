//
//  ConnectionsViewController.h
//  MCDemo
//
//  Created by test on 05/10/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

@interface ConnectionsViewController : UIViewController<MCBrowserViewControllerDelegate,UITextFieldDelegate,UITableViewDataSource,UITableViewDelegate>

-(void)peerDidChangeStateWithNotification:(NSNotification *)notification;
@property (nonatomic, strong) NSMutableArray *arrConnectedDevices;


@property (weak, nonatomic) IBOutlet UITextField *txtName;
@property (weak, nonatomic) IBOutlet UISwitch *swVisible;
@property (weak, nonatomic) IBOutlet UITableView *tblConnectedDevices;
@property (weak, nonatomic) IBOutlet UIButton *btnDisconnect;
- (IBAction)browseForDevices:(id)sender;
- (IBAction)disconnect:(id)sender;

- (IBAction)toggleVisibility:(id)sender;
@end
