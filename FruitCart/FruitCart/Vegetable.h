//
//  Vegetable.h
//  FruitCart
//
//  Created by Yang Zhang on 1/31/13.
//  Copyright (c) 2013 DavidEvans. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Vegetable : NSObject

@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * color;
@property (nonatomic, strong) NSString * shape;

-initWithName: (NSString *) inName andColor: (NSString *) inColor andShape: (NSString *) inShape;



@end
