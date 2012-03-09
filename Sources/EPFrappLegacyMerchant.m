//
//  EPFrappLegacyMerchant.m
//  Espresso
//
//  Created by Brandon Holland on 12-03-08.
//  Copyright 2012 What a Nutbar Software. All rights reserved.
//

#import "EPFrappLegacyMerchant.h"
#import "EPFrappMerchantInfo.h"
#import "EPFrappLegacyCategoryController.h"

@implementation EPFrappLegacyMerchant

#pragma mark -
#pragma mark Creation + Destruction
#pragma mark

- (id) init
{
    if((self = [super init]))
    {
        EPFrappMerchantInfo *info = [EPFrappMerchantInfo merchantInfo];
        [self setInfo: info];
        
        _legacyApplianceClass = nil;
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
{ return [[[EPFrappLegacyMerchant alloc] init] autorelease]; }

#pragma mark -
#pragma mark Private Methods
#pragma mark

#pragma mark -
#pragma mark Public Methods
#pragma mark

- (Class) legacyApplianceClass
{ return _legacyApplianceClass; }

- (void) setLegacyApplianceClass: (Class) legacyApplianceClass
{ _legacyApplianceClass = legacyApplianceClass; }

- (BRController *) rootController
{
    EPFrappLegacyCategoryController *controller = [[[EPFrappLegacyCategoryController alloc] init] autorelease];
    [controller setListTitle: [self title]];
    
    BRBaseAppliance *legacyAppliance = [[[_legacyApplianceClass alloc] init] autorelease];
    [controller setLegacyAppliance: legacyAppliance];
    
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
