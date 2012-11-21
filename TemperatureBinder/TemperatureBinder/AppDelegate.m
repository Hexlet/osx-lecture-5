//
//  AppDelegate.m
//  TemperatureBinder
//
//  Created by Rakhim Davletkaliyev on 12-11-19.
//  Copyright (c) 2012 Rakhim Davletkaliyev. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    // Insert code here to initialize your application
}

-(id)init {
    self = [super init];
    if (self) {
        [self setValue:[NSNumber numberWithInt:0] forKey:@"temperature"];
    }
    return self;
}

-(void)setTemperature:(int) x {
    [_label setStringValue:[NSString stringWithFormat:@"%d", x]];
    temperature = x;
}

-(NSInteger)temperature {
    return temperature;
}

- (IBAction)increment:(id)sender {
    [self willChangeValueForKey:@"temperature"];
    [self setTemperature:[self temperature]+1];
    [self didChangeValueForKey:@"temperature"];
}

@end
