//
//  NativeBridgeViewController.m
//  iOSBridge
//
//  Created by Hamdan Hashmi on 24/02/2014.
//  Copyright (c) 2014 Hamdan Hashmi. All rights reserved.
//


#import "NativeBridgeViewController.h"

#import "MyWebView.h"

@implementation NativeBridgeViewController



- (void)loadView {
  CGRect frame=[UIScreen mainScreen].applicationFrame;
  
  self.view = [[MyWebView alloc] initWithFrame:frame];
}



- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}

@end
