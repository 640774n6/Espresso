//
//  main.m
//  Espresso
//
//  Created by Brandon Holland on 10-12-20.
//  Copyright 2010 What a Nutbar Software. All rights reserved.
//

#import "substrate.h"
#import "EPFrappManager.h"

#define kEspressoCurrentVersion                 @"0.2(turbo-manatee)"

static IMP merchantcoordinator_allMerchants_old;
id merchantcoordinator_allMerchants_new(id self, SEL cmd)
{
    NSArray *allMerchants = merchantcoordinator_allMerchants_old(self, cmd);
    NSArray *frappuccinoMerchants = [[EPFrappManager sharedFrappManager] frappuccinos];
    NSArray *applianceMerchants = [[EPFrappManager sharedFrappManager] appliances];
    
    NSMutableArray *returnArray = [NSMutableArray array];
    [returnArray addObjectsFromArray: allMerchants];
    [returnArray addObjectsFromArray: frappuccinoMerchants];
    [returnArray addObjectsFromArray: applianceMerchants];

    return returnArray;
}

MSInitialize
{
    NSAutoreleasePool *localPool = [[NSAutoreleasePool alloc] init];
	
    NSLog(@"Espresso -> <version %@> loaded", kEspressoCurrentVersion);
    
    NSLog(@"Espresso -> loading frappuccinos...");
    [[EPFrappManager sharedFrappManager] loadFrappuccinos];
    
    NSLog(@"Espresso -> loading legacy appliances...");
    [[EPFrappManager sharedFrappManager] loadAppliances];
    
    NSLog(@"Espresso -> injecting...");
    
    MSHookMessageEx([ATVMerchantCoordinator class],
					@selector(allMerchants),
					(IMP)merchantcoordinator_allMerchants_new,
					(IMP *)&merchantcoordinator_allMerchants_old);
    
    NSLog(@"Espresso -> ready :)");
    
    [localPool drain];
}