//
//  ORSTwitterEngine+UserAdditions.h
//  Twitter Engine
//
//  Created by Nicholas Toumpelis on 12/04/2009.
//  Copyright 2008-2009 Ocean Road Software, Nick Toumpelis.
//
//  Version 0.7.1
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy 
//  of this software and associated documentation files (the "Software"), to 
//  deal in the Software without restriction, including without limitation the 
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
//  sell copies of the Software, and to permit persons to whom the Software is 
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in 
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
//  IN THE SOFTWARE.

#import <Cocoa/Cocoa.h>
#import "ORSTwitterEngine.h"

@interface ORSTwitterEngine ( UserAdditions )

// User methods
- (NSArray *) getFriends;
- (NSArray *) getFriendsOfUser:(NSString *)userID;
- (NSArray *) getFriendsAtPage:(NSString *)page;
- (NSArray *) getFriendsLite;
- (NSArray *) getFriendsLiteAtPage:(int)page;
- (NSArray *) getFriendsSince:(NSString *)date;
- (NSArray *) getFriendsOfUser:(NSString *)userID
						atPage:(NSString *)page;
- (NSArray *) getFriendsLiteOfUser:(NSString *)userID;
- (NSArray *) getFriendsOfUser:(NSString *)userID
						 since:(NSString *)date;
- (NSArray *) getFollowers;
- (NSArray *) getFollowersOfUser:(NSString *)userID;
- (NSArray *) getFollowersAtPage:(NSString *)page;
- (NSArray *) getFollowersLite;
- (NSArray *) getFollowersOfUser:(NSString *)userID 
						  atPage:(NSString *)page;
- (NSArray *) getFollowersLiteOfUser:(NSString *)userID;
- (NSArray *) getFeatured;
- (NSXMLNode *) showUser:(NSString *)userID;
- (NSXMLNode *) showUserWithEmail:(NSString *)email;

@end
