//
//  ViewController.m
//  AgenteSeguros
//
//  Created by Marcos Garcia on 6/17/15.
//
//

#import "ViewController.h"
#import "AppDelegate.h"
#import <HKSlideMenu3DController.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [[AppDelegate mainDelegate].slideMenuVC setEnablePan:YES];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showMenu:(id)sender {
    
    [[AppDelegate mainDelegate].slideMenuVC toggleMenu];
    
    
}
@end
