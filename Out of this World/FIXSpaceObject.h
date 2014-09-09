//
//  FIXSpaceObject.h
//  Out of this World
//
//  Created by Andrew Bell on 9/7/14.
//  Copyright (c) 2014 Andrew Bell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FIXSpaceObject : NSObject

@property (strong, nonatomic) NSString *name;
@property (nonatomic) float gravitationalForce;
@property (nonatomic) float diameter;
@property (nonatomic) float yearLength;
@property (nonatomic) float dayLength;
@property (nonatomic) float temperature;
@property (nonatomic) int numberOfMoons;
@property (strong, nonatomic) NSString *nickname;
@property (strong, nonatomic) NSString *interestingFact;

@property (strong, nonatomic) UIImage *spaceImage;

-(instancetype)initWithData:(NSDictionary *)data andImage:(UIImage *)image;

@end
