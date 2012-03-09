//
//  EPFrappManager.h
//  Espresso
//
//  Created by Brandon Holland on 12-03-08.
//  Copyright 2012 What a Nutbar Software. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kEPFrappuccinoKey               @"EPFrappuccino"
#define kEPFrappuccinoTitleKey          @"EPFrappuccinoTitle"
#define kEPFrappuccinoImageNameKey      @"EPFrappuccinoImageName"
#define kEPFrappuccinoIdentifierKey     @"EPFrappuccinoIdentifier"
#define kEPFrappuccinoPreferredOrderKey @"EPFrappuccinoPreferredOrder"

@interface EPFrappManager: NSObject 
{    
    NSMutableArray *_frappuccinos;
    NSMutableArray *_appliances;
    BOOL _frappuccinosLoaded;
    BOOL _appliancesLoaded;
}
+ (id) sharedFrappManager;
- (NSArray *) frappuccinos;
- (BOOL) frappuccinosLoaded;
- (void) clearFrappuccinos;
- (void) reloadFrappuccinos;
- (void) loadFrappuccinos;
- (NSArray *) appliances;
- (BOOL) appliancesLoaded;
- (void) clearAppliances;
- (void) reloadAppliances;
- (void) loadAppliances;
@end
