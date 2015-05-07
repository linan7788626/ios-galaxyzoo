//
//  DecisionTreeBaseButton.h
//  ios-galaxyzoo
//
//  Created by Murray Cumming on 04/05/2015.
//  Copyright (c) 2015 Murray Cumming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DecisionTreeQuestionBaseButton : NSObject

@property (nonatomic, copy) NSString *answerId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic) NSUInteger examplesCount;

- (DecisionTreeQuestionBaseButton *)init:(NSString *)answerId
                                    icon:(NSString *)icon
                           examplesCount:(NSUInteger)examplesCount
                                   text:(NSString *)text;

@end