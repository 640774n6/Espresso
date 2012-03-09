//
//  EPFrappMerchant.m
//  Espresso
//
//  Created by Brandon Holland on 12-03-08.
//  Copyright 2012 What a Nutbar Software. All rights reserved.
//

#import "EPFrappMerchant.h"
#import "EPFrappMerchantInfo.h"

@implementation EPFrappMerchant

#pragma mark -
#pragma mark Creation + Destruction
#pragma mark

- (id) init
{
    if((self = [super init]))
    {
        EPFrappMerchantInfo *info = [EPFrappMerchantInfo merchantInfo];
        [self setInfo: info];
        
        _rootControllerClass = nil;
        [self setEnabled: YES];
    }
    return self;
}

- (void) dealloc
{
    [super dealloc];
}

#pragma mark -
#pragma mark Class Methods
#pragma mark

+ (id) merchant
{ return [[[EPFrappMerchant alloc] init] autorelease]; }

#pragma mark -
#pragma mark Private Methods
#pragma mark

#pragma mark -
#pragma mark Public Methods
#pragma mark

- (Class) rootControllerClass
{ return _rootControllerClass; }

- (void) setRootControllerClass: (Class) rootControllerClass
{ _rootControllerClass = rootControllerClass; }

- (BRController *) rootController
{
    BRController *controller = [[[_rootControllerClass alloc] init] autorelease];
    return controller;
}

- (NSString *) title
{ return [[self info] menuTitle]; }

- (void) setTitle: (NSString *) title
{ [[self info] setMenuTitle: title]; }

- (NSString *) identifier
{ return [[self info] merchantID]; }

- (void) setIdentifier: (NSString *) identifier
{ [[self info] setMerchantID: identifier]; }

- (NSURL *) iconURL
{ return [[self info] menuIconURL]; }

- (void) setIconURL: (NSURL *) iconURL
{ [[self info] setMenuIconURL: iconURL]; }

- (float) preferredOrder
{ return [[self info] preferredOrder]; }

- (void) setPreferredOrder: (float) preferredOrder
{ [[self info] setPreferredOrder: preferredOrder]; }

@end
