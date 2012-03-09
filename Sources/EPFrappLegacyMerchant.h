//
//  EPFrappLegacyMerchant.h
//  Espresso
//
//  Created by Brandon Holland on 12-03-08.
//  Copyright 2012 What a Nutbar Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EPFrappLegacyMerchant: ATVMerchant 
{
    int padding[32];
    Class _legacyApplianceClass;
}
+ (id) merchant;
- (Class) legacyApplianceClass;
- (void) setLegacyApplianceClass: (Class) legacyApplianceClass;
- (NSString *) title;
- (void) setTitle: (NSString *) title;
- (NSString *) identifier;
- (void) setIdentifier: (NSString *) identifier;
- (NSURL *) iconURL;
- (void) setIconURL: (NSURL *) iconURL;
- (float) preferredOrder;
- (void) setPreferredOrder: (float) preferredOrder;
@end
