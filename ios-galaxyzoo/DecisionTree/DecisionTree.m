//
//  DecisionTree.m
//  ios-galaxyzoo
//
//  Created by Murray Cumming on 04/05/2015.
//  Copyright (c) 2015 Murray Cumming. All rights reserved.
//

#import "DecisionTree.h"
#import "DecisionTreeParser.h"
#import <Foundation/Foundation.h>

@interface DecisionTree () {
    NSMutableDictionary *_questions;
}
@end

@implementation DecisionTree

- (DecisionTree *)init:(NSURL *)url {

    self = [super init];
    
    _questions = [[NSMutableDictionary alloc] init];
    
    //TODO: Use filename.
    //NSString *fullPath = @"Assets/DecisionTrees";
    //fullPath = [fullPath stringByAppendingString:filename];
    
    DecisionTreeParser *parser = [[DecisionTreeParser alloc]init:url
                                                        intoTree:self];
    if(![parser parse]) {
        return nil;
    }

    return self;
}

- (DecisionTreeQuestion *) getQuestion:(NSString *)questionId {
    return [_questions objectForKey:questionId];
}

- (DecisionTreeQuestion *) getNextQuestion:(NSString *)questionId forAnswer:(NSString *)answerId {
    DecisionTreeQuestion *current = [self getQuestion:questionId];
    for (DecisionTreeQuestionAnswer *answer in current.answers) {
        if ([answer.answerId isEqualToString:answerId]) {
            NSString *leadsToQuestionId = answer.leadsToQuestionId;
            return [self getQuestion:leadsToQuestionId];
        }
    }

    return nil;
}

- (void)addQuestion:(DecisionTreeQuestion *)question {
    [_questions setObject:question
                   forKey:[question questionId]];
    
    if (!_firstQuestionId) {
        _firstQuestionId = [question questionId];
    }
}

@end