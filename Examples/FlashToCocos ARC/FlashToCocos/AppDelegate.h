//
//  AppDelegate.h
//  FlashToCocos
//
//  Created by Jordi.Martinez on 9/13/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, strong) UIWindow *window;

@end
