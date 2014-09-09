//
//  FIXSpaceObject.m
//  Out of this World
//
//  Created by Andrew Bell on 9/7/14.
//  Copyright (c) 2014 Andrew Bell. All rights reserved.
//

#import "FIXSpaceObject.h"
#import "AstronomicalData.h"

@implementation FIXSpaceObject

-(instancetype)init
{
    self = [self initWithData:nil andImage:nil];
    return self;
}

-(instancetype)initWithData:(NSDictionary *)data andImage:(UIImage *)image
{
    self = [super init];
    
    self.name = data[PLANET_NAME];
    self.gravitationalForce = [data[PLANET_GRAVITY] floatValue];
    self.diameter = [data[PLANET_DIAMETER] floatValue];
    self.yearLength = [data[PLANET_YEAR_LENGTH] floatValue];
    self.dayLength = [data[PLANET_DAY_LENGTH] floatValue];
    self.temperature = [data[PLANET_TEMPERATURE] floatValue];
    self.numberOfMoons = [data[PLANET_NUMBER_OF_MOONS] integerValue];
    self.nickname = data[PLANET_NICKNAME];
    self.interestingFact = data[PLANET_INTERESTING_FACT];
    
    self.spaceImage = image;
    
    return self;
}

@end
