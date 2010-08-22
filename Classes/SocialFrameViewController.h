//
//  SocialFrameViewController.h
//  SocialFrame
//
//  Created by Xavier Damman on 8/21/10.
//  Copyright (c) 2010 Commentag SPRL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Twitter.h"
#import "Tweet.h"
#import "Utility.h"

@interface SocialFrameViewController : UIViewController <UISearchBarDelegate,UtilityDelegate> {
	Twitter *twitter;
	Utility *utils;
	Tweet *t;
	CALayer *loadingView;
}

- (void) flipToNext;
- (void) addTweet:(Tweet*)t;
- (void) utilityDidFinishFirstFetch;

@end
