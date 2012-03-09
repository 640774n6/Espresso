//
//  EPFrappMerchantInfo.m
//  Espresso
//
//  Created by Brandon Holland on 12-03-08.
//  Copyright 2012 What a Nutbar Software. All rights reserved.
//

#import "EPFrappMerchantInfo.h"

@implementation EPFrappMerchantInfo

#pragma mark -
#pragma mark Creation + Destruction
#pragma mark

- (id) init
{
    if((self = [super init]))
    {
        _menuTitle = nil;
        _menuIconURL = nil;
        _merchantID = nil;
        _preferredOrder = 0.0;
    }
    return self;
}

- (void) dealloc
{
    [_menuTitle release];
    [_menuIconURL release];
    [_merchantID release];
    [super dealloc];
}

#pragma mark -
#pragma mark Class Methods
#pragma mark

+ (id) merchantInfo
{ return [[[EPFrappMerchantInfo alloc] init] autorelease]; }

#pragma mark -
#pragma mark Private Methods
#pragma mark

#pragma mark -
#pragma mark Public Methods
#pragma mark

- (NSString *) menuTitle
{ return _menuTitle; }

- (void) setMenuTitle: (NSString *) menuTitle
{
    [_menuTitle release];
    _menuTitle = [menuTitle retain];
}

- (NSURL *) menuIconURL
{ return _menuIconURL; }

- (void) setMenuIconURL: (NSURL *) menuIconURL
{
    [_menuIconURL release];
    _menuIconURL = [menuIconURL retain];
}

- (NSString *) merchantID
{ return _merchantID; }

- (void) setMerchantID: (NSString *) merchantID
{
    [_merchantID release];
    _merchantID = [merchantID retain];
}

- (float) preferredOrder
{ return _preferredOrder; }

- (void) setPreferredOrder: (float) preferredOrder
{ _preferredOrder = preferredOrder; }

@end
