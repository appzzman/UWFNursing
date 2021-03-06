//
//  ATCStation.h
//  ATCTrainingStations
//
//  Created by Janusz Chudzynski on 6/20/14.
//  Copyright (c) 2014 Janusz Chudzynski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATCBeacon.h"

@import CoreLocation;

@interface ATCStation : NSObject
    
    @property(nonatomic,strong) NSNumber * stationid;
    @property(nonatomic,strong) NSNumber * missionid;
    @property(nonatomic,strong) UIImage * icon;

    @property(nonatomic,strong) NSString * title;
    @property(nonatomic,strong) NSString * station_description;

    @property(nonatomic,strong) NSArray * immediateContent;
    @property(nonatomic,strong) NSArray * nearbyContent;
    @property(nonatomic,strong) NSArray * farContent;

    @property (nonatomic,strong) NSMutableDictionary * data;// ?
    @property (nonatomic,assign) CLProximity  proximity;
    @property (nonatomic,assign) NSString * beaconKey;

    @property (nonatomic,strong)  NSNumber * displayStartDate;
    @property (nonatomic,strong)  NSNumber * displayStopDate;

    @property (nonatomic, assign) enum beacontype type;


@end
