//
//  HHPlanets.h
//  Planets
//
//  Created by Hayden Hastings on 7/15/19.
//  Copyright © 2019 Hayden Hastings. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HHPlanets : NSObject

@property NSString *name;
@property UIImage *image;

- (instancetype)initWithName:(NSString *)name
                       image:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
