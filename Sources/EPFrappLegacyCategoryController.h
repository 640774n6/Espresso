//
//  EPFrappLegacyCategoryController.h
//  Espresso
//
//  Created by Brandon Holland on 12-03-09.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EPFrappLegacyCategoryController: BRMenuController 
{
    int padding[32];
    NSMutableArray *menuItems;
    BRBaseAppliance *_legacyAppliance;
}
- (BRBaseAppliance *) legacyAppliance;
- (void) setLegacyAppliance: (BRBaseAppliance *) legacyAppliance;
@end
