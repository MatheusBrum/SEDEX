//
//  RootViewController.h
//  SEDEX
//
//  Created by Matheus Brum on 28/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface RootViewController : UITableViewController{
    NSString *codigo;
    NSMutableArray *superArray;
}
@property (nonatomic,retain)    NSString *codigo;

@end
