//
//  MyWebView.m
//  iOSBridge
//
//  Created by Hamdan Hashmi on 24/02/2014.
//  Copyright (c) 2014 Hamdan Hashmi. All rights reserved.
//

#import "SBJSON.h"

@interface MyWebView : UIWebView <UIWebViewDelegate> {
  SBJSON *json;
  
  int alertCallbackId;
}

- (void)handleCall:(NSString*)functionName callbackId:(int)callbackId args:(NSArray*)args;
- (void)returnResult:(int)callbackId args:(id)firstObj, ...;

@end
