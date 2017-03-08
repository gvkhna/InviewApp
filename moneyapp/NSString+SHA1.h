//
//  NSString+SHA1.h
//  moneyapp
//
//  Created by Gaurav Khanna on 9/22/16.
//  Copyright © 2016 Inview Technologies Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>

@interface NSString (SHA1)

- (NSString *)sha1;

@end