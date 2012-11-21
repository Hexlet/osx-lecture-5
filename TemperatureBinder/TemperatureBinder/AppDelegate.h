//
//  AppDelegate.h
//  TemperatureBinder
//
//  Created by Rakhim Davletkaliyev on 12-11-19.
//  Copyright (c) 2012 Rakhim Davletkaliyev. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSInteger temperature;
}

@property (weak) IBOutlet NSTextField *label;

@property (assign) IBOutlet NSWindow *window;
- (IBAction)increment:(id)sender;

@end
