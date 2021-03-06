//
//  ZooniverseNameValuePair.h
//  ios-galaxyzoo
//
//  Created by Murray Cumming on 17/05/2015.
//  Copyright (c) 2015 Murray Cumming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZooniverseNameValuePair : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *value;

- (instancetype) init NS_DESIGNATED_INITIALIZER;
- (instancetype) initWithNameAndValue:name
                                   value:(NSString*)value ;


@end
