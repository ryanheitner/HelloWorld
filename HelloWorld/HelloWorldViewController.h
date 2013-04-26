//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Ryan Heitner on 3/7/13.
//  Copyright (c) 2013 Ryan Heitner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (nonatomic, copy) NSString *userName;

- (IBAction)changeGreeting:(id)sender;

@end