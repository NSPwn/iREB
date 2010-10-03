//
//  iREBAppDelegate.h
//  iREB
//
//  Created by GreySyntax on 02/09/2010.
//  Copyright (c) 2010 NSPwn. All rights reserved.
//


@interface iREBAppDelegate : NSObject {

    NSWindow *window;
	NSButtonCell *online;
	NSButtonCell *offline;
	BOOL pzip;
}

- (BOOL)isError:(NSString *)theString;
- (IBAction) usePzip:(id)sender;

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSButtonCell *online;
@property (assign) IBOutlet NSButtonCell *offline;

@end

