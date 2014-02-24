//
//  AppDelegate.h
//  iOSBridge
//
//  Created by Hamdan Hashmi on 24/02/2014.
//  Copyright (c) 2014 Hamdan Hashmi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NativeBridgeViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UIWindow *window;
    NativeBridgeViewController *viewController;
}


@property (nonatomic, retain) IBOutlet NativeBridgeViewController *viewController;
@property (strong, nonatomic) UIWindow *window;

@end
