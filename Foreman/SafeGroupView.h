//
//  SafeGroupView.h
//  Foreman
//
//  Created by Daniel Higginbotham on 9/9/12.
//  Copyright (c) 2012 Daniel Higginbotham. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class SafeGroupViewController;


@interface SafeGroupView : NSView
@property (strong) IBOutlet SafeGroupViewController* controller;
@end
