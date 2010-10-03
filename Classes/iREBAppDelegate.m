//
//  iREBAppDelegate.m
//  iREB
//
//  Created by GreySyntax on 02/09/2010.
//  Copyright (c) 2010 NSPwn. All rights reserved.
//


#import "iREBAppDelegate.h"

@implementation iREBAppDelegate

@synthesize window, online, offline;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {

    [online setAction:@selector(usePzip:)];
}

- (IBAction) usePzip:(id)sender {
	pzip = YES;
	NSLog(@"click");
}
								
					

@end

