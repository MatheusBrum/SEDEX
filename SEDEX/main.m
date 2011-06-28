//
//  main.m
//  SEDEX
//
//  Created by Matheus Brum on 28/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SEDEXAppDelegate.h"

int main(int argc, char *argv[])
{
    int retVal = 0;
    @autoreleasepool {
        retVal = UIApplicationMain(argc, argv, nil, NSStringFromClass([SEDEXAppDelegate class]));
    }
    return retVal;
}
