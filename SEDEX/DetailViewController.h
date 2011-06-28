//
//  DetailViewController.h
//  SEDEX
//
//  Created by Matheus Brum on 28/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController


@property (strong, nonatomic) IBOutlet UITextField *campoTexto;
-(IBAction)procuar:(id)sender;
@end
