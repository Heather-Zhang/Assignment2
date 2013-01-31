//
//  Vegetable.m
//  FruitCart
//
//  Created by Yang Zhang on 1/31/13.
//  Copyright (c) 2013 DavidEvans. All rights reserved.
//

#import "Vegetable.h"

@implementation Vegetable

-(id)initWithName:(NSString *)inName andColor:(NSString *)inColor andShape:(NSString *)inShape
{
    _name = inName;
    _color = inColor;
    _shape = inShape;
    return self;
}

@end
