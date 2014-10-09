//
//  ATCNetworkTest.m
//  UWFNursing
//
//  Created by Janusz Chudzynski on 10/8/14.
//  Copyright (c) 2014 Janusz Chudzynski. All rights reserved.
//

#import "ATCNetworkTest.h"
#import "ATCBeaconNetworkUtilities.h"

@interface ATCNetworkTest()

@property (nonatomic,strong)ATCBeaconNetworkUtilities *networkUtils;

@end

@implementation ATCNetworkTest

-(id)init{
    self = [super init];
    if(self){
        _networkUtils = [ATCBeaconNetworkUtilities new];
    
    }
    return self;

}

-(void)testLogin;{
    
    [_networkUtils loginUserWithUsername:@"jabbey" andPassword:@"2731" withCompletionHandler:^(NSError *error, NSUInteger userId, NSString *errorMessage) {
        NSLog(@"Error %@", error);
        NSLog(@"User id %lu", userId);
        NSLog(@"Error %@", errorMessage);
        
    }];

}
@end