//
//  AppDelegate.h
//  Speaker
//
//  Created by Rakhim Davletkaliyev on 12-11-12.
//  Copyright (c) 2012 Rakhim Davletkaliyev. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSSpeechSynthesizerDelegate> {
    NSSpeechSynthesizer *speaker;
    NSArray *voices;
}

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSTableView *tableView;

- (IBAction)speakIt:(id)sender;
- (IBAction)stopIt:(id)sender;

@end
